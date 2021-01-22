//
///*	deque ����
//*	@ deque ������������
//*		> ���ܣ�
//*			- ˫�����飬���Զ�ͷ�˽��в���ɾ������
//*		> deque �� vector ����
//*			- vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
//*			- deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻر�vector��
//*			- vector����Ԫ��ʱ���ٶȻ��deque��,��������ڲ�ʵ���й�
//*	@ deque ���캯��
//*		> ����������
//*			- deque ��������
//*		> ����ԭ�ͣ�
//*			- deque<T> deqT;						// Ĭ�Ϲ�����ʽ
//*			- deque(beg, end);						// ���캯����[beg, end)�����е�Ԫ�ؿ���������
//*			- deque(n, elem);						// ���캯����n��elem����������
//*			- deque(const deque &deq);				// �������캯��
//*		! deque ������vector�����Ĺ��췽ʽ����һ��
//*	@ deque ��ֵ����
//*		> ����������
//*			- ��deque�������и�ֵ
//*		> ����ԭ�ͣ�
//*			- deque& operator=(const deque &deq);	// ���صȺŲ�����
//*			- assign(beg, end);						// ��[beg, end)�����е����ݿ�����ֵ������
//*			- assign(n, elem);						// ��n��elem������ֵ������
//*	@ deque ��С����
//*		> ����������
//*			- ��deque�����Ĵ�С���в���
//*		> ����ԭ�ͣ�
//*			- deque.empty();						// �ж������Ƿ�Ϊ��
//*			- deque.size();							// ����������Ԫ�صĸ���
//*			- deque.resize(num);					// ����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
//*													// ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//*			- deque.resize(num, elem);				// ����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á�
//*													// ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//*		! deque û�������ĸ���
//*	@ deque �����ɾ��
//*		> ����������
//*			- ��deque�����в����ɾ������
//*		> ����ԭ�ͣ�
//*		���˲��������
//*			- push_back(elem);						// ������β�����һ������
//*			- push_front(elem);						// ������ͷ������һ������
//*			- pop_back();							// ɾ���������һ������
//*			- pop_front();							// ɾ��������һ������
//*		ָ��λ�ò�����
//*			- insert(pos,elem);						// ��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
//*			- insert(pos,n,elem);					// ��posλ�ò���n��elem���ݣ��޷���ֵ��
//*			- insert(pos,beg,end);					// ��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//*			- clear();								// �����������������
//*			- erase(beg,end);						// ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//*			- erase(pos);							// ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//*	@ deque ���ݴ�ȡ
//*		> ����������
//*			- ��deque �е����ݵĴ�ȡ����
//*		> ����ԭ�ͣ�
//*			- at(int idx);							// ��������idx��ָ������
//*			- operator[];							// ��������idx��ָ������
//*			- front();								// ���������е�һ������Ԫ��
//*			- back();								// �������������һ������Ԫ��
//*	@ deque ����
//*		> ����������
//*			- �����㷨ʵ�ֶ�deque������������
//*		> �㷨��
//*			- sort(iterator beg, iterator end)		// ��beg��end������Ԫ�ؽ�������
//*			- #include <algorithm>					// ��Ҫ��׼�㷨ͷ�ļ�
//*/
//
//#include <iostream>
//#include <deque>
//#include <algorithm>		// ��׼�㷨ͷ�ļ�
//
//using namespace std;
//
//// deque ����
//void test01(void)
//{
//	deque<int> d1;
//	d1.push_back(1);
//	d1.push_back(4);
//	d1.push_back(3);
//	d1.push_back(6);
//	d1.push_back(2);
//	d1.push_back(7);
//	d1.push_back(5);
//
//	cout << "����ǰ��";
//	for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//
//	// ����Ĭ�Ϲ���Ϊ��С����
//	// ����֧��������ʵĵ���������������������sort�㷨��������
//	// vector ����Ҳ����
//	sort(d1.begin(), d1.end());
//
//	cout << "�����";
//	for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
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
//	test01();
//
//	return 0;
//}