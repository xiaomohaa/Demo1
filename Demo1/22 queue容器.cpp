//
///*	queue ����
//*	@ queue ��������
//*		> ���Queue��һ���Ƚ��ȳ�(First In First Out,FIFO)�����ݽṹ��������������
//*			- �������������һ������Ԫ�أ�����һ���Ƴ�Ԫ��
//*			- ������ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ
//*			- �����н����ݳ�Ϊ --- ��� push
//*			- �����г����ݳ�Ϊ --- ���� pop
//*	@ queue ���ýӿ�
//*		> ����������
//*			- ջ�������õĶ���ӿ�
//*		> ���캯����
//*			- queue<T> que;								// queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//*			- queue(const queue &que);					// �������캯��
//*		> ��ֵ������
//*			- queue& operator=(const queue &que);		// ���صȺŲ�����
//*		> ���ݴ�ȡ��
//*			- push(elem);								// ����β���Ԫ��
//*			- pop();									// �Ӷ�ͷ�Ƴ���һ��Ԫ��
//*			- back();									// �������һ��Ԫ��
//*			- front();									// ���ص�һ��Ԫ��
//*		> ��С������
//*			- empty();									// �ж϶�ջ�Ƿ�Ϊ��
//*			- size();									// ����ջ�Ĵ�С
//*/
//
//
//#include <iostream>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age);
//
//	string m_name;
//	int m_Age;
//};
//
//Person::Person(string name, int age)
//{
//	this->m_name = name;
//	this->m_Age = age;
//}
//
//
//void test01(void)
//{
//	// ��������
//	queue<Person> q1;
//
//	// ׼������
//	Person p1("AAA", 100);
//	Person p2("BBB", 200);
//	Person p3("CCC", 300);
//	Person p4("DDD", 400);
//	Person p5("EEE", 500);
//
//	// ���
//	q1.push(p1);
//	q1.push(p2);
//	q1.push(p3);
//	q1.push(p4);
//	q1.push(p5);
//
//	cout << "����ǰ���д�СΪ��" << q1.size() << endl;
//
//	// �ж�ֻҪ���в�Ϊ�գ��鿴��ͷ���鿴��β��ִ�г��Ӳ���
//	while (!q1.empty())
//	{
//		// �鿴��ͷԪ��
//		cout << "��ǰ��ͷ�ǣ�" << q1.front().m_name << "  ����Ϊ��" << q1.front().m_Age << endl;
//		// �鿴��βԪ��
//		cout << "��ǰ��β�ǣ�" << q1.back().m_name << "  ����Ϊ��" << q1.back().m_Age << endl;
//		// ���Ӳ���
//		q1.pop();
//		cout << endl;
//	}
//	cout << "���Ӻ���д�СΪ��" << q1.size() << endl;
//}
//
//int main(void)
//{
//	cout << "wocao" << endl;
//
//	test01();
//
//	return 0;
//}