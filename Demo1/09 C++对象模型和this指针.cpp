//#include <iostream>
//#include <string>
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//
///* C++对象模型和this指针
//*	@ 成员变量和成员函数分开存储
//*		> 在C++中，类内的成员变量和成员函数分开存储，只有非静态成员变量才属于类的对象上
//*	@ this 指针
//*		> this 指针指向被调用的成员函数所属的对象
//*			- this 指针是隐含每一个非静态成员函数内的一种指针
//*			- this 指针不需要定义，直接使用即可
//*		> this 指针的用途
//*			- 当形参和成员变量同名时，可用this指针来区分
//*			- 在类的非静态成员函数中返回对象本身，可使用 return *this
//*	@ 空指针访问成员函数
//*		> C++中空指针也是可以调用成员函数的，但是要注意有没有用到this指针（类属性的前面默认加了this）
//*	@ const 修饰成员函数
//*		> 常函数
//*			- 成员函数后加const后称这个函数为常函数
//*			- 常函数内不可以修改成员属性
//*			- 成员属性声明时加关键字mutable后，在常函数中依然可以修改
//*		> 常对象
//*			- 声明对象前加const称该对象为常对象
//*			- 常对象只能调用常函数
//*/
//
//class Person
//{
//public:
//	int m_A;		// 非静态成员变量，属于类的对象上
//
//	static int m_B;	// 静态成员变量，不属于类的对象上
//
//	void func(void)	// 非静态成员函数，不属于类的对象上
//	{
//		m_C = 100;
//	}
//
//	static void func1(void)	// 静态成员函数，不属于类的对象上
//	{}
//
//	Person(int age)
//	{
//		// 解决名称冲突
//		// this 指针指向的是被调用的成员函数所属的对象
//		this->age = age;
//	}
//
//	// 以引用的方式返回，相当于返回与之前p2相同的Person
//	// 如果直接返回Person，则相当于新建一个对象
//	Person& PersonAddAge(Person p)
//	{
//		this->age += p.age;
//
//		// this指向对象的指针，而*this指向的是这个对象的本体
//		return *this;
//	}
//
//	int age;
//
//	// this指针的本质是指针常量，指针的指向是不可以修改的
//	// const Person * const this;
//	// 在成员函数之后加一个const修饰的是this指针，让指针指向的值也不可以修改
//	void showAge() const	// 这个const加上之后，this指向的值不能再修改
//	{
//		//this->m_C = 100;
//		this->m_D = 100;
//		//this = NULL;		// this指针不可以修改指针指向的
//	}
//	int m_C;
//	mutable int m_D;		// 特殊变量，即使是在常函数中，也可以修改，加关键字mutable
//};
//
////void test01(void)
////{
////	Person p;
////
////	// 空对象所占内存空间为：1
////	// c++编译器会给每个空对象分配一个字节空间，为了区分对象占内存的位置
////	// 每个空对象也应该有一个独一无二的内存地址
////	cout << "size of p = " << sizeof(p) << endl;
////}
////
////void test02(void)
////{
////	Person p;
////
////	cout << "size of p = " << sizeof(p) << endl;
////}
//
//void test03(void)
//{
//	Person p1(18);
//
//	cout << "p1的年龄为：" << p1.age << endl;
//}
//
//void test04(void)
//{
//	Person p1(20);
//
//	Person p2(30);
//
//	// 链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "p2的年龄为：" << p2.age << endl;
//}
//
//void test05(void)
//{
//	// 在对象前面加const，变为常对象
//	const Person p1(100);
//
//	//p1.m_C = 200;
//	p1.m_D = 200;		// m_B是一个特殊值，在常对象下可以修改
//
//	// 常对象只能调用常函数
//	p1.showAge();
//	//p1.func();	// 常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
//}
//
//int main(void)
//{
//	// 经典wocao
//	cout << "wocao" << endl;
//
//	//test01();		// 测试空对象所占内存空间大小
//	//test02();
//
//	test03();		// 测试this指针
//	test04();
//
//	return 0;
//}