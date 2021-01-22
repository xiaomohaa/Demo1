//
///*	vector 容器
//*	@ vector 基本概念
//*		> 功能：vector数据结构和数组非常相似，也称为单端数组
//*		> vector与普通数组区别：
//*			- 不同之处在于数组是静态空间，而vector可以动态扩展
//*		> 动态扩展：
//*			- 并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间
//*			- vector容器的迭代器是支持随机访问的迭代器
//*	@ vector 构造函数
//*		> 功能描述：
//*			- 创建vector容器
//*		> 函数原型：
//*			- vector<T> v;										// 采用模板实现类实现，默认构造函数
//*			- vector(v.begin(), v.end());						// 将v[begin(), end())区间中的元素拷贝给本身。
//*			- vector(n, elem);									// 构造函数将n个elem拷贝给本身。
//*			- vector(const vector &vec);						// 拷贝构造函数。
//*	@ vector赋值操作
//*		> 功能描述：
//*			- 给vector容器进行赋值
//*		> 函数原型：
//*			- vector& operator=(const vector &vec);				// 重载等号操作符
//*			- assign(beg, end);									// 将[beg, end)区间中的数据拷贝赋值给本身。
//*			- assign(n, elem);									// 将n个elem拷贝赋值给本身。
//*		! 总结： vector赋值方式比较简单，使用operator=，或者assign都可以
//*	@ vector容量和大小
//*		> 功能描述：
//*			- 对vector容器的容量和大小操作
//*		> 函数原型：
//*			- empty();											// 判断容器是否为空，真为空
//*			- capacity();										// 容器的容量
//*			- size();											// 返回容器中元素的个数
//*			- resize(int num);									// 重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//*																// 如果容器变短，则末尾超出容器长度的元素被删除。
//*			- resize(int num, elem);							// 重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//*																// 如果容器变短，则末尾超出容器长度的元素被删除
//*	@ vector插入和删除
//*		> 功能描述：
//*			- 对vector容器进行插入、删除操作
//*		> 函数原型：
//*			- push_back(ele);									// 尾部插入元素ele
//*			- pop_back();										// 删除最后一个元素
//*			- insert(const_iterator pos, ele);					// 迭代器指向位置pos插入元素ele
//*			- insert(const_iterator pos, int count,ele);		// 迭代器指向位置pos插入count个元素ele
//*			- erase(const_iterator pos);						// 删除迭代器指向的元素
//*			- erase(const_iterator start, const_iterator end);	// 删除迭代器从start到end之间的元素
//*			- clear();											// 删除容器中所有元素
//*	@ vector数据存取
//*		> 功能描述：
//*			- 对vector中的数据的存取操作
//*		> 函数原型：
//*			- at(int idx);										// 返回索引idx所指的数据
//*			- operator[];										// 返回索引idx所指的数据
//*			- front();											// 返回容器中第一个数据元素
//*			- back();											// 返回容器中最后一个数据元素
//*	@  vector 互换容器
//*		> 功能描述：
//*			- 实现两个容器内元素进行互换
//*		> 函数原型：
//*			- swap(vec);										// 将vec与本身的元素互换
//*	@ 预留空间
//*		> 功能描述：
//*			- 减少vector在动态扩展容量时的扩展次数
//*		> 函数原型：
//*			- reserve(int len);									// 容器预留len个元素长度，预留位置不初始化，元素不可访问
//*/
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//// 遍历函数
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//		
//	}
//	cout << endl;
//}
//
//// vector 构造函数
//void test01(void)
//{
//	// 默认构造，无参构造
//	vector<int>v1;	
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	// 通过区间方式进行构造
//	vector<int> v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	// 构造函数将n个elem拷贝给本身
//	vector<int> v3(10, 8);
//	printVector(v3);
//
//	// 拷贝构造函数
//
//	vector<int> v4(v3);
//	printVector(v4);
//}
//
//// vector 赋值操作
//void test02(void)
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	// 等号赋值
//	vector<int> v2;
//	v2 = v1;
//	printVector(v2);
//
//	// assign 赋值
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	// 将n个elem拷贝赋值给本身
//	vector<int> v4;
//	v4.assign(10, 8);
//	printVector(v4);
//}
//
//// vector 容量和大小
//void test03(void)
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	
//	if (v1.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为：" << v1.capacity() << endl;
//		cout << "v1中元素个数为：" << v1.size() << endl;
//	}
//
//	// 重新指定大小
//	v1.resize(20);		// 长度变长，默认用0填充
//	printVector(v1);	
//	cout << "v1的容量为：" << v1.capacity() << endl;
//	cout << "v1中元素个数为：" << v1.size() << endl;
//
//	v1.resize(30, 88);	// 长度变长，并且用88填充末尾
//	printVector(v1);
//	cout << "v1的容量为：" << v1.capacity() << endl;
//	cout << "v1中元素个数为：" << v1.size() << endl;
//
//	v1.resize(8);		// 长度变短，超出部分删除
//	printVector(v1);
//	cout << "v1的容量为：" << v1.capacity() << endl;
//	cout << "v1中元素个数为：" << v1.size() << endl;
//}
//
//// vector 插入和删除
//void test04(void)
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	v1.pop_back();						// 删除最后一个元素
//	printVector(v1);
//
//	v1.push_back(9);					// 在末尾增加一个9
//	printVector(v1);
//
//	v1.insert(v1.begin() + 1, 88);		// 在头部后1位插入一个88
//	printVector(v1);
//
//	v1.erase(v1.begin() + 1);			// 删除头部后一位的数据
//	printVector(v1);
//
//	v1.insert(v1.begin() + 1, 3, 88);	// 在头部后1位插入3个88
//	printVector(v1);
//
//	v1.erase(v1.begin() + 1, v1.begin() + 4);	// 删除这一段数据
//	printVector(v1);
//
//	v1.clear();							// 清空
//	printVector(v1);
//}
//
//// vector 数据存取
//void test05(void)
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	cout << "v1的第一个数据：" << v1.front() << endl;
//	cout << "v1的最后一个数据：" << v1.back() << endl;
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << v1.at(i) << ' ';
//	}
//	cout << endl;
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << v1[i] << ' ';
//	}
//	cout << endl;
//}
//
////  vector 互换容器
//void test06(void)
//{
//	// 基本使用
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "交换前" << endl;
//	cout << "v1 = ";
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 9; i >= 0; i--)
//	{
//		v2.push_back(i);
//	}
//	cout << "v2 = ";
//	printVector(v2);
//
//	v1.swap(v2);			// 将v1和v2交换
//
//	cout << "交换后" << endl;
//	cout << "v1 = ";
//	printVector(v1);
//	cout << "v2 = ";
//	printVector(v2);
//}
//
//// 巧用swap收缩
//void test07(void)
//{
//	vector<int> v1;
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//	}
//
//	cout << "v1的容量为：" << v1.capacity() << endl;
//	cout << "v1中的元素个数为：" << v1.size() << endl;
//
//	v1.resize(3);			// 重新指定大小
//	cout << "v1的容量为：" << v1.capacity() << endl;
//	cout << "v1中的元素个数为：" << v1.size() << endl;
//
//	// 巧用swap收缩内存
//	vector<int>(v1).swap(v1);
//
//	/*
//	*	vector<int>(v1)		// 匿名对象，当前行执行完，立即回收空间
//	*	.swap(v1)			// 容器交换
//	*/
//
//	cout << "v1的容量为：" << v1.capacity() << endl;
//	cout << "v1中的元素个数为：" << v1.size() << endl;
//}
//
//// vector 预留空间
//void test08(void)
//{
//	vector<int> v1;
//	int num = 0;		// 统计开辟空间的次数
//	int* p = NULL;		
//
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//		if (p != &v1[0])
//		{
//			p = &v1[0];
//			num++;
//		}
//	}
//	cout << "开辟内存的次数为：" << num << endl;
//
//	// 利用reserve预留空间
//	vector<int> v2;
//	v2.reserve(100000);	// 预留十万个空间
//
//	int num1 = 0;		// 统计开辟空间的次数
//	int* p1 = NULL;
//
//	for (int i = 0; i < 100000; i++)
//	{
//		v2.push_back(i);
//		if (p1 != &v2[0])
//		{
//			p1 = &v2[0];
//			num1++;
//		}
//	}
//	cout << "开辟内存的次数为：" << num1 << endl;
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
//	//test06();
//	//test07();
//	test08();
//
//	return 0;
//}
//
//
