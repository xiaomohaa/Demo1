#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


/*	友元
*	@ 目的：有些私有属性想让类外特殊的一些函数或者类进行访问，让一个函数或者类访问另一个类中私有成员、
*	@ 关键字：friend
*	@ 友元的三种实现
*		> 全局函数做友元
*		> 类做友元
*		> 成员函数做友元
*	
* 
*/

// 在成员函数做友元时，必须将Building写在后面。同时在前面需要声明Building类
class Building;

class GoodGay
{

public:
	GoodGay();

	void visit();				// 参观函数，访问Building中的属性

	Building* building;

};

class GoodSister
{
public:
	GoodSister();

	void visit1();				// 让visit1函数可以访问Building中私有成员
	void visit2();				// 让visit2函数不可以访问Building中私有成员

	Building* building;
};

class Building
{
	// 全局函数做友元
	// goodGay全局函数是Building的好朋友，可以访问Building中的私有成员
	friend void goodGay(Building* building);		// friend 友元关键字

	// 类做友元
	friend class GoodGay;

	// 成员函数做友元
	friend void GoodSister::visit1();		// GoodSister类下的visit1成员函数作为本类友元，可以访问私有属性

public:
	Building();				// 构造函数
public:
	string m_SettingRoom;		// 客厅

private:
	string m_BedRoom;			// 卧室
};

// 类外写成员函数，一般将成员函数封装在.h文件
Building::Building()
{
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGay::GoodGay()
{
	// 创建建筑物对象
	building = new Building;
}
void GoodGay::visit()
{
	// 访问public属性
	cout << "GoodGay类正在访问：" << building->m_SettingRoom << endl;
	// 访问private属性
	cout << "GoodGay类正在访问：" << building->m_BedRoom << endl;
}

GoodSister::GoodSister()
{
	// 创建建筑物对象
	building = new Building;
}
void GoodSister::visit1()
{
	// 访问public属性
	cout << "visit1函数正在访问：" << building->m_SettingRoom << endl;
	// 访问private属性
	cout << "visit1函数正在访问：" << building->m_BedRoom << endl;
}

void GoodSister::visit2()
{
	// 访问public属性
	cout << "visit2函数正在访问：" << building->m_SettingRoom << endl;
	// 访问private属性
	//cout << "visit2函数正在访问：" << building->m_BedRoom << endl;
}

// 全局函数
void goodGay(Building* building)
{
	// 访问public属性
	cout << "goodGay全局函数正在访问：" << building->m_SettingRoom << endl;
	// 访问private属性
	cout << "goodGay全局函数正在访问：" << building->m_BedRoom << endl;
}

void test01(void)
{
	Building build;
	goodGay(&build);
}

void test02(void)
{
	GoodGay g;
	g.visit();
}

void test03(void)
{
	GoodSister ss;
	ss.visit1();
	ss.visit2();
}

int main(void)
{
	cout << "wocao" << endl;

	test01();
	test02();
	test03();

	return 0;
}