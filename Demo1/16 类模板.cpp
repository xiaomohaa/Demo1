//#include <iostream>
//#include <string>
//
//using std::cout;
//using std::endl;
//using std::string;
//
///*	��ģ��
//*	@ ���ã�����һ��ͨ���࣬���еĳ�Ա�������Ϳ��Բ�����ȷ������һ�����������������
//*	@ ��ģ���뺯��ģ�������
//*		> ��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//*		> ��ģ����ģ������б��п�����Ĭ�ϲ���
//*	@ ��ģ���г�Ա��������ʱ��
//*		> ��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//*		> ��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
//*	@ �ຯ����������������
//*		> ��ģ��ʵ�������Ķ����������εķ�ʽ
//*		> ���ִ��뷽ʽ
//*			- ָ����������ͣ�ֱ����ʾ������������ͣ���ã�
//*			- ����ģ�廯	���������еĲ�����Ϊģ����д���
//*			- ������ģ�廯	���������������ģ�廯���д���
//*	@ ��ģ����̳�
//*		> ������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
//*		> �����ָ�����������޷�����������ڴ�
//*		> ��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
//*	@ ��ģ���Ա��������ʵ��
//*	@ ��ģ����ļ���д
//*		> ����ģ��ж��hpp�ļ���
//*	@ ��ģ������Ԫ
//*		> ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ����
//		> ȫ�ֺ�������ʵ�֣���Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
//*/
//
//// ��ģ��
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
//// ��ģ����̳�
//template<class T>
//class Base
//{
//public:
//	T m;
//};
////class Son :public Base		// ���󣬱���Ҫ֪�������е�T���ͣ����ܼ̳и�����
//class Son:public Base<int>
//{
//};
//// ��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
//template<class T1, class T2>
//class Son1 :public Base<T1>
//{
//public:
//	T2 obj;
//};
//
//// ��ģ���Ա��������ʵ��
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
//// ���캯������ʵ��
//template<class T1, class T2>
//Student<T1, T2>::Student(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//// ��Ա��������ʵ��
//template<class T1, class T2>
//void Student<T1, T2>::showStudent()
//{
//	cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
//}
//
//// 1��ָ����������
//void printPerson0(Person<string, int>& p)
//{
//	p.showPerson();
//}
//// 2������ģ�廯
//template<class T1,class T2>
//void printPerson1(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1����������Ϊ��" << typeid(T1).name() << endl;
//	cout << "T2����������Ϊ��" << typeid(T2).name() << endl;
//}
//// 3��������ģ�廯
//template<class T>
//void printPerson2(T& p)
//{
//	p.showPerson();
//	cout << "T����������Ϊ��" << typeid(T).name() << endl;
//}
//
//void test01(void)
//{
//	// Person s1("СĬ", 23);			// �����޷�ʹ���Զ��Ƶ�
//	Person<string, int> s1("СĬ", 23);
//	Person<string> s2("С��", 22);
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
//	Student<string, int> s1("С��", 18);
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