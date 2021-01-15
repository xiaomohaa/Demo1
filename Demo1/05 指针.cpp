//#include <iostream>
//#include <Windows.h>
//
//int main(void)
//{
//	using namespace std;
//	
//	SYSTEMTIME sys;
//	GetLocalTime(&sys);
//	printf("%4d/%02d/%02d %02d:%02d:%02d.%03d 星期%1d\n", sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute, sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);
//
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int b = 1000;
//	// 1、指针定义语法： 数据类型 * 指针变量名;
//	int* p;
//	int* q;
//	// 2、指针用法：
//	// 使用解引用的方式来找到指针指向的内存
//	// 指针前面加* 代表解引用，找到指针指向的内存
//	p = &b;
//	q = &a[5];
//	// 通俗的理解是指针存的是地址，加上*表示数据
//	cout << p << endl;
//	cout << *p << endl;
//	cout << q << endl;
//	cout << *q << endl;
//	cout << q + 1 << endl;
//	cout << *q + 1 << endl;
//	// 3、指针所占的内存空间: 与系统有关，x64为8字节，x86为4字节
//	cout << sizeof(char *) << endl;
//	cout << sizeof(int *) << endl;
//	cout << sizeof(long *) << endl;
//	cout << sizeof(double *) << endl;
//	// 4、空指针：空指针指向的内存是不可访问的，用于给指针标量初始化
//	// 0-255之间内存编号是系统占用，用户不可访问
//	int* m = NULL;
//	// 5、野指针：
//	// 6、const修饰指针:可以修改指向，
//
//
//	return 0;
//}