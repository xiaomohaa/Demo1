//
///*	string 容器
//*	@ string 基本概念
//*		> 本质：string是C++风格的字符串，而string本质上是一个类
//*		> string和char * 区别：
//*			- char * 是一个指针
//*			- string是一个类，类内部封装了char*，管理这个字符串，是一个char*型的容器。
//*		> 特点：
//*			- string 类内部封装了很多成员方法.例如：查找find，拷贝copy，删除delete 替换replace，插入insert
//*			- string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责
//*	@ string 构造函数
//*		> 构造函数原型
//*			- string();												// 创建一个空的字符串 例如: string str;
//*			- string(const char* s);								// 使用字符串s初始化
//*			- string(const string& str);							// 使用一个string对象初始化另一个string对象
//*			- string(int n, char c);								// 使用n个字符c初始化
//*	@ string 赋值操作
//*		> 赋值的函数原型
//*			- string& operator = (const char* s);					// char*类型字符串 赋值给当前的字符串
//*			- string& operator = (const string &s);					// 把字符串s赋给当前的字符串
//*			- string& operator = (char c);							// 字符赋值给当前的字符串
//*			- string& assign(const char *s);						// 把字符串s赋给当前的字符串
//*			- string& assign(const char *s, int n);					// 把字符串s的前n个字符赋给当前的字符串
//*			- string& assign(const string &s);						// 把字符串s赋给当前字符串
//*			- string& assign(int n, char c);						// 用n个字符c赋给当前字符
//*	@ string 字符串拼接
//*		> 实现在字符串的末尾拼接字符串
//*		> 函数原型：
//*			- string& operator += (const char* str);				// 重载+=操作符
//*			- string& operator += (const char c);					// 重载+=操作符
//*			- string& operator += (const string& str);				// 重载+=操作符
//*			- string& append(const char *s);						// 把字符串s连接到当前字符串结尾
//*			- string& append(const char *s, int n);					// 把字符串s的前n个字符连接到当前字符串结尾
//*			- string& append(const string &s);						// 同operator+=(const string& str)
//*			- string& append(const string &s, int pos, int n);		// 字符串s中从pos开始的n个字符连接到字符串结尾，从0开始计数
//*	@ string 查找和替换
//*		> 功能描述：
//*			- 查找：查找指定字符串是否存在
//*			- 替换：在指定的位置替换字符串
//*		> 函数原型：
//*			- int find(const string& str, int pos = 0) const;		// 查找str第一次出现位置,从pos开始查找
//*			- int find(const char* s, int pos = 0) const;			// 查找s第一次出现位置,从pos开始查找
//*			- int find(const char* s, int pos, int n) const;		// 从pos位置查找s的前n个字符第一次位置
//*			- int find(const char c, int pos = 0) const;			// 查找字符c第一次出现位置
//*			- int rfind(const string& str, int pos = npos) const;	// 查找str最后一次位置,从pos开始查找
//*			- int rfind(const char* s, int pos = npos) const;		// 查找s最后一次出现位置,从pos开始查找
//*			- int rfind(const char* s, int pos, int n) const;		// 从pos查找s的前n个字符最后一次位置
//*			- int rfind(const char c, int pos = 0) const;			// 查找字符c最后一次出现位置
//*			- string& replace(int pos, int n, const string& str);	// 替换从pos开始n个字符为字符串str
//*			- string& replace(int pos, int n,const char* s);		// 替换从pos开始的n个字符为字符串s
//*		! 总结
//*			- find查找是从左往后，rfind从右往左
//*			- find找到字符串后返回查找的第一个字符位置，找不到返回-1
//*			- replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串
//*	@ string 比较
//*		> 功能描述：
//*			- 字符串之间的比较
//*		> 比较方式：
//*			字符串比较是按字符的ASCII码进行对比
//*			= 返回 0
//*			> 返回 1
//*			< 返回 -1
//*		> 函数原型：
//*			- int compare(const string &s) const;					// 与字符串s比较
//*			- int compare(const char *s) const;						// 与字符串s比较
//*		! 总结：字符串对比主要是用于比较两个字符串是否相等
//*	@ string 字符存取
//*		> string中单个字符存取方式有两种
//*			- char& operator[](int n);								// 通过[]方式取字符
//*			- char& at(int n);										// 通过at方法获取字符
//*	@ string 插入和删除
//*		> 功能描述：
//*			- 对string字符串进行插入和删除字符操作
//*		> 函数原型：
//*			- string& insert(int pos, const char* s);				// 插入字符串
//*			- string& insert(int pos, const string& str);			// 插入字符串
//*			- string& insert(int pos, int n, char c);				// 在指定位置插入n个字符c
//*			- string& erase(int pos, int n = npos);					// 删除从Pos开始的n个字符
//*		! 总结：插入和删除的起始下标都是从0开始
//*	@ string 子串
//*		> 功能描述：
//*			- 从字符串中获取想要的子串
//*		> 函数原型：
//*			- string substr(int pos = 0, int n = npos) const;		// 返回由pos开始的n个字符组成的字符串
//*
//*/
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//// string 的构造函数
//void test01(void)
//{
//	string s1;		// 默认构造
//
//	s1 = "你好";
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
//// string 赋值操作
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
//	str5.assign("hello C++ ", 5);			// 把字符串s的前n个字符赋给当前的字符串
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
//// string 字符串拼接
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
//	str4.append("woCao", 2);		// 把字符串s的前n个字符连接到当前字符串结尾
//
//	string str5 = "Hi ";
//	str5.append(str1);
//
//	string str6;
//	str6.append("abcdefghijklmn", 0, 3);	// 从0开始计数
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
//// string 查找
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
//// string 存取
//void test05(void)
//{
//	string str1= "hello world";
//
//	cout << "str1 = " << str1 << endl;
//
//	// 通过[]来访问单个字符
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1[i] << ' ';
//	}
//
//	cout << endl;
//
//	// 通过at方式来访问单个字符
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
