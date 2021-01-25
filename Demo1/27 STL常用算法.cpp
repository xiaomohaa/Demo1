
/*	STL 常用算法
*	@ 概述:
*		> 算法主要是由头文件<algorithm> <functional> <numeric> 组成。
*			- <algorithm> 是所有STL头文件中最大的一个，范围涉及到比较、 交换、查找、遍历操作、复制、修改等等
*			- <numeric> 体积很小，只包括几个在序列上面进行简单数学运算的模板函数
*			- <functional> 定义了一些模板类,用以声明函数对象。
*	@ 常用遍历算法
*		> 学习目标：
*			- 掌握常用的遍历算法
*		> 算法简介：
*			- for_each								// 遍历容器
*			- transform								// 搬运容器到另一个容器中
*		> for_each
*			- 功能描述：
*				. 实现遍历容器
*			- 函数原型：
*				. for_each(iterator beg, iterator end, _func);
*					// 遍历算法 遍历容器元素
*					// beg 开始迭代器
*					// end 结束迭代器
*					// _func 函数或者函数对象
*		> transform
*			- 功能描述：
*				. 搬运容器到另一个容器中
*			- 函数原型：
*				. transform(iterator beg1, iterator end1, iterator beg2, _func);
*					//beg1 源容器开始迭代器
*					//end1 源容器结束迭代器
*					//beg2 目标容器开始迭代器
*					//_func 函数或者函数对象
*			! 总结： 搬运的目标容器必须要提前开辟空间，否则无法正常搬运
*	@ 常用查找算法
*		> 学习目标：
*			- 掌握常用的查找算法
*		> 算法简介：
*			- find									// 查找元素
*			- find_if								// 按条件查找元素
*			- adjacent_find							// 查找相邻重复元素
*			- binary_search							// 二分查找法
*			- count									// 统计元素个数
*			- count_if								// 按条件统计元素个数
*		> find
*			- 功能描述：
*				. 查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
*			- 函数原型：
*				. find(iterator beg, iterator end, value);
*					// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
*					// beg 开始迭代器
*					// end 结束迭代器
*					// value 查找的元素
*		> find_if
*			- 功能描述：
*				. 按条件查找元素
*			- 函数原型：
*				. find_if(iterator beg, iterator end, _Pred);
*					// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
*					// beg 开始迭代器
*					// end 结束迭代器
*					// _Pred 函数或者谓词（返回bool类型的仿函数）
*		> adjacent_find
*			- 功能描述：
*				. 查找相邻重复元素
*			- 函数原型：
*				. adjacent_find(iterator beg, iterator end);
*					// 查找相邻重复元素,返回相邻元素的第一个位置的迭代器
*					// beg 开始迭代器
*					// end 结束迭代器
*		> binary_search
*			- 功能描述：
*				. 查找指定元素是否存在
*			- 函数原型：
*				. bool binary_search(iterator beg, iterator end, value);
*					// 查找指定的元素，查到 返回true 否则false
*					// 注意: 在无序序列中不可用
*					// beg 开始迭代器
*					// end 结束迭代器
*					// value 查找的元素
*		> count
*			- 功能描述：
*				. 统计元素个数
*			- 函数原型：
*				. count(iterator beg, iterator end, value);
*					// 统计元素出现次数
*					// beg 开始迭代器
*					// end 结束迭代器
*					// value 统计的元素
*		> count_if
*			- 功能描述：
*				. 按条件统计元素个数
*			- 函数原型：
*				. count_if(iterator beg, iterator end, _Pred);
*					// 按条件统计元素出现次数
*					// beg 开始迭代器
*					// end 结束迭代器
*					// _Pred 谓词
*	@ 常用排序算法
*		> 学习目标：
*			- 掌握常用的排序算法
*		> 算法简介：
*			- sort										// 对容器内元素进行排序
*			- random_shuffle							// 洗牌 指定范围内的元素随机调整次序
*			- merge										// 容器元素合并，并存储到另一容器中
*			- reverse									// 反转指定范围的元素
*		> sort
*			- 功能描述：
*				. 对容器内元素进行排序
*			- 函数原型：
*				. sort(iterator beg, iterator end, _Pred);
*					// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
*					// beg 开始迭代器
*					// end 结束迭代器
*					// _Pred 谓词
*		> random_shuffle
*			- 功能描述：
*				. 洗牌 指定范围内的元素随机调整次序
*			- 函数原型：
*				. random_shuffle(iterator beg, iterator end);
*					// 指定范围内的元素随机调整次序
*					// beg 开始迭代器
*					// end 结束迭代器
*		> merge
*			- 功能描述：
*				. 两个容器元素合并，并存储到另一容器中
*			- 函数原型：
*				. merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*					// 容器元素合并，并存储到另一容器中
*					// 注意: 两个容器必须是有序的
*					// beg1 容器1开始迭代器 // end1 容器1结束迭代器 // beg2 容器2开始迭代器 // end2 容器2结束迭代器 // dest 目标容器开始迭代器
*		> reverse
*			- 功能描述：
*				. 将容器内元素进行反转
*			- 函数原型：
*				. reverse(iterator beg, iterator end);
*					// 反转指定范围的元素
*					// beg 开始迭代器
*					// end 结束迭代器
*	@ 常用拷贝和替换算法
*		> 学习目标：
*			- 掌握常用的拷贝和替换算法
*		> 算法简介：
*			- copy											// 容器内指定范围的元素拷贝到另一容器中
*			- replace										// 将容器内指定范围的旧元素修改为新元素
*			- replace_if									// 容器内指定范围满足条件的元素替换为新元素
*			- swap											// 互换两个容器的元素
*		> copy
*			- 功能描述：
*				. 容器内指定范围的元素拷贝到另一容器中
*			- 函数原型：
*				.copy(iterator beg, iterator end, iterator dest);
*					// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
*					// beg 开始迭代器
*					// end 结束迭代器
*					// dest 目标起始迭代器
*			! 利用copy算法在拷贝时，目标容器记得提前开辟空间
*		> replace
*			- 功能描述：
*				. 将容器内指定范围的旧元素修改为新元素
*			- 函数原型：
*				. replace(iterator beg, iterator end, oldvalue, newvalue);
*					// 将区间内旧元素 替换成 新元素
*					// beg 开始迭代器
*					// end 结束迭代器
*					// oldvalue 旧元素
*					// newvalue 新元素
*		> replace_if
*			- 功能描述:
*				. 将区间内满足条件的元素，替换成指定元素
*			- 函数原型：
*				. replace_if(iterator beg, iterator end, _pred, newvalue);
*					// 按条件替换元素，满足条件的替换成指定元素
*					// beg 开始迭代器
*					// end 结束迭代器
*					// _pred 谓词
*					// newvalue 替换的新元素
*		> swap
*			- 功能描述：
*				. 互换两个容器的元素
*			- 函数原型：
*				. swap(container c1, container c2);
*					// 互换两个容器的元素
*					// c1容器1
*					// c2容器2
*	@ 常用算术生成算法
*		> 学习目标：
*			- 掌握常用的算术生成算法
*		! 注意：
*			- 算术生成算法属于小型算法，使用时包含的头文件为 #include <numeric>
*		> 算法简介：
*			- accumulate									// 计算容器元素累计总和
*			- fill											// 向容器中添加元素
*		> accumulate
*			- 功能描述：
*				. 计算区间内 容器元素累计总和
*			- 函数原型：
*				. accumulate(iterator beg, iterator end, value);
*					// 计算容器元素累计总和
*					// beg 开始迭代器
*					// end 结束迭代器
*					// value 起始值
*			! accumulate使用时头文件注意是 numeric，这个算法很实用
*		> fill
*			- 功能描述：
*				. 向容器中填充指定的元素
*			- 函数原型：
*				. fill(iterator beg, iterator end, value);
*					// 向容器中填充元素
*					// beg 开始迭代器
*					// end 结束迭代器
*					// value 填充的值
*			! 利用fill可以将容器区间内元素填充为 指定的值
*	@ 常用集合算法
*		> 学习目标：
*			- 掌握常用的集合算法
*		> 算法简介：
*			- set_intersection								// 求两个容器的交集
*			- set_union										// 求两个容器的并集
*			- set_difference								// 求两个容器的差集
*		> set_intersection
*			- 功能描述：
*				. 求两个容器的交集
*			- 函数原型：
*				. set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*					// 求两个集合的交集
*					// 注意:两个集合必须是有序序列
*					// beg1 容器1开始迭代器 // end1 容器1结束迭代器 // beg2 容器2开始迭代器 // end2 容器2结束迭代器 // dest 目标容器开始迭代器
*			! 总结：
*				. 求交集的两个集合必须的有序序列
*				. 目标容器开辟空间需要从两个容器中取小值
*				. set_intersection返回值既是交集中最后一个元素的位置
*		> set_union
*			- 功能描述：
*				. 求两个集合的并集
*			- 函数原型：
*				. set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*					// 求两个集合的并集
*					// 注意:两个集合必须是有序序列
*					// beg1 容器1开始迭代器 // end1 容器1结束迭代器 // beg2 容器2开始迭代器 // end2 容器2结束迭代器 // dest 目标容器开始迭代器
*			! 总结：
*				. 求并集的两个集合必须的有序序列
*				. 目标容器开辟空间需要两个容器相加
*				. set_union返回值既是并集中最后一个元素的位置
*		> set_difference
*			- 功能描述：
*				. 求两个集合的差集
*			- 函数原型：
*				. set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*					// 求两个集合的差集
*					// 注意:两个集合必须是有序序列
*					// beg1 容器1开始迭代器 // end1 容器1结束迭代器 // beg2 容器2开始迭代器 // end2 容器2结束迭代器 // dest 目标容器开始迭代器
*			! 总结：
*				. 求差集的两个集合必须的有序序列
*				. 目标容器开辟空间需要从两个容器取较大值
*				. set_difference返回值既是差集中最后一个元素的位置
*/

#include <iostream> 
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

// 遍历算法 for_each
/*

// 普通函数
void print01(int val)
{
	cout << val << ' ';
}

// 仿函数
class Print02
{
public:
	void operator()(int val)
	{
		cout << val << ' ';
	}
};

// 遍历算法 for_each
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

// 遍历算法 transform
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

	vector<int> v2;			// 目标容器
	v2.resize(v1.size());	// 目标容器需要提前开辟空间
	transform(v1.begin(), v1.end(), v2.begin(), Transform());

	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;
}
*/

// 查找算法 find
/*
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	// 需要重载 == ，让底层的find知道如何去对比数据
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

	// 查找容器中是否有5
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

// 查找算法 find_if
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

// 查找算法 adjacent_find
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
		cout << "找到了重复元素为：" << *it << endl;
	}
}
*/

// 算术 accumulate
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

// 集合算法 set_intersection

int main(void)
{
	cout << "wocao" << endl;

	// test01();

	return 0;
}