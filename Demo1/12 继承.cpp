//#include <iostream>
//#include <string>
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::ostream;
//
///*	�̳У������ظ��Ĵ���
//*	@ �﷨��class ���� ���̳з�ʽ ����
//*		> ����Ҳ��Ϊ������
//*		> ����Ҳ��Ϊ����
//*	@ �̳з�ʽ
//*		> �����̳У�public��	��public��protected���̳е�public��protectedȨ�ޣ�ԭprivate���ɷ���
//*		> �����̳У�protected��	��public��protected���̳е�protected��ԭprivate���ɷ���
//*		> ˽�м̳У�private��	��public��protected���̳е�private��ԭprivate���ɷ���
//*	@ �̳��еĶ���ģ��
//*		> ���ÿ�����Ա������ʾ���߲鿴�������ģ��
//*		> cd��ת����ȷ·��������cl /d1 reportSingleClassLayoutSon "12 �̳�.cpp"�鿴
//*	@ �̳��й��������˳��
//*		> �ȹ��츸�࣬�ٹ������ࣻ����˳���빹��˳���෴
//*	@ �̳�ͬ����Ա����ʽ
//*		> ��������ͬ����Ա��ֱ�ӷ��ʼ���
//*		> ���ʸ���ͬ����Ա����Ҫ����������Ҫ�ðְֵĶ�����ö�Ҫ֪ͨһ�£�
//*	@ �̳�ͬ����̬��Ա����ʽ
//*		> ��������ͬ����Ա��ֱ�ӷ��ʼ���
//*		> ���ʸ���ͬ����Ա����Ҫ����������Ҫ�ðְֵĶ�����ö�Ҫ֪ͨһ�£�
//*	@ ��̳��﷨�������飩
//*		> Ҫע������������
//*	@ ���μ̳�
//*		> ���μ̳е�ʱ��������ͬ���ݣ���Ҫ�����������������
//*		> ������̳н�����μ̳е����⣬�ڼ̳�֮ǰ���Ϲؼ��� virtual
//*/
//
//// �̳�ʵ��
//// ����ҳ��
//class BasePage
//{
//public:
//	void header(void)
//	{
//		cout << "public header" << endl;
//	}
//	void footer(void)
//	{
//		cout << "public footer" << endl;
//	}
//	void lefter(void)
//	{
//		cout << "public lefter" << endl;
//	}
//};
//
//class Java: public BasePage
//{
//public:
//
//	void content(void)
//	{
//		cout << "Java" << endl;
//	}
//};
//
//class Python : public BasePage
//{
//public:
//	void content(void)
//	{
//		cout << "Python" << endl;
//	}
//};
//
//class Cpp : public BasePage
//{
//public:
//	void content(void)
//	{
//		cout << "Cpp" << endl;
//	}
//};
//
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base�Ĺ��캯����" << endl;
//		flag = 1;
//	}
//
//	~Base()
//	{
//		cout << "Base������������" << endl;
//	}
//
//	void show(void)
//	{
//		cout << "Base's show." << endl;
//	}
//
//public:
//	int m_A;
//	int flag;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son�Ĺ��캯����" << endl;
//		flag = 2;
//	}
//
//	~Son()
//	{
//		cout << "Son������������" << endl;
//	}
//
//	void show(void)
//	{
//		cout << "Son's show." << endl;
//	}
//
//public:
//	int m_D;
//	int flag;
//};
//
//// �̳в���
//void test01(void)
//{
//	Java j1;
//
//	cout << "Java Web" << endl;
//
//	j1.header();
//	j1.lefter();
//	j1.footer();
//	j1.content();
//}
//
//// �̳��еĶ���ģ�Ͳ���
//void test02(void)
//{
//	// �����е����зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	// �����е�˽�г�Ա�����Ǳ������������ˣ���˷��ʲ���������ȷʵ���̳���ȥ��
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
//
//// ���캯������������˳�����
//void test03(void)
//{
//	Son s;
//}
//
//// �̳���ͬ����Ա����
//void test04(void)
//{
//	Son s;
//
//	cout << "Son's flag = " << s.flag << endl;
//	// ���ͨ�����������ʵ�������ͬ���Ա����Ҫ��������
//	cout << "Base's flag = " << s.Base::flag << endl;
//
//	s.show();
//
//	// ��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ�����������ص����������е�ͬ����Ա�������������أ�
//	// �������ʵ������б����ص�ͬ����Ա��������Ҫ��������
//	s.Base::show();
//}
//
//
//int main(void) 
//{
//	cout << "wocao" << endl;
//
//	//test01();
//	//test02();
//	//test03();
//	test04();
//
//	system("pause");
//	return 0;
//}