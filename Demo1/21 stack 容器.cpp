//
///*	stack 容器
//*	@ stack 基本概念
//*		> 概念：stack是一种先进后出(First In Last Out,FILO)的数据结构，它只有一个出口
//*		> 栈中只有顶端的元素才可以被外界使用，因此栈不允许有遍历行为
//*		> 栈中进入数据称为 --- 入栈 push
//*		> 栈中弹出数据称为 --- 出栈 pop
//*	@ stack 常用接口
//*		> 功能描述：栈容器常用的对外接口
//*		> 构造函数：
//*			- stack<T> stk;								// stack采用模板类实现， stack对象的默认构造形式
//*			- stack(const stack &stk);					// 拷贝构造函数
//*		> 赋值操作：
//*			- stack& operator=(const stack &stk);		// 重载等号操作符
//*		> 数据存取：
//*			- push(elem);								// 向栈顶添加元素
//*			- pop();									// 从栈顶移除第一个元素
//*			- top();									// 返回栈顶元素
//*		> 大小操作：
//*			- empty();									// 判断堆栈是否为空
//*			- size();									// 返回栈的大小
//* 
//*/
//
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//// 栈
//void test01(void)
//{
//	stack<int> s1;
//	
//	// 入栈
//	s1.push(1);
//	s1.push(2);
//	s1.push(3);
//	s1.push(4);
//
//	// 只要栈不为空，查看栈顶，并且执行出栈操作
//	// 只能访问栈顶的元素，所以必须将栈顶的元素pop之后才能访问下一个元素
//	while (!s1.empty())
//	{
//		// 查看栈顶元素
//		cout << "栈顶元素为：" << s1.top() << endl;
//
//		// 出栈
//		s1.pop();
//	}
//
//	cout << "栈的大小为：" << s1.size() << endl;
//
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