//
///*	vector ����
//*	@ vector ��������
//*		> ���ܣ�vector���ݽṹ������ǳ����ƣ�Ҳ��Ϊ��������
//*		> vector����ͨ��������
//*			- ��֮ͬ�����������Ǿ�̬�ռ䣬��vector���Զ�̬��չ
//*		> ��̬��չ��
//*			- ��������ԭ�ռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ����¿ռ䣬�ͷ�ԭ�ռ�
//*			- vector�����ĵ�������֧��������ʵĵ�����
//*	@ vector ���캯��
//*		> ����������
//*			- ����vector����
//*		> ����ԭ�ͣ�
//*			- vector<T> v;										// ����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//*			- vector(v.begin(), v.end());						// ��v[begin(), end())�����е�Ԫ�ؿ���������
//*			- vector(n, elem);									// ���캯����n��elem����������
//*			- vector(const vector &vec);						// �������캯����
//*	@ vector��ֵ����
//*		> ����������
//*			- ��vector�������и�ֵ
//*		> ����ԭ�ͣ�
//*			- vector& operator=(const vector &vec);				// ���صȺŲ�����
//*			- assign(beg, end);									// ��[beg, end)�����е����ݿ�����ֵ������
//*			- assign(n, elem);									// ��n��elem������ֵ������
//*		! �ܽ᣺ vector��ֵ��ʽ�Ƚϼ򵥣�ʹ��operator=������assign������
//*	@ vector�����ʹ�С
//*		> ����������
//*			- ��vector�����������ʹ�С����
//*		> ����ԭ�ͣ�
//*			- empty();											// �ж������Ƿ�Ϊ�գ���Ϊ��
//*			- capacity();										// ����������
//*			- size();											// ����������Ԫ�صĸ���
//*			- resize(int num);									// ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//*																// ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//*			- resize(int num, elem);							// ����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//*																// ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//*	@ vector�����ɾ��
//*		> ����������
//*			- ��vector�������в��롢ɾ������
//*		> ����ԭ�ͣ�
//*			- push_back(ele);									// β������Ԫ��ele
//*			- pop_back();										// ɾ�����һ��Ԫ��
//*			- insert(const_iterator pos, ele);					// ������ָ��λ��pos����Ԫ��ele
//*			- insert(const_iterator pos, int count,ele);		// ������ָ��λ��pos����count��Ԫ��ele
//*			- erase(const_iterator pos);						// ɾ��������ָ���Ԫ��
//*			- erase(const_iterator start, const_iterator end);	// ɾ����������start��end֮���Ԫ��
//*			- clear();											// ɾ������������Ԫ��
//*	@ vector���ݴ�ȡ
//*		> ����������
//*			- ��vector�е����ݵĴ�ȡ����
//*		> ����ԭ�ͣ�
//*			- at(int idx);										// ��������idx��ָ������
//*			- operator[];										// ��������idx��ָ������
//*			- front();											// ���������е�һ������Ԫ��
//*			- back();											// �������������һ������Ԫ��
//*	@  vector ��������
//*		> ����������
//*			- ʵ������������Ԫ�ؽ��л���
//*		> ����ԭ�ͣ�
//*			- swap(vec);										// ��vec�뱾���Ԫ�ػ���
//*	@ Ԥ���ռ�
//*		> ����������
//*			- ����vector�ڶ�̬��չ����ʱ����չ����
//*		> ����ԭ�ͣ�
//*			- reserve(int len);									// ����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
//*/
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//// ��������
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//		
//	}
//	cout << endl;
//}
//
//// vector ���캯��
//void test01(void)
//{
//	// Ĭ�Ϲ��죬�޲ι���
//	vector<int>v1;	
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	// ͨ�����䷽ʽ���й���
//	vector<int> v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	// ���캯����n��elem����������
//	vector<int> v3(10, 8);
//	printVector(v3);
//
//	// �������캯��
//
//	vector<int> v4(v3);
//	printVector(v4);
//}
//
//// vector ��ֵ����
//void test02(void)
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	// �ȺŸ�ֵ
//	vector<int> v2;
//	v2 = v1;
//	printVector(v2);
//
//	// assign ��ֵ
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	// ��n��elem������ֵ������
//	vector<int> v4;
//	v4.assign(10, 8);
//	printVector(v4);
//}
//
//// vector �����ʹ�С
//void test03(void)
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	
//	if (v1.empty())
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ��" << v1.capacity() << endl;
//		cout << "v1��Ԫ�ظ���Ϊ��" << v1.size() << endl;
//	}
//
//	// ����ָ����С
//	v1.resize(20);		// ���ȱ䳤��Ĭ����0���
//	printVector(v1);	
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1��Ԫ�ظ���Ϊ��" << v1.size() << endl;
//
//	v1.resize(30, 88);	// ���ȱ䳤��������88���ĩβ
//	printVector(v1);
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1��Ԫ�ظ���Ϊ��" << v1.size() << endl;
//
//	v1.resize(8);		// ���ȱ�̣���������ɾ��
//	printVector(v1);
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1��Ԫ�ظ���Ϊ��" << v1.size() << endl;
//}
//
//// vector �����ɾ��
//void test04(void)
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	v1.pop_back();						// ɾ�����һ��Ԫ��
//	printVector(v1);
//
//	v1.push_back(9);					// ��ĩβ����һ��9
//	printVector(v1);
//
//	v1.insert(v1.begin() + 1, 88);		// ��ͷ����1λ����һ��88
//	printVector(v1);
//
//	v1.erase(v1.begin() + 1);			// ɾ��ͷ����һλ������
//	printVector(v1);
//
//	v1.insert(v1.begin() + 1, 3, 88);	// ��ͷ����1λ����3��88
//	printVector(v1);
//
//	v1.erase(v1.begin() + 1, v1.begin() + 4);	// ɾ����һ������
//	printVector(v1);
//
//	v1.clear();							// ���
//	printVector(v1);
//}
//
//// vector ���ݴ�ȡ
//void test05(void)
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	cout << "v1�ĵ�һ�����ݣ�" << v1.front() << endl;
//	cout << "v1�����һ�����ݣ�" << v1.back() << endl;
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << v1.at(i) << ' ';
//	}
//	cout << endl;
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << v1[i] << ' ';
//	}
//	cout << endl;
//}
//
////  vector ��������
//void test06(void)
//{
//	// ����ʹ��
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "����ǰ" << endl;
//	cout << "v1 = ";
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 9; i >= 0; i--)
//	{
//		v2.push_back(i);
//	}
//	cout << "v2 = ";
//	printVector(v2);
//
//	v1.swap(v2);			// ��v1��v2����
//
//	cout << "������" << endl;
//	cout << "v1 = ";
//	printVector(v1);
//	cout << "v2 = ";
//	printVector(v2);
//}
//
//// ����swap����
//void test07(void)
//{
//	vector<int> v1;
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//	}
//
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�е�Ԫ�ظ���Ϊ��" << v1.size() << endl;
//
//	v1.resize(3);			// ����ָ����С
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�е�Ԫ�ظ���Ϊ��" << v1.size() << endl;
//
//	// ����swap�����ڴ�
//	vector<int>(v1).swap(v1);
//
//	/*
//	*	vector<int>(v1)		// �������󣬵�ǰ��ִ���꣬�������տռ�
//	*	.swap(v1)			// ��������
//	*/
//
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�е�Ԫ�ظ���Ϊ��" << v1.size() << endl;
//}
//
//// vector Ԥ���ռ�
//void test08(void)
//{
//	vector<int> v1;
//	int num = 0;		// ͳ�ƿ��ٿռ�Ĵ���
//	int* p = NULL;		
//
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//		if (p != &v1[0])
//		{
//			p = &v1[0];
//			num++;
//		}
//	}
//	cout << "�����ڴ�Ĵ���Ϊ��" << num << endl;
//
//	// ����reserveԤ���ռ�
//	vector<int> v2;
//	v2.reserve(100000);	// Ԥ��ʮ����ռ�
//
//	int num1 = 0;		// ͳ�ƿ��ٿռ�Ĵ���
//	int* p1 = NULL;
//
//	for (int i = 0; i < 100000; i++)
//	{
//		v2.push_back(i);
//		if (p1 != &v2[0])
//		{
//			p1 = &v2[0];
//			num1++;
//		}
//	}
//	cout << "�����ڴ�Ĵ���Ϊ��" << num1 << endl;
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
//	//test06();
//	//test07();
//	test08();
//
//	return 0;
//}
//
//
