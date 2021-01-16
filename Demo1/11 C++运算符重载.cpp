#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;

/*	���������
*	@ ���壺�����е���������½��ж��壬��������һ�й��ܣ�����Ӧ��ͬ����������
*	@ �Ӻ����������
*		> ���ط�ʽ
*			- ��Ա�������� +
*			- ȫ�ֺ������� +
*		> ���������Ҳ���Է����������أ����������ͬ���������ܲ�ͬ��
*	@ ������������أ���������Զ�����������
*		> һ�㲻ʹ�ó�Ա�������� <<����Ϊ�޷�ʵ��cout�����
*		> ֻ������ȫ�ֺ��������� <<
*	@ �������������
*		> ע��˳��
*	@ ��ֵ���������
*		> ��������Դ����ڶ�������Ҫnew֮����delete��������ǳ����֮��ᵼ��ͬһ��ַ�ͷ����Σ����ϵͳ����
*		> ��Ҫʹ����������ǳ���������⡣
*	@ ��ϵ���������
*	@ �����������������
*		> �������������()Ҳ��������
*		> �������غ��ʹ�÷�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
*		> �º���û�й̶�д�����ǳ����
* 
* 
*/

class MyInteger
{
	friend ostream& operator<<(ostream& out, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	// ����ǰ�� ++ �������
	// ����������Ϊ��һֱ��һ�����ݽ��е�������
	MyInteger& operator++()
	{
		// �Ƚ��� ++ ����
		m_Num++;
		// �ٽ�������з���
		return *this;
	}

	// ���غ��� ++ �����
	//void operator++(int)			// int ��ʾһ��ռλ������������������ǰ�úͺ��õ���
	MyInteger& operator++(int)		
	{
		// �ȼ�¼��ǰ���
		MyInteger temp = *this;
		// Ȼ����е���
		m_Num++;
		// ��󽫼�¼�Ľ��������
		return temp;
	}

private:
	int m_Num;
};

class Person
{
	friend Person operator+(Person& p1, Person& p2);
	friend Person operator+(Person& p1, int num);
	friend ostream& operator<<(ostream& cout, Person& p);
	friend void test01(void);

public:
	Person(int A, int B);	// �вι��캯��

	// ��Ա�������� +
	//Person operator+(Person& p)
	//{
	//	Person temp(0, 0);
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}

	// һ�㲻ʹ�ó�Ա�������� <<

private:
	int m_A;
	int m_B;
};

class Student
{
public:
	Student(int id)
	{
		m_id = new int(id);		// �ڶ�������һ����������Ҫ�Լ����ٿռ䣬ҲҪ�Լ��ͷſռ�
	}

	~Student()
	{
		if (m_id != NULL)
		{
			delete m_id;
			m_id = NULL;
		}
	}

	// ���ظ�ֵ�����
	Student& operator=(Student& s)
	{
		// �������ṩ����ǳ����
		//m_id = s.m_id;

		// Ӧ�����ж��Ƿ��������ڶ����������Ӧ�����ͷŸɾ���Ȼ�������
		if (m_id != NULL)
		{
			delete m_id;
			m_id = NULL;
		}

		// ���
		m_id = new int(*s.m_id);

		// ���ض�����
		return *this;
	}

	// ���ع�ϵ�����
	bool operator==(Student& s)
	{
		cout << *this->m_id << endl;
		cout << *s.m_id << endl;
		if (*this->m_id == *s.m_id)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int* m_id;
};

// �����������캯��
Person::Person(int A, int B)
{
	this->m_A = A;
	this->m_B = B;
}

// ȫ�ֺ������� +
Person operator+(Person& p1, Person& p2)
{
	Person temp(0, 0);
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

// ȫ�ֺ������� + ���������ذ汾��
Person operator+(Person& p1, int num)
{
	Person temp(0, 0);
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

// ȫ�ֺ������� << 
ostream& operator<<(ostream& cout, Person& p)
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return cout;
}

// ȫ�ֺ������� << ����������������ز���
ostream& operator<<(ostream& out, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

// �Ӻ����ز���
void test01(void)
{
	Person p1(1, 2);
	Person p2(3, 4);

	Person p3(0, 0);

	// ��Ա���������ϵĵ���
	//p3 = p1.operator+(p2);

	// ȫ�ֺ��������ϵĵ���
	//p3 = operator+(p1, p2);		
	p3 = p1 + p2;

	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;

	Person p4(0, 0);

	p4 = p1 + 2021;

	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;
}

// ������������ز���
void test02(void)
{
	Person p1(1, 2);

	cout << p1 << endl;;
}

// ǰ�õ�����������ز���
void test03(void)
{
	MyInteger myint;

	cout << "ǰ�õ������ԣ�" << endl;
	cout << ++myint << endl;
	cout << myint << endl;
}

// ���õ�����������ز���
void test04(void)
{
	MyInteger myint;

	cout << "���õ������ԣ�" << endl;
	cout << myint++ << endl;
	cout << myint << endl;
}

// ��ֵ��������ز���
void test05(void)
{
	Student s1(1111);
	Student s2(2222);
	Student s3(3333);

	cout << "s1��ID�Ƕ��٣�" << *s1.m_id << endl;
	cout << "s2��ID�Ƕ��٣�" << *s2.m_id << endl;

	s2 = s1;		// ��ֵ����

	cout << "s1��ID�Ƕ��٣�" << *s1.m_id << endl;
	cout << "s2��ID�Ƕ��٣�" << *s2.m_id << endl;

	s3 = s2 = s1;

	cout << "s1��ID�Ƕ��٣�" << *s1.m_id << endl;
	cout << "s2��ID�Ƕ��٣�" << *s2.m_id << endl;
	cout << "s3��ID�Ƕ��٣�" << *s3.m_id << endl;
}

// ��ϵ��������ز���
void test06(void)
{
	Student s1(1111);
	Student s2(1111);
	Student s3(2222);

	if (s1 == s2)
	{
		cout << "s1 �� s2 ����ȵġ�" << endl;
	}
	else
	{
		cout << "s1 �� s2 ������ȵġ�" << endl;
	}

	if (s1 == s3)
	{
		cout << "s1 �� s3 ����ȵġ�" << endl;
	}
	else
	{
		cout << "s1 �� s3 ������ȵġ�" << endl;
	}
}

int main(void)
{
	cout << "wocao" << endl;

	//test01();
	//cout << endl;
	//test02();

	//test03();
	//test04();

	//test05();

	test06();

	return 0;
}
