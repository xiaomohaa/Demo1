//// new
//// c++ ʹ��new��ջ���������ݣ�ʹ��delete�ͷ�
//
//#include <iostream>
//
//// ռλ����
//void func(int a, int)
//{
//	std::cout << "this is func" << std::endl;
//}
//
//
//int main(void)
//{
//	// new �Ļ����﷨
//	int* p = new int(10);		// С���Ŵ�����һ������
//
//	std::cout << *p << std::endl;
//	*p = 100;
//	std::cout << *p << std::endl;
//
//	delete p;
//
//	int* q = new int[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		q[i] = i * 1000;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		// *q+i �� *(q+i)�ǲ�һ����
//		std::cout << *(q + i) << std::endl;
//
//	}
//
//	// �ͷ������ʱ����Ҫ��������
//	delete [] q;
//
//	int sss = 1000;
//	int& bbb = sss;
//
//	std::cout << sss << std::endl;
//	std::cout << bbb << std::endl;
//
//	bbb = 10;
//
//	std::cout << sss << std::endl;
//	std::cout << bbb << std::endl;
//
//	return 0;
//}