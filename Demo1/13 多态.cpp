//#include <iostream>
//#include <string>
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::ostream;
//
///*	多态
//*	@ 多态是C++面向对象三大特征之一
//*		> 分类
//*			- 静态多态：函数重载和运算符重载属于静态多态，复用函数名
//*			- 动态多态：派生类和虚函数实现运行时多态
//*		> 区别
//*			- 静态多态的函数地址早绑定，编译阶段确定函数地址
//*			- 动态多态的函数地址晚绑定，运行阶段确定函数地址
//*	@ 动态多态
//*		> 满足的条件
//*			- 有继承关系
//*			- 子类要重写父类的虚函数
//*		> 使用
//*			- 父类的指针或者引用执行子类对象
//*	@ 纯虚函数和抽象类
//*		> 在多态中，通常父类中虚函数的实现都是毫无意义的，主要是调用子类重写的内容，可以将虚函数改为纯虚函数
//*		> 纯虚函数语法：virtual 返回值类型 函数名 （参数列表） = 0;
//*		> 当类中有了纯虚函数，这个类也称为抽象类
//*		> 抽象类特点
//*			- 无法实例化对象
//*			- 子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//*	@ 虚析构和纯虚析构
//*		> 利用虚析构可以解决父类指针释放子类对象时不干净的问题
//*		> 纯虚析构需要声明也需要实现
//*		> 有了纯虚析构，这个类也属于抽象类，无法实例化对象
//*/
//
//// 多态
//class Animal
//{
//public:
//	// 虚函数，必须加virtual关键字
//	virtual void speak(void)
//	{
//		cout << "Animal can speak !" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	// 重写父类的虚函数
//	// 函数的返回类型、函数名、参数列表要完全与父类虚函数相同，前面的virtual可写可不写
//	void speak(void)
//	{
//		cout << "Cat can speak !" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak(void)
//	{
//		cout << "Dog can speak !" << endl;
//	}
//};
//
//// 执行说话函数
//// 地址早绑定，在编译阶段就确定函数地址
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//
//// 测试
//void test01(void)
//{
//	Cat c1;
//
//	doSpeak(c1);
//
//	Dog d1;
//
//	doSpeak(d1);
//}
//
//
//
//int main(void)
//{
//	cout << "wocao" << endl;
//
//	test01();
//
//	return 0;
//}