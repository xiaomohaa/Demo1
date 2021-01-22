//
///*	deque 容器
//*	@ deque 容器基本概念
//*		> 功能：
//*			- 双端数组，可以对头端进行插入删除操作
//*		> deque 与 vector 区别：
//*			- vector对于头部的插入删除效率低，数据量越大，效率越低
//*			- deque相对而言，对头部的插入删除速度回比vector快
//*			- vector访问元素时的速度会比deque快,这和两者内部实现有关
//*	@ deque 构造函数
//*		> 功能描述：
//*			- deque 容器构造
//*		> 函数原型：
//*			- deque<T> deqT;						// 默认构造形式
//*			- deque(beg, end);						// 构造函数将[beg, end)区间中的元素拷贝给本身。
//*			- deque(n, elem);						// 构造函数将n个elem拷贝给本身。
//*			- deque(const deque &deq);				// 拷贝构造函数
//*		! deque 容器和vector容器的构造方式几乎一致
//*	@ deque 赋值操作
//*		> 功能描述：
//*			- 给deque容器进行赋值
//*		> 函数原型：
//*			- deque& operator=(const deque &deq);	// 重载等号操作符
//*			- assign(beg, end);						// 将[beg, end)区间中的数据拷贝赋值给本身。
//*			- assign(n, elem);						// 将n个elem拷贝赋值给本身。
//*	@ deque 大小操作
//*		> 功能描述：
//*			- 对deque容器的大小进行操作
//*		> 函数原型：
//*			- deque.empty();						// 判断容器是否为空
//*			- deque.size();							// 返回容器中元素的个数
//*			- deque.resize(num);					// 重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
//*													// 如果容器变短，则末尾超出容器长度的元素被删除。
//*			- deque.resize(num, elem);				// 重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
//*													// 如果容器变短，则末尾超出容器长度的元素被删除。
//*		! deque 没有容量的概念
//*	@ deque 插入和删除
//*		> 功能描述：
//*			- 向deque容器中插入和删除数据
//*		> 函数原型：
//*		两端插入操作：
//*			- push_back(elem);						// 在容器尾部添加一个数据
//*			- push_front(elem);						// 在容器头部插入一个数据
//*			- pop_back();							// 删除容器最后一个数据
//*			- pop_front();							// 删除容器第一个数据
//*		指定位置操作：
//*			- insert(pos,elem);						// 在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//*			- insert(pos,n,elem);					// 在pos位置插入n个elem数据，无返回值。
//*			- insert(pos,beg,end);					// 在pos位置插入[beg,end)区间的数据，无返回值。
//*			- clear();								// 清空容器的所有数据
//*			- erase(beg,end);						// 删除[beg,end)区间的数据，返回下一个数据的位置。
//*			- erase(pos);							// 删除pos位置的数据，返回下一个数据的位置。
//*	@ deque 数据存取
//*		> 功能描述：
//*			- 对deque 中的数据的存取操作
//*		> 函数原型：
//*			- at(int idx);							// 返回索引idx所指的数据
//*			- operator[];							// 返回索引idx所指的数据
//*			- front();								// 返回容器中第一个数据元素
//*			- back();								// 返回容器中最后一个数据元素
//*	@ deque 排序
//*		> 功能描述：
//*			- 利用算法实现对deque容器进行排序
//*		> 算法：
//*			- sort(iterator beg, iterator end)		// 对beg和end区间内元素进行排序
//*			- #include <algorithm>					// 需要标准算法头文件
//*/
//
//#include <iostream>
//#include <deque>
//#include <algorithm>		// 标准算法头文件
//
//using namespace std;
//
//// deque 排序
//void test01(void)
//{
//	deque<int> d1;
//	d1.push_back(1);
//	d1.push_back(4);
//	d1.push_back(3);
//	d1.push_back(6);
//	d1.push_back(2);
//	d1.push_back(7);
//	d1.push_back(5);
//
//	cout << "排序前：";
//	for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//
//	// 排序，默认规则为从小到大
//	// 对于支持随机访问的迭代器的容器，都可以用sort算法进行排序
//	// vector 容器也可以
//	sort(d1.begin(), d1.end());
//
//	cout << "排序后：";
//	for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
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
//	test01();
//
//	return 0;
//}