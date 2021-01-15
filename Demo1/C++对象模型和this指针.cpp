#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/* C++����ģ�ͺ�thisָ��
*	@ ��Ա�����ͳ�Ա�����ֿ��洢
*		> ��C++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢��ֻ�зǾ�̬��Ա������������Ķ�����
*	@ this ָ��
*		> this ָ��ָ�򱻵��õĳ�Ա���������Ķ���
*			- this ָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
*			- this ָ�벻��Ҫ���壬ֱ��ʹ�ü���
*		> this ָ�����;
*			- ���βκͳ�Ա����ͬ��ʱ������thisָ��������
*			- ����ķǾ�̬��Ա�����з��ض�������ʹ�� return *this
*/

class Person
{
public:
	int m_A;		// �Ǿ�̬��Ա������������Ķ�����

	static int m_B;	// ��̬��Ա��������������Ķ�����

	void func(void)	// �Ǿ�̬��Ա��������������Ķ�����
	{}

	static void func1(void)	// ��̬��Ա��������������Ķ�����
	{}

	Person(int age)
	{
		// ������Ƴ�ͻ
		// this ָ��ָ����Ǳ����õĳ�Ա���������Ķ���
		this->age = age;
	}

	// �����õķ�ʽ���أ��൱�ڷ�����֮ǰp2��ͬ��Person
	Person& PersonAddAge(Person p)
	{
		this->age += p.age;

		// thisָ������ָ�룬��*thisָ������������ı���
		return *this;
	}

	int age;
};

//void test01(void)
//{
//	Person p;
//
//	// �ն�����ռ�ڴ�ռ�Ϊ��1
//	// c++���������ÿ���ն������һ���ֽڿռ䣬Ϊ�����ֶ���ռ�ڴ��λ��
//	// ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
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

	cout << "p1������Ϊ��" << p1.age << endl;
}

void test04(void)
{
	Person p1(20);

	Person p2(30);

	// ��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2������Ϊ��" << p2.age << endl;
}

int main(void)
{
	// ����wocao
	cout << "wocao" << endl;

	//test01();		// ���Կն�����ռ�ڴ�ռ��С
	//test02();

	test03();		// ����thisָ��
	test04();

	return 0;
}