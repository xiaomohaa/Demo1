#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/* C++对象模型和this指针
*	@ 成员变量和成员函数分开存储
*		> 在C++中，类内的成员变量和成员函数分开存储，只有非静态成员变量才属于类的对象上
*	@ this 指针
*		> this 指针指向被调用的成员函数所属的对象
*			- this 指针是隐含每一个非静态成员函数内的一种指针
*			- this 指针不需要定义，直接使用即可
*		> this 指针的用途
*			- 当形参和成员变量同名时，可用this指针来区分
*			- 在类的非静态成员函数中返回对象本身，可使用 return *this
*/

class Person
{
public:
	int m_A;		// 非静态成员变量，属于类的对象上

	static int m_B;	// 静态成员变量，不属于类的对象上

	void func(void)	// 非静态成员函数，不属于类的对象上
	{

	}

	static void func(void)	// 静态成员函数，不属于类的对象上
	{

	}
};

void test01(void)
{
	Person p;

	// 空对象所占内存空间为：1
	// c++编译器会给每个空对象分配一个字节空间，为了区分对象占内存的位置
	// 每个空对象也应该有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
}

void test02(void)
{
	Person p;

	// 
	//
	//
	cout << "size of p = " << sizeof(p) << endl;
}


int main(void)
{
	// 经典wocao
	cout << "wocao" << endl;

	test01();		// 测试空对象所占内存空间大小
	test02();
	return 0;
}