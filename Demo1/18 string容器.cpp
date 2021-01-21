
/*	string 容器
*	@ string 基本概念
*		> 本质：string是C++风格的字符串，而string本质上是一个类
*		> string和char * 区别：
*			- char * 是一个指针
*			- string是一个类，类内部封装了char*，管理这个字符串，是一个char*型的容器。
*		> 特点：
*			- string 类内部封装了很多成员方法.例如：查找find，拷贝copy，删除delete 替换replace，插入insert
*			- string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责
*	@ string 构造函数
*		> 构造函数原型
*			- string();											// 创建一个空的字符串 例如: string str;
*			- string(const char* s);							// 使用字符串s初始化
*			- string(const string& str);						// 使用一个string对象初始化另一个string对象
*			- string(int n, char c);							// 使用n个字符c初始化
*	@ string 赋值操作
*		> 赋值的函数原型
*			- string& operator = (const char* s);				// char*类型字符串 赋值给当前的字符串
*			- string& operator = (const string &s);				// 把字符串s赋给当前的字符串
*			- string& operator = (char c);						// 字符赋值给当前的字符串
*			- string& assign(const char *s);					// 把字符串s赋给当前的字符串
*			- string& assign(const char *s, int n);				// 把字符串s的前n个字符赋给当前的字符串
*			- string& assign(const string &s);					// 把字符串s赋给当前字符串
*			- string& assign(int n, char c);					// 用n个字符c赋给当前字符
*	@ string 字符串拼接
*		> 实现在字符串的末尾拼接字符串
*		> 函数原型：
*			- string& operator += (const char* str);			// 重载+=操作符
*			- string& operator += (const char c);				// 重载+=操作符
*			- string& operator += (const string& str);			// 重载+=操作符
*			- string& append(const char *s);					// 把字符串s连接到当前字符串结尾
*			- string& append(const char *s, int n);				// 把字符串s的前n个字符连接到当前字符串结尾
*			- string& append(const string &s);					// 同operator+=(const string& str)
*			- string& append(const string &s, int pos, int n);	// 字符串s中从pos开始的n个字符连接到字符串结尾
* 
*/

#include<iostream>
#include<string>

using namespace std;

// string 的构造函数
void test01(void)
{
	string s1;		// 默认构造

	s1 = "你好";

	const char* str = "hello world";
	string s2(str);

	string s3(s2);

	string s4(10, 'c');

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << "s4 = " << s4 << endl;
}

// string 赋值操作
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
	str5.assign("hello C++ ", 5);			// 把字符串s的前n个字符赋给当前的字符串

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

// string 字符串拼接
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




