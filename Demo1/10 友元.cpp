#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


/*	��Ԫ
*	@ Ŀ�ģ���Щ˽�������������������һЩ������������з��ʣ���һ�����������������һ������˽�г�Ա��
*	@ �ؼ��֣�friend
*	@ ��Ԫ������ʵ��
*		> ȫ�ֺ�������Ԫ
*		> ������Ԫ
*		> ��Ա��������Ԫ
*	
* 
*/

// �ڳ�Ա��������Ԫʱ�����뽫Buildingд�ں��档ͬʱ��ǰ����Ҫ����Building��
class Building;

class GoodGay
{

public:
	GoodGay();

	void visit();				// �ιۺ���������Building�е�����

	Building* building;

};

class GoodSister
{
public:
	GoodSister();

	void visit1();				// ��visit1�������Է���Building��˽�г�Ա
	void visit2();				// ��visit2���������Է���Building��˽�г�Ա

	Building* building;
};

class Building
{
	// ȫ�ֺ�������Ԫ
	// goodGayȫ�ֺ�����Building�ĺ����ѣ����Է���Building�е�˽�г�Ա
	friend void goodGay(Building* building);		// friend ��Ԫ�ؼ���

	// ������Ԫ
	friend class GoodGay;

	// ��Ա��������Ԫ
	friend void GoodSister::visit1();		// GoodSister���µ�visit1��Ա������Ϊ������Ԫ�����Է���˽������

public:
	Building();				// ���캯��
public:
	string m_SettingRoom;		// ����

private:
	string m_BedRoom;			// ����
};

// ����д��Ա������һ�㽫��Ա������װ��.h�ļ�
Building::Building()
{
	m_SettingRoom = "����";
	m_BedRoom = "����";
}
GoodGay::GoodGay()
{
	// �������������
	building = new Building;
}
void GoodGay::visit()
{
	// ����public����
	cout << "GoodGay�����ڷ��ʣ�" << building->m_SettingRoom << endl;
	// ����private����
	cout << "GoodGay�����ڷ��ʣ�" << building->m_BedRoom << endl;
}

GoodSister::GoodSister()
{
	// �������������
	building = new Building;
}
void GoodSister::visit1()
{
	// ����public����
	cout << "visit1�������ڷ��ʣ�" << building->m_SettingRoom << endl;
	// ����private����
	cout << "visit1�������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void GoodSister::visit2()
{
	// ����public����
	cout << "visit2�������ڷ��ʣ�" << building->m_SettingRoom << endl;
	// ����private����
	//cout << "visit2�������ڷ��ʣ�" << building->m_BedRoom << endl;
}

// ȫ�ֺ���
void goodGay(Building* building)
{
	// ����public����
	cout << "goodGayȫ�ֺ������ڷ��ʣ�" << building->m_SettingRoom << endl;
	// ����private����
	cout << "goodGayȫ�ֺ������ڷ��ʣ�" << building->m_BedRoom << endl;
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