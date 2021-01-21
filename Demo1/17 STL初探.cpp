//
///*	STL
//*	@ STL基本概念
//*		> STL(Standard Template Library,标准模板库)
//*		> STL 从广义上分为: 容器(container) 算法(algorithm) 迭代器(iterator)
//*		> 容器和算法之间通过迭代器进行无缝连接。
//*		> STL 几乎所有的代码都采用了模板类或者模板函数
//*	@ STL六大组件
//*		> STL大体分为六大组件，分别是:容器、算法、迭代器、仿函数、适配器（配接器）、空间配置器
//*			- 容器：各种数据结构，如vector、list、deque、set、map等,用来存放数据。
//*			- 算法：各种常用的算法，如sort、find、copy、for_each等
//*			- 迭代器：扮演了容器与算法之间的胶合剂。
//*			- 仿函数：行为类似函数，可作为算法的某种策略。
//*			- 适配器：一种用来修饰容器或者仿函数或迭代器接口的东西。
//*			- 空间配置器：负责空间的配置与管理。
//*	@ STL中容器、算法、迭代器
//*		> 容器：置物之所也
//*		> STL容器就是将运用最广泛的一些数据结构实现出来
//*		> 常用的数据结构：数组, 链表,树, 栈, 队列, 集合, 映射表 等
//*		> 这些容器分为序列式容器和关联式容器两种:
//*			- 序列式容器：强调值的排序，序列式容器中的每个元素均有固定的位置
//*			- 关联式容器：二叉树结构，各元素之间没有严格的物理上的顺序关系
//*		> 算法：问题之解决也
//*		> 有限的步骤，解决逻辑或数学上的问题，这一门学科我们叫做算法(Algorithms)
//*		> 算法分为:质变算法和非质变算法
//*			- 质变算法：是指运算过程中会更改区间内的元素的内容。例如拷贝，替换，删除等等
//*			- 非质变算法：是指运算过程中不会更改区间内的元素内容，例如查找、计数、遍历、寻找极值等等
//*		> 迭代器：容器与算法之间的胶合剂
//*		> 提供一种方法，使之能够依序寻访某个容器所含的各个元素，而又无需暴露该容器的内部表示方式
//*		> 每个容器都有自己专属的迭代器
//*		> 迭代器使用非常类似于指针，初学阶段我们可以先理解迭代器为指针
//*		> 迭代器种类：
//*
//*		|-------------------|---------------------------------------------------------------|-------------------------------------------|
//*		|		种类		|							  功能								|				  支持运算					|
//*		|-------------------|---------------------------------------------------------------|-------------------------------------------|
//*		|	 输入迭代器		|						对数据的只读访问						|			只读，支持++、==、！=			|
//*		|	 输出迭代器		|						对数据的只写访问						|			只写，支持++					|
//*		|	 前向迭代器		|				  读写操作，并能向前推进迭代器					|			读写，支持++、==、！=			|
//*		|	 双向迭代器		|				  读写操作，并能向前和向后操作					|			读写，支持++、–，				|
//*		|  随机访问迭代器	|	读写操作，可以以跳跃的方式访问任意数据，功能最强的迭代器	|  读写，支持++、–、[n]、-n、<、<=、>、>=	|
//*		|-------------------|---------------------------------------------------------------|-------------------------------------------|
//*		
//*		！常用的容器中迭代器种类为双向迭代器，和随机访问迭代器
//*	@ vector 存放内置数据类型
//*		> 容  器：vector
//*		> 算  法：for_each
//*		> 迭代器：vector<int>::iterator
//*	@ vector 存放自定义数据类型
//*	@ vector 容器嵌套容器
//*/
//
//#include <iostream>
//#include <vector>
//#include <algorithm>		// 标准算法头文件
//#include <string>
//
//using namespace std;
//
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//// vector 存放内置数据类型
//void test01(void)
//{
//	// 创建一个vector容器，数组
//	vector<int> v;
//
//	// 向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	// 第一种遍历方式
//	// 通过迭代器访问容器中的数据
//	//vector<int>::iterator itBegin = v.begin();		// 起始迭代器，指向容器中的第一个元素
//	//vector<int>::iterator itEnd = v.end();			// 结束迭代器，指向容器中最后一个元素的下一个位置
//	//
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//// 第二种遍历方式
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	// 第三种遍历方式，利用STL提供的遍历算法
//	for_each(v.begin(), v.end(), myPrint);
//}
//
//// vector 存放自定义数据类型
//void test02(void)
//{
//	vector<Person> v;
//
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//	Person p4("d", 40);
//	Person p5("e", 50);
//
//	// 向容器里面添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	// 遍历容器中的数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "name = " << (*it).m_Name << "  age = " << (*it).m_Age << endl;
//		cout << "name = " << it->m_Name << "  age = " << it->m_Age << endl;
//	}
//}
//
//// 存放自定义数据类型 指针
//void test03(void)
//{
//	vector<Person*> v;
//
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//	Person p4("d", 40);
//	Person p5("e", 50);
//
//	// 向容器里面添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	// 遍历容器
//	for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "name = " << (*it)->m_Name << "  age = " << (*it)->m_Age << endl;
//	}
//}
//
//// 
//void test04(void)
//{
//	vector<vector<int>> v;
//
//	// 创建小容器
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	// 向小容器中添加数据
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 1);
//		v3.push_back(i + 1);
//		v4.push_back(i + 1);
//	}
//
//	// 将小容器放入大容器中
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	// 通过大容器把所有的数据遍历
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main(void)
//{
//	cout << "woCao" << endl;
//
//	//test01();
//	//test02();
//	//test03();
//	test04();
//
//	return 0;
//}