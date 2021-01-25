
/*	STL �����㷨
*	@ ����:
*		> �㷨��Ҫ����ͷ�ļ�<algorithm> <functional> <numeric> ��ɡ�
*			- <algorithm> ������STLͷ�ļ�������һ������Χ�漰���Ƚϡ� ���������ҡ��������������ơ��޸ĵȵ�
*			- <numeric> �����С��ֻ��������������������м���ѧ�����ģ�庯��
*			- <functional> ������һЩģ����,����������������
*	@ ���ñ����㷨
*		> ѧϰĿ�꣺
*			- ���ճ��õı����㷨
*		> �㷨��飺
*			- for_each								// ��������
*			- transform								// ������������һ��������
*		> for_each
*			- ����������
*				. ʵ�ֱ�������
*			- ����ԭ�ͣ�
*				. for_each(iterator beg, iterator end, _func);
*					// �����㷨 ��������Ԫ��
*					// beg ��ʼ������
*					// end ����������
*					// _func �������ߺ�������
*		> transform
*			- ����������
*				. ������������һ��������
*			- ����ԭ�ͣ�
*				. transform(iterator beg1, iterator end1, iterator beg2, _func);
*					//beg1 Դ������ʼ������
*					//end1 Դ��������������
*					//beg2 Ŀ��������ʼ������
*					//_func �������ߺ�������
*			! �ܽ᣺ ���˵�Ŀ����������Ҫ��ǰ���ٿռ䣬�����޷���������
*	@ ���ò����㷨
*		> ѧϰĿ�꣺
*			- ���ճ��õĲ����㷨
*		> �㷨��飺
*			- find									// ����Ԫ��
*			- find_if								// ����������Ԫ��
*			- adjacent_find							// ���������ظ�Ԫ��
*			- binary_search							// ���ֲ��ҷ�
*			- count									// ͳ��Ԫ�ظ���
*			- count_if								// ������ͳ��Ԫ�ظ���
*		> find
*			- ����������
*				. ����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()
*			- ����ԭ�ͣ�
*				. find(iterator beg, iterator end, value);
*					// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
*					// beg ��ʼ������
*					// end ����������
*					// value ���ҵ�Ԫ��
*		> find_if
*			- ����������
*				. ����������Ԫ��
*			- ����ԭ�ͣ�
*				. find_if(iterator beg, iterator end, _Pred);
*					// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
*					// beg ��ʼ������
*					// end ����������
*					// _Pred ��������ν�ʣ�����bool���͵ķº�����
*		> adjacent_find
*			- ����������
*				. ���������ظ�Ԫ��
*			- ����ԭ�ͣ�
*				. adjacent_find(iterator beg, iterator end);
*					// ���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õĵ�����
*					// beg ��ʼ������
*					// end ����������
*		> binary_search
*			- ����������
*				. ����ָ��Ԫ���Ƿ����
*			- ����ԭ�ͣ�
*				. bool binary_search(iterator beg, iterator end, value);
*					// ����ָ����Ԫ�أ��鵽 ����true ����false
*					// ע��: �����������в�����
*					// beg ��ʼ������
*					// end ����������
*					// value ���ҵ�Ԫ��
*		> count
*			- ����������
*				. ͳ��Ԫ�ظ���
*			- ����ԭ�ͣ�
*				. count(iterator beg, iterator end, value);
*					// ͳ��Ԫ�س��ִ���
*					// beg ��ʼ������
*					// end ����������
*					// value ͳ�Ƶ�Ԫ��
*		> count_if
*			- ����������
*				. ������ͳ��Ԫ�ظ���
*			- ����ԭ�ͣ�
*				. count_if(iterator beg, iterator end, _Pred);
*					// ������ͳ��Ԫ�س��ִ���
*					// beg ��ʼ������
*					// end ����������
*					// _Pred ν��
*	@ ���������㷨
*		> ѧϰĿ�꣺
*			- ���ճ��õ������㷨
*		> �㷨��飺
*			- sort										// ��������Ԫ�ؽ�������
*			- random_shuffle							// ϴ�� ָ����Χ�ڵ�Ԫ�������������
*			- merge										// ����Ԫ�غϲ������洢����һ������
*			- reverse									// ��תָ����Χ��Ԫ��
*		> sort
*			- ����������
*				. ��������Ԫ�ؽ�������
*			- ����ԭ�ͣ�
*				. sort(iterator beg, iterator end, _Pred);
*					// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
*					// beg ��ʼ������
*					// end ����������
*					// _Pred ν��
*		> random_shuffle
*			- ����������
*				. ϴ�� ָ����Χ�ڵ�Ԫ�������������
*			- ����ԭ�ͣ�
*				. random_shuffle(iterator beg, iterator end);
*					// ָ����Χ�ڵ�Ԫ�������������
*					// beg ��ʼ������
*					// end ����������
*		> merge
*			- ����������
*				. ��������Ԫ�غϲ������洢����һ������
*			- ����ԭ�ͣ�
*				. merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*					// ����Ԫ�غϲ������洢����һ������
*					// ע��: �������������������
*					// beg1 ����1��ʼ������ // end1 ����1���������� // beg2 ����2��ʼ������ // end2 ����2���������� // dest Ŀ��������ʼ������
*		> reverse
*			- ����������
*				. ��������Ԫ�ؽ��з�ת
*			- ����ԭ�ͣ�
*				. reverse(iterator beg, iterator end);
*					// ��תָ����Χ��Ԫ��
*					// beg ��ʼ������
*					// end ����������
*	@ ���ÿ������滻�㷨
*		> ѧϰĿ�꣺
*			- ���ճ��õĿ������滻�㷨
*		> �㷨��飺
*			- copy											// ������ָ����Χ��Ԫ�ؿ�������һ������
*			- replace										// ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
*			- replace_if									// ������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
*			- swap											// ��������������Ԫ��
*		> copy
*			- ����������
*				. ������ָ����Χ��Ԫ�ؿ�������һ������
*			- ����ԭ�ͣ�
*				.copy(iterator beg, iterator end, iterator dest);
*					// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
*					// beg ��ʼ������
*					// end ����������
*					// dest Ŀ����ʼ������
*			! ����copy�㷨�ڿ���ʱ��Ŀ�������ǵ���ǰ���ٿռ�
*		> replace
*			- ����������
*				. ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
*			- ����ԭ�ͣ�
*				. replace(iterator beg, iterator end, oldvalue, newvalue);
*					// �������ھ�Ԫ�� �滻�� ��Ԫ��
*					// beg ��ʼ������
*					// end ����������
*					// oldvalue ��Ԫ��
*					// newvalue ��Ԫ��
*		> replace_if
*			- ��������:
*				. ������������������Ԫ�أ��滻��ָ��Ԫ��
*			- ����ԭ�ͣ�
*				. replace_if(iterator beg, iterator end, _pred, newvalue);
*					// �������滻Ԫ�أ������������滻��ָ��Ԫ��
*					// beg ��ʼ������
*					// end ����������
*					// _pred ν��
*					// newvalue �滻����Ԫ��
*		> swap
*			- ����������
*				. ��������������Ԫ��
*			- ����ԭ�ͣ�
*				. swap(container c1, container c2);
*					// ��������������Ԫ��
*					// c1����1
*					// c2����2
*	@ �������������㷨
*		> ѧϰĿ�꣺
*			- ���ճ��õ����������㷨
*		! ע�⣺
*			- ���������㷨����С���㷨��ʹ��ʱ������ͷ�ļ�Ϊ #include <numeric>
*		> �㷨��飺
*			- accumulate									// ��������Ԫ���ۼ��ܺ�
*			- fill											// �����������Ԫ��
*		> accumulate
*			- ����������
*				. ���������� ����Ԫ���ۼ��ܺ�
*			- ����ԭ�ͣ�
*				. accumulate(iterator beg, iterator end, value);
*					// ��������Ԫ���ۼ��ܺ�
*					// beg ��ʼ������
*					// end ����������
*					// value ��ʼֵ
*			! accumulateʹ��ʱͷ�ļ�ע���� numeric������㷨��ʵ��
*		> fill
*			- ����������
*				. �����������ָ����Ԫ��
*			- ����ԭ�ͣ�
*				. fill(iterator beg, iterator end, value);
*					// �����������Ԫ��
*					// beg ��ʼ������
*					// end ����������
*					// value ����ֵ
*			! ����fill���Խ�����������Ԫ�����Ϊ ָ����ֵ
*	@ ���ü����㷨
*		> ѧϰĿ�꣺
*			- ���ճ��õļ����㷨
*		> �㷨��飺
*			- set_intersection								// �����������Ľ���
*			- set_union										// �����������Ĳ���
*			- set_difference								// �����������Ĳ
*		> set_intersection
*			- ����������
*				. �����������Ľ���
*			- ����ԭ�ͣ�
*				. set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*					// ���������ϵĽ���
*					// ע��:�������ϱ�������������
*					// beg1 ����1��ʼ������ // end1 ����1���������� // beg2 ����2��ʼ������ // end2 ����2���������� // dest Ŀ��������ʼ������
*			! �ܽ᣺
*				. �󽻼����������ϱ������������
*				. Ŀ���������ٿռ���Ҫ������������ȡСֵ
*				. set_intersection����ֵ���ǽ��������һ��Ԫ�ص�λ��
*		> set_union
*			- ����������
*				. ���������ϵĲ���
*			- ����ԭ�ͣ�
*				. set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*					// ���������ϵĲ���
*					// ע��:�������ϱ�������������
*					// beg1 ����1��ʼ������ // end1 ����1���������� // beg2 ����2��ʼ������ // end2 ����2���������� // dest Ŀ��������ʼ������
*			! �ܽ᣺
*				. �󲢼����������ϱ������������
*				. Ŀ���������ٿռ���Ҫ�����������
*				. set_union����ֵ���ǲ��������һ��Ԫ�ص�λ��
*		> set_difference
*			- ����������
*				. ���������ϵĲ
*			- ����ԭ�ͣ�
*				. set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*					// ���������ϵĲ
*					// ע��:�������ϱ�������������
*					// beg1 ����1��ʼ������ // end1 ����1���������� // beg2 ����2��ʼ������ // end2 ����2���������� // dest Ŀ��������ʼ������
*			! �ܽ᣺
*				. �����������ϱ������������
*				. Ŀ���������ٿռ���Ҫ����������ȡ�ϴ�ֵ
*				. set_difference����ֵ���ǲ�����һ��Ԫ�ص�λ��
*/

#include <iostream> 
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

// �����㷨 for_each
/*

// ��ͨ����
void print01(int val)
{
	cout << val << ' ';
}

// �º���
class Print02
{
public:
	void operator()(int val)
	{
		cout << val << ' ';
	}
};

// �����㷨 for_each
void test01(void)
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), print01);
	cout << endl;

	for_each(v1.begin(), v1.end(), Print02());
	cout << endl;

}
*/

// �����㷨 transform
/*
class Transform
{
public:
	int operator()(int val)
	{
		return val + 100;
	}
};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << ' ';
	}
};

void test02(void)
{
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int> v2;			// Ŀ������
	v2.resize(v1.size());	// Ŀ��������Ҫ��ǰ���ٿռ�
	transform(v1.begin(), v1.end(), v2.begin(), Transform());

	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;
}
*/

// �����㷨 find
/*
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	// ��Ҫ���� == ���õײ��find֪�����ȥ�Ա�����
	bool operator==(const Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		
		return false;
	}

	string m_Name;
	int m_Age;
};
void test03(void)
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	// �����������Ƿ���5
	vector<int>::iterator it = find(v1.begin(), v1.end(), 50);
	if (it != v1.end())
	{
		cout << "find it " << endl;
	}
	else
	{
		cout << "can't find" << endl;
	}

	vector<Person>v2;

	Person p1("Aa", 10);
	Person p2("Bb", 20);
	Person p3("Cc", 30);
	Person p4("Dd", 40);
	Person p5("Ee", 50);

	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);
	v2.push_back(p5);

	vector<Person>::iterator it1 = find(v2.begin(), v2.end(), p2);
	if (it1 == v2.end())
	{
		cout << "can't find " << endl;
	}
	else
	{
		cout << "find it" << endl;
	}
}
*/

// �����㷨 find_if
/*
class GreatFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class Older20
{
public:
	bool operator()(Person& p)
	{
		return p.m_Age > 20;
	}
};

void test01(void)
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int>::iterator it = find_if(v1.begin(), v1.end(), GreatFive());

	if (it == v1.end())
	{
		cout << "can't find" << endl;
	}
	else
	{
		cout << "find it" << endl;
	}

	vector<Person>v2;

	Person p1("Aa", 10);
	Person p2("Bb", 20);
	Person p3("Cc", 30);
	Person p4("Dd", 40);
	Person p5("Ee", 50);

	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);
	v2.push_back(p5);

	vector<Person>::iterator it1 = find_if(v2.begin(), v2.end(), Older20());
	if (it1 == v2.end())
	{
		cout << "can't find " << endl;
	}
	else
	{
		cout << "find it" << endl;
	}
}
*/

// �����㷨 adjacent_find
/*
void test01(void)
{
	vector<int> v1;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(4);

	vector<int>::iterator it = adjacent_find(v1.begin(), v1.end());
	if (it == v1.end())
	{
		cout << " can't find" << endl;
	}
	else
	{
		cout << "�ҵ����ظ�Ԫ��Ϊ��" << *it << endl;
	}
}
*/

// ���� accumulate
/*
void test01(void)
{
	vector<int>v;
	for (int i = 0; i < 1000; i++)
	{
		v.push_back(i);
	}

	cout << accumulate(v.begin(), v.end(), 0) << endl;
}
*/

// �����㷨 set_intersection

int main(void)
{
	cout << "wocao" << endl;

	// test01();

	return 0;
}