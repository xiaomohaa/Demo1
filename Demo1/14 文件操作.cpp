//#include <iostream>
//#include <string>
//#include <fstream>
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::ostream;
//using std::ofstream;
//using std::ifstream;
//using std::ios;
//
///*	文件操作
//*	@ 头文件：<fstream>
//*	@ 文件类型
//*		> 文本文件：文件以文本的ASCII形式存储在计算机中
//*		> 二进制文件：文件以二进制形式存储在计算机中，用户一般不能直接读懂
//*	@ 操作文件的三大类
//*		> ofstream：写操作
//*		> ifstream：读操作
//*		> fstream ：读写操作
//*	@ 写文件
//*		> 写文件步骤
//*			- 包含头文件	#include <fstream>
//*			- 创建流对象	ofstream ofs;
//*			- 打开文件		ofs.open("文件路径", 打开方式);
//*			- 写数据		ofs << "写入的数据";
//*			- 关闭文件		ofs.close();
//*		> 文件打开方式
//*			- ios::in		为读文件而打开文件
//*			- ios::out		为写文件而打开文件
//*			- ios::ate		初始位置：文件尾
//*			- ios::app		追加方式写文件
//*			- ios::trunc	如果文件存在先删除，再创建
//*			- ios::binary	二进制方式
//*			! 注意：文件打开方式可以配合使用，利用 | 操作符，如： ios::out | ios::binary
//*	@ 读文件
//*		> 读文件步骤
//*			- 包含头文件	#include <fstream>
//*			- 创建流对象	ifstream ifs;
//*			- 打开文件并判断文件是否打开成功		ifs.open("文件路径", 打开方式);
//*			- 读数据		四种方式读取
//*			- 关闭文件		ifs.close();
//*/	
//
//// 文本文件 写文件
//void test01(void)
//{
//	// 包含头文件
//	// 创建流对象	
//	ofstream ofs;
//	// 打开文件
//	ofs.open("test.txt", ios::out);
//	// 写数据
//	ofs << "wocao" << endl;
//	ofs << "文件写操作" << endl;
//	// 关闭文件
//	ofs.close();
//}
//
//// 文本文件 读文件
//void test02(void)
//{
//	// 包含头文件
//	// 创建流对象	
//	ifstream ifs;
//	// 打开文件
//	ifs.open("test.txt", ios::in);
//	// 判断文件是否打开成功
//	if (!ifs.is_open())
//	{
//		cout << "file open filed !" << endl;
//		return;
//	}
//	// 读数据
//
//	// 第一种
//	char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}
//
//	// 第二种
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	// 第三种
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	// 第四种
//	//char c;
//	//while ((c = ifs.get()) != EOF)
//	//{
//	//	cout << c;
//	//}
//
//
//	// 关闭文件
//	ifs.close();
//}
//
//
//int main(void)
//{
//	cout << "wocao" << endl;
//
//	test01();
//	test02();
//
//	return 0;
//}