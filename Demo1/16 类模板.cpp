//#include <iostream>
//#include <string>
//
//using std::cout;
//using std::endl;
//using std::string;
//
///*	类模板
//*	@ 作用：建立一个通用类，类中的成员数据类型可以不具体确定，用一个虚拟的类型来代表
//*	@ 类模板与函数模板的区别
//*		> 类模板没有自动类型推导的使用方式
//*		> 类模板在模板参数列表中可以有默认参数
//*	@ 类模板中成员函数创建时机
//*		> 普通类中的成员函数一开始就可以创建
//*		> 类模板中的成员函数在调用时才创建
//*	@ 类函数对象做函数参数
//*		> 类模板实例化出的对象，向函数传参的方式
//*		> 三种传入方式
//*			- 指定传入的类型：直接显示对象的数据类型（最常用）
//*			- 参数模板化	：将对象中的参数变为模板进行传递
//*			- 整个类模板化	：将这个对象类型模板化进行传递
//*	@ 类模板与继承
//*		> 当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
//*		> 如果不指定，编译器无法给子类分配内存
//*		> 如果想灵活指定出父类中T的类型，子类也需变为类模板
//*	@ 类模板成员函数类外实现
//*	@ 类模板分文件编写
//*		> 将类模板卸载hpp文件中
//*	@ 类模板与友元
//*		> 全局函数类内实现：直接在类内声明友元即可
//		> 全局函数类外实现：需要提前让编译器知道全局函数的存在
//*/
//
//// 类模板
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name = " << this->m_Name << endl;
//		cout << "age = " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//// 类模板与继承
//template<class T>
//class Base
//{
//public:
//	T m;
//};
////class Son :public Base		// 错误，必须要知道父类中的T类型，才能继承给子类
//class Son:public Base<int>
//{
//};
//// 如果想灵活指定出父类中T的类型，子类也需变为类模板
//template<class T1, class T2>
//class Son1 :public Base<T1>
//{
//public:
//	T2 obj;
//};
//
//// 类模板成员函数类外实现
//template<class T1, class T2>
//class Student
//{
//public:
//	Student(T1 name, T2 age);
//
//	void showStudent();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//// 构造函数类外实现
//template<class T1, class T2>
//Student<T1, T2>::Student(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//// 成员函数类外实现
//template<class T1, class T2>
//void Student<T1, T2>::showStudent()
//{
//	cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
//}
//
//// 1、指定传入类型
//void printPerson0(Person<string, int>& p)
//{
//	p.showPerson();
//}
//// 2、参数模板化
//template<class T1,class T2>
//void printPerson1(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1的数据类型为：" << typeid(T1).name() << endl;
//	cout << "T2的数据类型为：" << typeid(T2).name() << endl;
//}
//// 3、整个类模板化
//template<class T>
//void printPerson2(T& p)
//{
//	p.showPerson();
//	cout << "T的数据类型为：" << typeid(T).name() << endl;
//}
//
//void test01(void)
//{
//	// Person s1("小默", 23);			// 错误，无法使用自动推导
//	Person<string, int> s1("小默", 23);
//	Person<string> s2("小妍", 22);
//
//	s1.showPerson();
//	s2.showPerson();
//
//	printPerson0(s1);
//	printPerson1(s1);
//	printPerson2(s2);
//}
//
//void test02(void)
//{
//	Son1<int, char> s1;
//	s1.m = 10;
//	s1.obj = 's';
//	cout << "s1.m = " << s1.m << endl;
//	cout << "s1.obj = " << s1.obj << endl;
//
//	Son1<char, int> s2;
//	s2.obj = 100;
//	s2.m = 'A';
//	cout << "s2.m = " << s2.m << endl;
//	cout << "s2.obj = " << s2.obj << endl;
//}
//
//void test03(void)
//{
//	Student<string, int> s1("小哈", 18);
//	s1.showStudent();
//}
//
//int main(void)
//{
//	cout << "woCao" << endl;
//
//	// test01();
//	// test02();
//	test03();
//
//	return 0;
//}