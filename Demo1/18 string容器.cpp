
/*	string ����
*	@ string ��������
*		> ���ʣ�string��C++�����ַ�������string��������һ����
*		> string��char * ����
*			- char * ��һ��ָ��
*			- string��һ���࣬���ڲ���װ��char*����������ַ�������һ��char*�͵�������
*		> �ص㣺
*			- string ���ڲ���װ�˺ܶ��Ա����.���磺����find������copy��ɾ��delete �滻replace������insert
*			- string����char*��������ڴ棬���õ��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���
*	@ string ���캯��
*		> ���캯��ԭ��
*			- string();											// ����һ���յ��ַ��� ����: string str;
*			- string(const char* s);							// ʹ���ַ���s��ʼ��
*			- string(const string& str);						// ʹ��һ��string�����ʼ����һ��string����
*			- string(int n, char c);							// ʹ��n���ַ�c��ʼ��
*	@ string ��ֵ����
*		> ��ֵ�ĺ���ԭ��
*			- string& operator = (const char* s);				// char*�����ַ��� ��ֵ����ǰ���ַ���
*			- string& operator = (const string &s);				// ���ַ���s������ǰ���ַ���
*			- string& operator = (char c);						// �ַ���ֵ����ǰ���ַ���
*			- string& assign(const char *s);					// ���ַ���s������ǰ���ַ���
*			- string& assign(const char *s, int n);				// ���ַ���s��ǰn���ַ�������ǰ���ַ���
*			- string& assign(const string &s);					// ���ַ���s������ǰ�ַ���
*			- string& assign(int n, char c);					// ��n���ַ�c������ǰ�ַ�
*	@ string �ַ���ƴ��
*		> ʵ�����ַ�����ĩβƴ���ַ���
*		> ����ԭ�ͣ�
*			- string& operator += (const char* str);			// ����+=������
*			- string& operator += (const char c);				// ����+=������
*			- string& operator += (const string& str);			// ����+=������
*			- string& append(const char *s);					// ���ַ���s���ӵ���ǰ�ַ�����β
*			- string& append(const char *s, int n);				// ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
*			- string& append(const string &s);					// ͬoperator+=(const string& str)
*			- string& append(const string &s, int pos, int n);	// �ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
* 
*/

#include<iostream>
#include<string>

using namespace std;

// string �Ĺ��캯��
void test01(void)
{
	string s1;		// Ĭ�Ϲ���

	s1 = "���";

	const char* str = "hello world";
	string s2(str);

	string s3(s2);

	string s4(10, 'c');

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << "s4 = " << s4 << endl;
}

// string ��ֵ����
void test02(void)
{
	string str1;
	str1 = "hello world";

	string str2;
	str2 = str1;

	string str3;
	str3 = 'a';

	string str4;
	str4.assign("hello C++ ");

	string str5;
	str5.assign("hello C++ ", 5);			// ���ַ���s��ǰn���ַ�������ǰ���ַ���

	string str6;
	str6.assign(str5);

	string str7;
	str7.assign(10, 'c');

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;
	cout << "str4 = " << str4 << endl;
	cout << "str5 = " << str5 << endl;
	cout << "str6 = " << str6 << endl;
	cout << "str7 = " << str7 << endl;
}

// string �ַ���ƴ��
void test03(void)
{
	string str1;
	str1 += "hello world";

	string str2 = "woCao ";
	str2 += str1;

	string str3 = "I ";
	str3.append("cao");

	string str4;


	string str5;

	string str6;


	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;
	cout << "str4 = " << str4 << endl;
	cout << "str5 = " << str5 << endl;
	cout << "str6 = " << str6 << endl;
}

int main(void)
{
	cout << "woCao" << endl;

	//test01();
	//test02();
	test03();

	return 0;
}




