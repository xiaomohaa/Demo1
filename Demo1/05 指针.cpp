//#include <iostream>
//#include <Windows.h>
//
//int main(void)
//{
//	using namespace std;
//	
//	SYSTEMTIME sys;
//	GetLocalTime(&sys);
//	printf("%4d/%02d/%02d %02d:%02d:%02d.%03d ����%1d\n", sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute, sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);
//
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int b = 1000;
//	// 1��ָ�붨���﷨�� �������� * ָ�������;
//	int* p;
//	int* q;
//	// 2��ָ���÷���
//	// ʹ�ý����õķ�ʽ���ҵ�ָ��ָ����ڴ�
//	// ָ��ǰ���* ��������ã��ҵ�ָ��ָ����ڴ�
//	p = &b;
//	q = &a[5];
//	// ͨ�׵������ָ�����ǵ�ַ������*��ʾ����
//	cout << p << endl;
//	cout << *p << endl;
//	cout << q << endl;
//	cout << *q << endl;
//	cout << q + 1 << endl;
//	cout << *q + 1 << endl;
//	// 3��ָ����ռ���ڴ�ռ�: ��ϵͳ�йأ�x64Ϊ8�ֽڣ�x86Ϊ4�ֽ�
//	cout << sizeof(char *) << endl;
//	cout << sizeof(int *) << endl;
//	cout << sizeof(long *) << endl;
//	cout << sizeof(double *) << endl;
//	// 4����ָ�룺��ָ��ָ����ڴ��ǲ��ɷ��ʵģ����ڸ�ָ�������ʼ��
//	// 0-255֮���ڴ�����ϵͳռ�ã��û����ɷ���
//	int* m = NULL;
//	// 5��Ұָ�룺
//	// 6��const����ָ��:�����޸�ָ��
//
//
//	return 0;
//}