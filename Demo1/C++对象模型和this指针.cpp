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
	{}

	static void func1(void)	// 静态成员函数，不属于类的对象上
	{}

	Person(int age)
	{
		// 解决名称冲突
		// this 指针指向的是被调用的成员函数所属的对象
		this->age = age;
	}

	// 以引用的方式返回，相当于返回与之前p2相同的Person
	Person& PersonAddAge(Person p)
	{
		this->age += p.age;

		// this指向对象的指针，而*this指向的是这个对象的本体
		return *this;
	}

	int age;
};

//void test01(void)
//{
//	Person p;
//
//	// 空对象所占内存空间为：1
//	// c++编译器会给每个空对象分配一个字节空间，为了区分对象占内存的位置
//	// 每个空对象也应该有一个独一无二的内存地址
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//void test02(void)
//{
//	Person p;
//
//	cout << "size of p = " << sizeof(p) << endl;
//}

void test03(void)
{
	Person p1(18);

	cout << "p1的年龄为：" << p1.age << endl;
}

void test04(void)
{
	Person p1(20);

	Person p2(30);

	// 链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2的年龄为：" << p2.age << endl;
}

int main(void)
{
	// 经典wocao
	cout << "wocao" << endl;

	//test01();		// 测试空对象所占内存空间大小
	//test02();

	test03();		// 测试this指针
	test04();

	return 0;
}