#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;

/*	运算符重载
*	@ 定义：对已有的运算符重新进行定义，赋予另外一中功能，以适应不同的数据类型
*	@ 加号运算符重载
*		> 重载方式
*			- 成员函数重载 +
*			- 全局函数重载 +
*		> 运算符重载也可以发生函数重载（传入参数不同，函数功能不同）
*	@ 左移运算符重载：可以输出自定义数据类型
*		> 一般不使用成员函数重载 <<，因为无法实现cout在左侧
*		> 只能利用全局函数来重载 <<
*	@ 递增运算符重载
*		> 注意顺序
*	@ 赋值运算符重载
*		> 如果将属性创建在堆区，需要new之后再delete。但是在浅拷贝之后会导致同一地址释放两次，造成系统崩溃
*		> 需要使用深拷贝来解决浅拷贝的问题。
*	@ 关系运算符重载
*	@ 函数调用运算符重载
*		> 函数调用运算符()也可以重载
*		> 由于重载后的使用方式非常像函数的调用，因此称为仿函数
*		> 仿函数没有固定写法，非常灵活
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

	// 重载前置 ++ 运算符、
	// 返回引用是为了一直对一个数据进行递增操作
	MyInteger& operator++()
	{
		// 先进行 ++ 运算
		m_Num++;
		// 再将自身进行返回
		return *this;
	}

	// 重载后置 ++ 运算符
	//void operator++(int)			// int 表示一个占位参数，可以用于区分前置和后置递增
	MyInteger& operator++(int)		
	{
		// 先记录当前结果
		MyInteger temp = *this;
		// 然后进行递增
		m_Num++;
		// 最后将记录的结果做返回
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
	Person(int A, int B);	// 有参构造函数

	// 成员函数重载 +
	//Person operator+(Person& p)
	//{
	//	Person temp(0, 0);
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}

	// 一般不使用成员函数重载 <<

private:
	int m_A;
	int m_B;
};

class Student
{
public:
	Student(int id)
	{
		m_id = new int(id);		// 在堆区创建一个变量，需要自己开辟空间，也要自己释放空间
	}

	~Student()
	{
		if (m_id != NULL)
		{
			delete m_id;
			m_id = NULL;
		}
	}

	// 重载赋值运算符
	Student& operator=(Student& s)
	{
		// 编译器提供的是浅拷贝
		//m_id = s.m_id;

		// 应该先判断是否有属性在堆区，如果有应该先释放干净，然后再深拷贝
		if (m_id != NULL)
		{
			delete m_id;
			m_id = NULL;
		}

		// 深拷贝
		m_id = new int(*s.m_id);

		// 返回对象本身
		return *this;
	}

	// 重载关系运算符
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

// 类外声明构造函数
Person::Person(int A, int B)
{
	this->m_A = A;
	this->m_B = B;
}

// 全局函数重载 +
Person operator+(Person& p1, Person& p2)
{
	Person temp(0, 0);
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

// 全局函数重载 + （函数重载版本）
Person operator+(Person& p1, int num)
{
	Person temp(0, 0);
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

// 全局函数重载 << 
ostream& operator<<(ostream& cout, Person& p)
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return cout;
}

// 全局函数重载 << 辅助递增运算符重载测试
ostream& operator<<(ostream& out, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

// 加号重载测试
void test01(void)
{
	Person p1(1, 2);
	Person p2(3, 4);

	Person p3(0, 0);

	// 成员函数本质上的调用
	//p3 = p1.operator+(p2);

	// 全局函数本质上的调用
	//p3 = operator+(p1, p2);		
	p3 = p1 + p2;

	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;

	Person p4(0, 0);

	p4 = p1 + 2021;

	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;
}

// 左移运算符重载测试
void test02(void)
{
	Person p1(1, 2);

	cout << p1 << endl;;
}

// 前置递增运算符重载测试
void test03(void)
{
	MyInteger myint;

	cout << "前置递增测试：" << endl;
	cout << ++myint << endl;
	cout << myint << endl;
}

// 后置递增运算符重载测试
void test04(void)
{
	MyInteger myint;

	cout << "后置递增测试：" << endl;
	cout << myint++ << endl;
	cout << myint << endl;
}

// 赋值运算符重载测试
void test05(void)
{
	Student s1(1111);
	Student s2(2222);
	Student s3(3333);

	cout << "s1的ID是多少：" << *s1.m_id << endl;
	cout << "s2的ID是多少：" << *s2.m_id << endl;

	s2 = s1;		// 赋值运算

	cout << "s1的ID是多少：" << *s1.m_id << endl;
	cout << "s2的ID是多少：" << *s2.m_id << endl;

	s3 = s2 = s1;

	cout << "s1的ID是多少：" << *s1.m_id << endl;
	cout << "s2的ID是多少：" << *s2.m_id << endl;
	cout << "s3的ID是多少：" << *s3.m_id << endl;
}

// 关系运算符重载测试
void test06(void)
{
	Student s1(1111);
	Student s2(1111);
	Student s3(2222);

	if (s1 == s2)
	{
		cout << "s1 和 s2 是相等的。" << endl;
	}
	else
	{
		cout << "s1 和 s2 不是相等的。" << endl;
	}

	if (s1 == s3)
	{
		cout << "s1 和 s3 是相等的。" << endl;
	}
	else
	{
		cout << "s1 和 s3 不是相等的。" << endl;
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
