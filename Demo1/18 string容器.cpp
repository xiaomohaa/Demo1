//
///*	string ����
//*	@ string ��������
//*		> ���ʣ�string��C++�����ַ�������string��������һ����
//*		> string��char * ����
//*			- char * ��һ��ָ��
//*			- string��һ���࣬���ڲ���װ��char*����������ַ�������һ��char*�͵�������
//*		> �ص㣺
//*			- string ���ڲ���װ�˺ܶ��Ա����.���磺����find������copy��ɾ��delete �滻replace������insert
//*			- string����char*��������ڴ棬���õ��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���
//*	@ string ���캯��
//*		> ���캯��ԭ��
//*			- string();												// ����һ���յ��ַ��� ����: string str;
//*			- string(const char* s);								// ʹ���ַ���s��ʼ��
//*			- string(const string& str);							// ʹ��һ��string�����ʼ����һ��string����
//*			- string(int n, char c);								// ʹ��n���ַ�c��ʼ��
//*	@ string ��ֵ����
//*		> ��ֵ�ĺ���ԭ��
//*			- string& operator = (const char* s);					// char*�����ַ��� ��ֵ����ǰ���ַ���
//*			- string& operator = (const string &s);					// ���ַ���s������ǰ���ַ���
//*			- string& operator = (char c);							// �ַ���ֵ����ǰ���ַ���
//*			- string& assign(const char *s);						// ���ַ���s������ǰ���ַ���
//*			- string& assign(const char *s, int n);					// ���ַ���s��ǰn���ַ�������ǰ���ַ���
//*			- string& assign(const string &s);						// ���ַ���s������ǰ�ַ���
//*			- string& assign(int n, char c);						// ��n���ַ�c������ǰ�ַ�
//*	@ string �ַ���ƴ��
//*		> ʵ�����ַ�����ĩβƴ���ַ���
//*		> ����ԭ�ͣ�
//*			- string& operator += (const char* str);				// ����+=������
//*			- string& operator += (const char c);					// ����+=������
//*			- string& operator += (const string& str);				// ����+=������
//*			- string& append(const char *s);						// ���ַ���s���ӵ���ǰ�ַ�����β
//*			- string& append(const char *s, int n);					// ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//*			- string& append(const string &s);						// ͬoperator+=(const string& str)
//*			- string& append(const string &s, int pos, int n);		// �ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β����0��ʼ����
//*	@ string ���Һ��滻
//*		> ����������
//*			- ���ң�����ָ���ַ����Ƿ����
//*			- �滻����ָ����λ���滻�ַ���
//*		> ����ԭ�ͣ�
//*			- int find(const string& str, int pos = 0) const;		// ����str��һ�γ���λ��,��pos��ʼ����
//*			- int find(const char* s, int pos = 0) const;			// ����s��һ�γ���λ��,��pos��ʼ����
//*			- int find(const char* s, int pos, int n) const;		// ��posλ�ò���s��ǰn���ַ���һ��λ��
//*			- int find(const char c, int pos = 0) const;			// �����ַ�c��һ�γ���λ��
//*			- int rfind(const string& str, int pos = npos) const;	// ����str���һ��λ��,��pos��ʼ����
//*			- int rfind(const char* s, int pos = npos) const;		// ����s���һ�γ���λ��,��pos��ʼ����
//*			- int rfind(const char* s, int pos, int n) const;		// ��pos����s��ǰn���ַ����һ��λ��
//*			- int rfind(const char c, int pos = 0) const;			// �����ַ�c���һ�γ���λ��
//*			- string& replace(int pos, int n, const string& str);	// �滻��pos��ʼn���ַ�Ϊ�ַ���str
//*			- string& replace(int pos, int n,const char* s);		// �滻��pos��ʼ��n���ַ�Ϊ�ַ���s
//*		! �ܽ�
//*			- find�����Ǵ�������rfind��������
//*			- find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ�λ�ã��Ҳ�������-1
//*			- replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���
//*	@ string �Ƚ�
//*		> ����������
//*			- �ַ���֮��ıȽ�
//*		> �ȽϷ�ʽ��
//*			�ַ����Ƚ��ǰ��ַ���ASCII����жԱ�
//*			= ���� 0
//*			> ���� 1
//*			< ���� -1
//*		> ����ԭ�ͣ�
//*			- int compare(const string &s) const;					// ���ַ���s�Ƚ�
//*			- int compare(const char *s) const;						// ���ַ���s�Ƚ�
//*		! �ܽ᣺�ַ����Ա���Ҫ�����ڱȽ������ַ����Ƿ����
//*	@ string �ַ���ȡ
//*		> string�е����ַ���ȡ��ʽ������
//*			- char& operator[](int n);								// ͨ��[]��ʽȡ�ַ�
//*			- char& at(int n);										// ͨ��at������ȡ�ַ�
//*	@ string �����ɾ��
//*		> ����������
//*			- ��string�ַ������в����ɾ���ַ�����
//*		> ����ԭ�ͣ�
//*			- string& insert(int pos, const char* s);				// �����ַ���
//*			- string& insert(int pos, const string& str);			// �����ַ���
//*			- string& insert(int pos, int n, char c);				// ��ָ��λ�ò���n���ַ�c
//*			- string& erase(int pos, int n = npos);					// ɾ����Pos��ʼ��n���ַ�
//*		! �ܽ᣺�����ɾ������ʼ�±궼�Ǵ�0��ʼ
//*	@ string �Ӵ�
//*		> ����������
//*			- ���ַ����л�ȡ��Ҫ���Ӵ�
//*		> ����ԭ�ͣ�
//*			- string substr(int pos = 0, int n = npos) const;		// ������pos��ʼ��n���ַ���ɵ��ַ���
//*
//*/
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//// string �Ĺ��캯��
//void test01(void)
//{
//	string s1;		// Ĭ�Ϲ���
//
//	s1 = "���";
//
//	const char* str = "hello world";
//	string s2(str);
//
//	string s3(s2);
//
//	string s4(10, 'c');
//
//	cout << "s1 = " << s1 << endl;
//	cout << "s2 = " << s2 << endl;
//	cout << "s3 = " << s3 << endl;
//	cout << "s4 = " << s4 << endl;
//}
//
//// string ��ֵ����
//void test02(void)
//{
//	string str1;
//	str1 = "hello world";
//
//	string str2;
//	str2 = str1;
//
//	string str3;
//	str3 = 'a';
//
//	string str4;
//	str4.assign("hello C++ ");
//
//	string str5;
//	str5.assign("hello C++ ", 5);			// ���ַ���s��ǰn���ַ�������ǰ���ַ���
//
//	string str6;
//	str6.assign(str5);
//
//	string str7;
//	str7.assign(10, 'c');
//
//	cout << "str1 = " << str1 << endl;
//	cout << "str2 = " << str2 << endl;
//	cout << "str3 = " << str3 << endl;
//	cout << "str4 = " << str4 << endl;
//	cout << "str5 = " << str5 << endl;
//	cout << "str6 = " << str6 << endl;
//	cout << "str7 = " << str7 << endl;
//}
//
//// string �ַ���ƴ��
//void test03(void)
//{
//	string str1;
//	str1 += "hello world";
//
//	string str2 = "woCao ";
//	str2 += str1;
//
//	string str3 = "I ";
//	str3.append("ca");
//
//	string str4 = "U ";
//	str4.append("woCao", 2);		// ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//
//	string str5 = "Hi ";
//	str5.append(str1);
//
//	string str6;
//	str6.append("abcdefghijklmn", 0, 3);	// ��0��ʼ����
//
//
//	cout << "str1 = " << str1 << endl;
//	cout << "str2 = " << str2 << endl;
//	cout << "str3 = " << str3 << endl;
//	cout << "str4 = " << str4 << endl;
//	cout << "str5 = " << str5 << endl;
//	cout << "str6 = " << str6 << endl;
//}
//
//// string ����
//void test04(void)
//{
//	string str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	string str2 = "fbddjlvbsuodvbcsuabhfsaigb";
//	string str3 = "HBDHuiFBIbjkKJfIBFJIsfnbdi";
//
//	int pos = str1.find("BC");
//	cout << "pos = " << pos << endl;
//
//}
//
//// string ��ȡ
//void test05(void)
//{
//	string str1= "hello world";
//
//	cout << "str1 = " << str1 << endl;
//
//	// ͨ��[]�����ʵ����ַ�
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1[i] << ' ';
//	}
//
//	cout << endl;
//
//	// ͨ��at��ʽ�����ʵ����ַ�
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1.at(i) << ' ';
//	}
//}
//
//int main(void)
//{
//	cout << "woCao" << endl;
//
//	//test01();
//	//test02();
//	//test03();
//	//test04();
//	test05();
//
//	return 0;
//}
//
//
//
//
