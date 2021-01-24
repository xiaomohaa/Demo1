//
///*	函数对象
//*	@ 函数对象概念
//*		> 概念：
//*			- 重载函数调用操作符的类，其对象常称为函数对象
//*			- 函数对象使用重载的()时，行为类似函数调用，也叫仿函数
//*		> 本质：
//*			- 函数对象(仿函数)是一个类，不是一个函数
//*	@ 函数对象使用
//*		> 特点：
//*			- 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
//*			- 函数对象超出普通函数的概念，函数对象可以有自己的状态
//*			- 函数对象可以作为参数传递
//*		! 仿函数写法非常灵活，可以作为参数进行传递
//*	@ 谓词
//*		> 概念：
//*			- 返回bool类型的仿函数称为谓词
//*			- 如果operator()接受一个参数，那么叫做一元谓词
//*			- 如果operator()接受两个参数，那么叫做二元谓词
//*	@ 内建函数对象
//*		> 概念：
//*			- STL内建了一些函数对象
//*		> 分类:
//*			- 算术仿函数
//*			- 关系仿函数
//*			- 逻辑仿函数
//*		> 用法：
//*			- 这些仿函数所产生的对象，用法和一般函数完全相同
//*			- 使用内建函数对象，需要引入头文件 #include<functional>
//*	@ 算术仿函数
//*		> 功能描述：
//*			- 实现四则运算
//*			- 其中negate是一元运算，其他都是二元运算
//*		> 仿函数原型：
//*			- template<class T> T plus<T>								// 加法仿函数
//*			- template<class T> T minus<T>								// 减法仿函数
//*			- template<class T> T multiplies<T>							// 乘法仿函数
//*			- template<class T> T divides<T>							// 除法仿函数
//*			- template<class T> T modulus<T>							// 取模仿函数
//*			- template<class T> T negate<T>								// 取反仿函数
//*	@ 关系仿函数
//*		> 功能描述：
//*			- 实现关系对比
//*		> 仿函数原型：
//*			- template<class T> bool equal_to<T>						// 等于
//*			- template<class T> bool not_equal_to<T>					// 不等于
//*			- template<class T> bool greater<T>							// 大于
//*			- template<class T> bool greater_equal<T>					// 大于等于
//*			- template<class T> bool less<T>							// 小于
//*			- template<class T> bool less_equal<T>						// 小于等于
//*	@ 逻辑仿函数
//*		> 功能描述：
//*			- 实现逻辑运算
//*		> 函数原型：
//*			- template<class T> bool logical_and<T>						// 逻辑与
//*			- template<class T> bool logical_or<T>						// 逻辑或
//*			- template<class T> bool logical_not<T>						// 逻辑非
//*/
//
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string str)
//	{
//		cout << str << endl;
//		this->count++;
//	}
//
//	// 添加内部自己状态
//	int count;
//};
//
//// 一元谓词
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//// 二元谓词
//class MyCompare
//{
//public:
//	bool operator()(int val1, int val2)
//	{
//		return val1 > val2;
//	}
//};
//
//void doPrint(MyPrint& mp, string str)
//{
//	mp(str);
//}
//
//// 函数对象
//void test01(void)
//{
//	// 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
//	MyAdd myAdd;
//	cout << myAdd(1, 1) << endl;;
//
//	// 函数对象超出普通函数的概念，函数对象可以有自己的状态
//	MyPrint myPrint;
//	myPrint("wocao");
//	myPrint("wocao");
//	myPrint("wocao");
//	myPrint("wocao");
//	myPrint("wocao");
//
//	cout << "MyPrint调用次数为：" << myPrint.count << endl;
//
//	// 函数对象可以作为参数传递
//	MyPrint m1;
//	doPrint(m1, "wocao");
//
//}
//
//// 一元谓词
//void test02(void)
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	// 查找容器中大于5的数字
//	// GreaterFive()是匿名的函数对象
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end())
//	{
//		cout << "can't find the num which is greater than 5 !";
//	}
//	else
//	{
//		cout << "find the num which is greater than 5 : " << *it << endl;
//	}
//}
//
//// 二元谓词
//void test03(void)
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//
//	// 
//	sort(v.begin(), v.end());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//
//	// 使用函数对象改变算法策略，变为排序规则为降序
//	sort(v.begin(), v.end(), MyCompare());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//}
//
//// 算术仿函数
//void test04(void)
//{
//	// negate 一元仿函数，取反函数
//	negate<int>n1;
//	cout << "50取反的结果为：" << n1(50) << endl;
//
//	// plus 二元仿函数，加法
//	plus<int>p1;
//	cout << "10 + 20 = " << p1(10, 20) << endl;
//}
//
//// 关系仿函数
//void  test05(void)
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//
//	// greater<int>()内建仿函数对象
//	sort(v.begin(), v.end(), greater<int>());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//}
//
//// 逻辑仿函数
//void test06(void)
//{
//	vector<bool>v;
//	v.push_back(true);
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(false);
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//
//	// 利用逻辑非将容器v搬运到容器v2中，并执行取反操作
//	vector<bool>v2;
//	v2.resize(v.size());
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//}
//
//int main(void)
//{
//	cout << "wocao" << endl;
//
//	//test01();
//	//test02();
//	//test03();
//	//test04();
//	//test05();
//	test06();
//
//	return 0;
//}