//// new
//// c++ 使用new在栈区开辟数据，使用delete释放
//
//#include <iostream>
//
//// 占位函数
//void func(int a, int)
//{
//	std::cout << "this is func" << std::endl;
//}
//
//
//int main(void)
//{
//	// new 的基本语法
//	int* p = new int(10);		// 小括号代表创建一个变量
//
//	std::cout << *p << std::endl;
//	*p = 100;
//	std::cout << *p << std::endl;
//
//	delete p;
//
//	int* q = new int[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		q[i] = i * 1000;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		// *q+i 和 *(q+i)是不一样的
//		std::cout << *(q + i) << std::endl;
//
//	}
//
//	// 释放数组的时候需要加中括号
//	delete [] q;
//
//	int sss = 1000;
//	int& bbb = sss;
//
//	std::cout << sss << std::endl;
//	std::cout << bbb << std::endl;
//
//	bbb = 10;
//
//	std::cout << sss << std::endl;
//	std::cout << bbb << std::endl;
//
//	return 0;
//}