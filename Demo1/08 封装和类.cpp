//#include <iostream>
//#include <string>
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//
///*  构造函数和析构函数都是必须要有的实现，如果自己不提供，编译器会提供一个空实现的构造和析构函数
//* @ 构造函数:
//*	> 没有返回值，也不用写void
//*	> 函数名和类名相同
//*	> 构造函数可以有参数，可以发生重载
//*	> 创建对象的时候，构造函数会自动调用，而且只调用一次
//* @ 分类
//*	> 按照参数分类：无参构造（默认构造）和有参构造
//*	> 按照类型分类：普通构造和拷贝构造
//* @ 调用
//*	> 括号法：调用默认构造函数的时候不要加 ()，加上()会让编译器认为是函数的声明
//*	> 显示法：不要用拷贝构造函数来初始化匿名对象，编译器会认为是对象的声明
//*	> 隐式转换法：
//* @ 调用规则
//*	> 默认情况下，c++编译器至少会给一个类添加3个函数
//*		- 默认构造函数（无参，函数体为空）
//*		- 默认析构函数（无参，函数体为空）
//*		- 默认拷贝函数，对属性进行值拷贝
//*   > 构造函数的调用规则如下：
//*		- 如果用户定义有参构造函数，c++不再提供默认无参构造函数，但是会提供默认拷贝构造函数
//*		- 如果用户定义拷贝构造函数，c++不会再提供其他构造函数
//* @ 深拷贝和浅拷贝
//*	> 浅拷贝：简单的复制拷贝操作，会带来堆区的内存重复释放，需要自己来实现拷贝构造函数来解决
//*	> 深拷贝：在堆区重新申请空间，进行拷贝操作
//* @ 初始化列表
//* @ 类对象作为类成员
//*	> 日常套娃：注意，当作为类成员的时候，需要放在之前
//* @ 静态成员
//*	> 静态成员变量
//*		- 所有对象共享同一份数据
//*		- 在编译阶段分配内存
//*		- 类内声明，类外初始化
//*		- 静态成员变量一样拥有访问权限
//*	> 静态成员函数
//*		- 所有对象共享同一个函数
//*		- 静态成员函数只能访问静态成员变量
//*		- 静态成员函数也是有访问权限的
//*
//*/
//
//class Student
//{
//
//
//public:
//	// 无参构造（默认构造）
//	Student()
//	{
//		cout << "Student 无参（默认）构造函数" << endl;
//	}
//	// 有参构造
//	Student(int a)
//	{
//		cout << "Student 有参构造函数" << endl;
//	}
//	// 拷贝构造
//	Student(const Student &s)
//	{
//		// 将传入的对象的属性传递到这个对象身上
//		cout << "Student 拷贝构造函数" << endl;
//	}
//
//	// 析构函数
//	// 没有返回值，不写void
//	// 函数名和类名相同，不过要在最前面加一个~
//	// 析构函数不可以有参数，不可以发生重载
//	// 对象在销毁前会自动调用析构函数，并且只会调用一次
//	~Student()
//	{
//		cout << "Student 析构函数" << endl;
//	}
//
//};
//
//class Person
//{
//public:
//	Person(int age, int height)
//	{
//		cout << "Person的有参构造函数调用" << endl;
//		m_age = age;
//		m_Height = new int(height);
//	}
//
//	// 初始化还有一种写法
//	//Person(int age) : m_age(age)
//	//{
//
//	//}
//
//	Person(const Person &p)
//	{
//		cout << "Person的拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//		//m_Height = p.m_Height;			// 编译器默认的语句
//		// 深拷贝操作
//		m_Height = new int(*p.m_Height);
//	}
//
//	void setAge(int age)
//	{
//		m_age = age;
//	}
//
//	int showAge(void)
//	{
//		return m_age;
//	}
//
//	void setHigher(int height)
//	{
//		m_Height = new int(height);
//	}
//
//	int showHeight(void)
//	{
//		return *m_Height;
//	}
//
//	~Person()
//	{
//		// 析构函数：将堆区开辟的数据作释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//
//		cout << "Person的析构函数调用" << endl;
//	}
//
//protected:
//	int m_age;
//	int* m_Height;
//};
//
//// 构造函数调用测试
////void test1(void)
////{
////	// 1、括号法
////	//Student s1;				// 默认构造函数的调用，不能写 ()，加上()会让编译器认为是函数的声明
////	//Student s2(10);			// 有参构造函数的调用
////	//Student s3(s2);			// 拷贝构造函数的调用
////
////	// 2、显示法
////	//Student s1;
////	//Student s2 = Student(10);	// 有参构造
////	//Student s3 = Student(s2);	// 拷贝构造
////
////	//Student(10);				// 匿名对象：当前行执行结束后，系统会立即回收匿名对象
////
////	// 3、隐式转换法
////	//Student s1 = 10;			// 有参构造，相当于写了Student s1 = Student(10);
////	//Student s2 = s1;			// 拷贝构造
////
////	cout << endl;
////}
////
////void giveWork1(Person new_p)
////{
////	Person p(new_p);
////	cout << "p的年龄为：" << p.showAge() << endl;
////}
////
////Person giveWork2(void)
////{
////	Person p1(100);
////	return p1;
////}
////
////// 拷贝函数的调用时机测试
////void test2(void)
////{
////	Person p1(20);
////	// 1、使用一个已经创建完毕的对象来初始化一个新对象
////	Person p2(p1);
////
////	// 2、值传递的方式给函数参数传值
////	giveWork1(p1);
////
////	// 3、值方式返回局部对象
////	Person p3 = giveWork2();
////	Person p4(giveWork2());
////
////	cout << "p1的年龄为：" << p1.showAge() << endl;
////	cout << "p2的年龄为：" << p2.showAge() << endl;
////	cout << "p3的年龄为：" << p3.showAge() << endl;
////	cout << "p4的年龄为：" << p4.showAge() << endl;
////}
////
////// 构造函数调用规则测试
////void test3(void)
////{
////	// 当定义有参构造函数之后，默认构造函数将不再提供
////	// 当定义拷贝构造函数之后，编译器不再提供默认构造函数和有参构造函数
////	Person p;
////	p.setAge(24);
////	// 编译器提供默认拷贝构造函数
////	Person p1(p);
////
////	cout << "p's age is : " << p.showAge() << endl;
////	cout << "p1's age is : " << p1.showAge() << endl;
////}
//
//// 深拷贝和浅拷贝测试
////void test4(void)
////{
////	Person p1(24, 176);
////	Person p2(p1);
////
////	cout << "p1's age is : " << p1.showAge() << endl << "p1's heighth is : " << p1.showHeight() << endl;
////	cout << "p2's age is : " << p2.showAge() << endl << "p2's heighth is : " << p2.showHeight() << endl;
////}
//
//// 静态成员测试
////class Water
////{
////public:
////	/* 静态成员变量	
////	*	- 所有对象都共享同一份数据
////	*	- 编译阶段就分配内存
////	*	- 类内声明，类外初始化操作
////	*/
////	static int m_A;		// 类内声明
////
////	/* 静态成员函数
////	*	- 所有对象共享同一个函数
////	*	- 静态成员函数只能访问静态成员变量
////	*/ 
////	static void func(void)
////	{
////		m_A = 100;		// 静态成员函数可以访问静态成员变量，不能访问非静态成员变量
////		cout << "static void func 调用测试。" << endl;
////	}
////
////private:
////	static int m_B;
////};
////
////int Water::m_A = 100;	// 类外初始化
////
////void test5(void)
////{
////	/*	静态成员变量不属于某一个对象上，所有对象都共享同一份数据
////	*	静态成员变量有两种访问方式：
////	*		- 通过对象进行访问
////	*		- 通过类名进行访问
////	*/
////	Water w;
////	cout << w.m_A << endl;
////	Water w1;
////	w1.m_A = 200;
////
////	// 通过对象进行访问
////	cout << w.m_A << endl;
////	// 通过类名进行访问
////	cout << Water::m_A << endl;
////
////	/* 静态成员函数一样有两种访问方式
////	*	- 通过对象进行访问
////	*	- 通过类名进行访问
////	*/
////
////	// 通过对象进行访问
////	w.func();
////	// 通过类名进行访问
////	Water::func();
////}
//
//int main(void)
//{
//	// 经典wocao
//	cout << "wocao" << endl;
//
//	//test1();		// 构造函数调用测试
//	//test2();		// 拷贝函数的调用时机测试
//	//test3();		// 构造函数调用规则测试
//	//test4();		// 深拷贝和浅拷贝测试
//	//test5();		// 静态成员测试
//
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////// 类
////// class 代表一个类，Circle跟着的是类的名称
////class Circle
////{
////// 公共权限：类内可以访问，类外可以访问
////public:
////	// 属性
////	int m_r;
////	// 行为
////	double calculateZC()
////	{
////		return 2 * 3.14 * m_r;
////	}
////
////// 保护权限：类内可以访问，类外不能访问，子可以访问父中的保护内容
////protected:
////
////// 私有权限：类内可以访问，类外不能访问，子不可访问父中的保护内容
////private:
////
////
////};
////
////// 学生类
////class Student
////{
////// 公共权限
////public:
////	int m_id;
////	string m_name;
////
////	void setName(string name) {
////		m_name = name;
////	}
////
////	void setID(int id) {
////		m_id = id;
////	}
////
////	void showStudent(void) {
////		cout << "学号：" << m_id << "姓名：" << m_name << endl;
////	}
////// 私有权限
////private:
////
////// 保护权限
////protected:
////	
////};
////
////int main(void){
////	cout << "wocao" << endl;
////
////	// 通过一个类来创建对象（使用Ciecle类来创建一个具体的圆cl）
////	Circle cl;
////	// 给圆的对象的属性赋值
////	cl.m_r = 100;
////	cout << "圆的周长为：" << cl.calculateZC() << endl;
////
////	Student s1;
////	s1.setID(2020141277);
////	s1.setName("李光鑫");
////	s1.showStudent();
////
////	return 0;
////}
//
//
//
//
//
