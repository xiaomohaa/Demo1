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
///*	�ļ�����
//*	@ ͷ�ļ���<fstream>
//*	@ �ļ�����
//*		> �ı��ļ����ļ����ı���ASCII��ʽ�洢�ڼ������
//*		> �������ļ����ļ��Զ�������ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ���
//*	@ �����ļ���������
//*		> ofstream��д����
//*		> ifstream��������
//*		> fstream ����д����
//*	@ д�ļ�
//*		> д�ļ�����
//*			- ����ͷ�ļ�	#include <fstream>
//*			- ����������	ofstream ofs;
//*			- ���ļ�		ofs.open("�ļ�·��", �򿪷�ʽ);
//*			- д����		ofs << "д�������";
//*			- �ر��ļ�		ofs.close();
//*		> �ļ��򿪷�ʽ
//*			- ios::in		Ϊ���ļ������ļ�
//*			- ios::out		Ϊд�ļ������ļ�
//*			- ios::ate		��ʼλ�ã��ļ�β
//*			- ios::app		׷�ӷ�ʽд�ļ�
//*			- ios::trunc	����ļ�������ɾ�����ٴ���
//*			- ios::binary	�����Ʒ�ʽ
//*			! ע�⣺�ļ��򿪷�ʽ�������ʹ�ã����� | ���������磺 ios::out | ios::binary
//*	@ ���ļ�
//*		> ���ļ�����
//*			- ����ͷ�ļ�	#include <fstream>
//*			- ����������	ifstream ifs;
//*			- ���ļ����ж��ļ��Ƿ�򿪳ɹ�		ifs.open("�ļ�·��", �򿪷�ʽ);
//*			- ������		���ַ�ʽ��ȡ
//*			- �ر��ļ�		ifs.close();
//*/	
//
//// �ı��ļ� д�ļ�
//void test01(void)
//{
//	// ����ͷ�ļ�
//	// ����������	
//	ofstream ofs;
//	// ���ļ�
//	ofs.open("test.txt", ios::out);
//	// д����
//	ofs << "wocao" << endl;
//	ofs << "�ļ�д����" << endl;
//	// �ر��ļ�
//	ofs.close();
//}
//
//// �ı��ļ� ���ļ�
//void test02(void)
//{
//	// ����ͷ�ļ�
//	// ����������	
//	ifstream ifs;
//	// ���ļ�
//	ifs.open("test.txt", ios::in);
//	// �ж��ļ��Ƿ�򿪳ɹ�
//	if (!ifs.is_open())
//	{
//		cout << "file open filed !" << endl;
//		return;
//	}
//	// ������
//
//	// ��һ��
//	char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}
//
//	// �ڶ���
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	// ������
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	// ������
//	//char c;
//	//while ((c = ifs.get()) != EOF)
//	//{
//	//	cout << c;
//	//}
//
//
//	// �ر��ļ�
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