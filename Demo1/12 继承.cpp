//#include <iostream>
//#include <string>
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::ostream;
//
///*	继承：减少重复的代码
//*	@ 语法：class 子类 ：继承方式 父类
//*		> 子类也成为派生类
//*		> 父类也称为基类
//*	@ 继承方式
//*		> 公共继承（public）	：public和protected被继承到public和protected权限，原private不可访问
//*		> 保护继承（protected）	：public和protected被继承到protected，原private不可访问
//*		> 私有继承（private）	：public和protected被继承到private，原private不可访问
//*	@ 继承中的对象模型
//*		> 利用开发人员命令提示工具查看具体对象模型
//*		> cd跳转到正确路径后，输入cl /d1 reportSingleClassLayoutSon "12 继承.cpp"查看
//*	@ 继承中构造和析构顺序
//*		> 先构造父类，再构造子类；析构顺序与构造顺序相反
//*	@ 继承同名成员处理方式
//*		> 访问子类同名成员，直接访问即可
//*		> 访问父类同名成员，需要加作用域（想要拿爸爸的东西最好都要通知一下）
//*	@ 继承同名静态成员处理方式
//*		> 访问子类同名成员，直接访问即可
//*		> 访问父类同名成员，需要加作用域（想要拿爸爸的东西最好都要通知一下）
//*	@ 多继承语法（不建议）
//*		> 要注意作用域问题
//*	@ 菱形继承
//*		> 菱形继承的时候会出现相同数据，需要加以作用域进行区分
//*		> 利用虚继承解决菱形继承的问题，在继承之前加上关键字 virtual
//*/
//
//// 继承实现
//// 公共页面
//class BasePage
//{
//public:
//	void header(void)
//	{
//		cout << "public header" << endl;
//	}
//	void footer(void)
//	{
//		cout << "public footer" << endl;
//	}
//	void lefter(void)
//	{
//		cout << "public lefter" << endl;
//	}
//};
//
//class Java: public BasePage
//{
//public:
//
//	void content(void)
//	{
//		cout << "Java" << endl;
//	}
//};
//
//class Python : public BasePage
//{
//public:
//	void content(void)
//	{
//		cout << "Python" << endl;
//	}
//};
//
//class Cpp : public BasePage
//{
//public:
//	void content(void)
//	{
//		cout << "Cpp" << endl;
//	}
//};
//
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数！" << endl;
//		flag = 1;
//	}
//
//	~Base()
//	{
//		cout << "Base的析构函数！" << endl;
//	}
//
//	void show(void)
//	{
//		cout << "Base's show." << endl;
//	}
//
//public:
//	int m_A;
//	int flag;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数！" << endl;
//		flag = 2;
//	}
//
//	~Son()
//	{
//		cout << "Son的析构函数！" << endl;
//	}
//
//	void show(void)
//	{
//		cout << "Son's show." << endl;
//	}
//
//public:
//	int m_D;
//	int flag;
//};
//
//// 继承测试
//void test01(void)
//{
//	Java j1;
//
//	cout << "Java Web" << endl;
//
//	j1.header();
//	j1.lefter();
//	j1.footer();
//	j1.content();
//}
//
//// 继承中的对象模型测试
//void test02(void)
//{
//	// 父类中的所有非静态成员属性都会被子类继承下去
//	// 父类中的私有成员属性是被编译器隐藏了，因此访问不到，但是确实被继承下去了
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
//
//// 构造函数和析构函数顺序测试
//void test03(void)
//{
//	Son s;
//}
//
//// 继承中同名成员处理
//void test04(void)
//{
//	Son s;
//
//	cout << "Son's flag = " << s.flag << endl;
//	// 如果通过子类对象访问到父类中同类成员，需要加作用域
//	cout << "Base's flag = " << s.Base::flag << endl;
//
//	s.show();
//
//	// 如果子类中出现和父类同名的成员函数，子类的同名函数会隐藏掉父类中所有的同名成员函数（包括重载）
//	// 如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//	s.Base::show();
//}
//
//
//int main(void) 
//{
//	cout << "wocao" << endl;
//
//	//test01();
//	//test02();
//	//test03();
//	test04();
//
//	system("pause");
//	return 0;
//}