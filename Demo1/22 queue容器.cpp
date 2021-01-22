//
///*	queue 容器
//*	@ queue 基本概念
//*		> 概念：Queue是一种先进先出(First In First Out,FIFO)的数据结构，它有两个出口
//*			- 队列容器允许从一端新增元素，从另一端移除元素
//*			- 队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为
//*			- 队列中进数据称为 --- 入队 push
//*			- 队列中出数据称为 --- 出队 pop
//*	@ queue 常用接口
//*		> 功能描述：
//*			- 栈容器常用的对外接口
//*		> 构造函数：
//*			- queue<T> que;								// queue采用模板类实现，queue对象的默认构造形式
//*			- queue(const queue &que);					// 拷贝构造函数
//*		> 赋值操作：
//*			- queue& operator=(const queue &que);		// 重载等号操作符
//*		> 数据存取：
//*			- push(elem);								// 往队尾添加元素
//*			- pop();									// 从队头移除第一个元素
//*			- back();									// 返回最后一个元素
//*			- front();									// 返回第一个元素
//*		> 大小操作：
//*			- empty();									// 判断堆栈是否为空
//*			- size();									// 返回栈的大小
//*/
//
//
//#include <iostream>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age);
//
//	string m_name;
//	int m_Age;
//};
//
//Person::Person(string name, int age)
//{
//	this->m_name = name;
//	this->m_Age = age;
//}
//
//
//void test01(void)
//{
//	// 创建队列
//	queue<Person> q1;
//
//	// 准备数据
//	Person p1("AAA", 100);
//	Person p2("BBB", 200);
//	Person p3("CCC", 300);
//	Person p4("DDD", 400);
//	Person p5("EEE", 500);
//
//	// 入队
//	q1.push(p1);
//	q1.push(p2);
//	q1.push(p3);
//	q1.push(p4);
//	q1.push(p5);
//
//	cout << "出队前队列大小为：" << q1.size() << endl;
//
//	// 判断只要队列不为空，查看队头，查看队尾，执行出队操作
//	while (!q1.empty())
//	{
//		// 查看队头元素
//		cout << "当前队头是：" << q1.front().m_name << "  年龄为：" << q1.front().m_Age << endl;
//		// 查看队尾元素
//		cout << "当前队尾是：" << q1.back().m_name << "  年龄为：" << q1.back().m_Age << endl;
//		// 出队操作
//		q1.pop();
//		cout << endl;
//	}
//	cout << "出队后队列大小为：" << q1.size() << endl;
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