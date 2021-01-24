//
///*	��������
//*	@ �����������
//*		> ���
//*			- ���غ������ò��������࣬����󳣳�Ϊ��������
//*			- ��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ�зº���
//*		> ���ʣ�
//*			- ��������(�º���)��һ���࣬����һ������
//*	@ ��������ʹ��
//*		> �ص㣺
//*			- ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
//*			- �������󳬳���ͨ�����ĸ����������������Լ���״̬
//*			- �������������Ϊ��������
//*		! �º���д���ǳ���������Ϊ�������д���
//*	@ ν��
//*		> ���
//*			- ����bool���͵ķº�����Ϊν��
//*			- ���operator()����һ����������ô����һԪν��
//*			- ���operator()����������������ô������Ԫν��
//*	@ �ڽ���������
//*		> ���
//*			- STL�ڽ���һЩ��������
//*		> ����:
//*			- �����º���
//*			- ��ϵ�º���
//*			- �߼��º���
//*		> �÷���
//*			- ��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
//*			- ʹ���ڽ�����������Ҫ����ͷ�ļ� #include<functional>
//*	@ �����º���
//*		> ����������
//*			- ʵ����������
//*			- ����negate��һԪ���㣬�������Ƕ�Ԫ����
//*		> �º���ԭ�ͣ�
//*			- template<class T> T plus<T>								// �ӷ��º���
//*			- template<class T> T minus<T>								// �����º���
//*			- template<class T> T multiplies<T>							// �˷��º���
//*			- template<class T> T divides<T>							// �����º���
//*			- template<class T> T modulus<T>							// ȡģ�º���
//*			- template<class T> T negate<T>								// ȡ���º���
//*	@ ��ϵ�º���
//*		> ����������
//*			- ʵ�ֹ�ϵ�Ա�
//*		> �º���ԭ�ͣ�
//*			- template<class T> bool equal_to<T>						// ����
//*			- template<class T> bool not_equal_to<T>					// ������
//*			- template<class T> bool greater<T>							// ����
//*			- template<class T> bool greater_equal<T>					// ���ڵ���
//*			- template<class T> bool less<T>							// С��
//*			- template<class T> bool less_equal<T>						// С�ڵ���
//*	@ �߼��º���
//*		> ����������
//*			- ʵ���߼�����
//*		> ����ԭ�ͣ�
//*			- template<class T> bool logical_and<T>						// �߼���
//*			- template<class T> bool logical_or<T>						// �߼���
//*			- template<class T> bool logical_not<T>						// �߼���
//*/
//
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string str)
//	{
//		cout << str << endl;
//		this->count++;
//	}
//
//	// ����ڲ��Լ�״̬
//	int count;
//};
//
//// һԪν��
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//// ��Ԫν��
//class MyCompare
//{
//public:
//	bool operator()(int val1, int val2)
//	{
//		return val1 > val2;
//	}
//};
//
//void doPrint(MyPrint& mp, string str)
//{
//	mp(str);
//}
//
//// ��������
//void test01(void)
//{
//	// ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
//	MyAdd myAdd;
//	cout << myAdd(1, 1) << endl;;
//
//	// �������󳬳���ͨ�����ĸ����������������Լ���״̬
//	MyPrint myPrint;
//	myPrint("wocao");
//	myPrint("wocao");
//	myPrint("wocao");
//	myPrint("wocao");
//	myPrint("wocao");
//
//	cout << "MyPrint���ô���Ϊ��" << myPrint.count << endl;
//
//	// �������������Ϊ��������
//	MyPrint m1;
//	doPrint(m1, "wocao");
//
//}
//
//// һԪν��
//void test02(void)
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	// ���������д���5������
//	// GreaterFive()�������ĺ�������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end())
//	{
//		cout << "can't find the num which is greater than 5 !";
//	}
//	else
//	{
//		cout << "find the num which is greater than 5 : " << *it << endl;
//	}
//}
//
//// ��Ԫν��
//void test03(void)
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//
//	// 
//	sort(v.begin(), v.end());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//
//	// ʹ�ú�������ı��㷨���ԣ���Ϊ�������Ϊ����
//	sort(v.begin(), v.end(), MyCompare());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//}
//
//// �����º���
//void test04(void)
//{
//	// negate һԪ�º�����ȡ������
//	negate<int>n1;
//	cout << "50ȡ���Ľ��Ϊ��" << n1(50) << endl;
//
//	// plus ��Ԫ�º������ӷ�
//	plus<int>p1;
//	cout << "10 + 20 = " << p1(10, 20) << endl;
//}
//
//// ��ϵ�º���
//void  test05(void)
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//
//	// greater<int>()�ڽ��º�������
//	sort(v.begin(), v.end(), greater<int>());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//}
//
//// �߼��º���
//void test06(void)
//{
//	vector<bool>v;
//	v.push_back(true);
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(false);
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//
//	// �����߼��ǽ�����v���˵�����v2�У���ִ��ȡ������
//	vector<bool>v2;
//	v2.resize(v.size());
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//}
//
//int main(void)
//{
//	cout << "wocao" << endl;
//
//	//test01();
//	//test02();
//	//test03();
//	//test04();
//	//test05();
//	test06();
//
//	return 0;
//}