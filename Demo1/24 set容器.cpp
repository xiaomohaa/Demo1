//
///*	set/ multiset 容器
//*	@ set 基本概念
//*		> 简介
//*			- 所有元素都会在插入时自动被排序
//*		> 本质
//*			- set/multiset属于关联式容器，底层结构是用二叉树实现。
//*		> set 和 multiset 区别
//*			- set 不允许容器中有重复的元素
//*			- multiset 允许容器中有重复的元素
//*	@ set 构造和赋值
//*		> 功能描述
//*			- 创建set容器以及赋值
//*		> 构造
//*			- set<T> st;						// 默认构造函数
//*			- set(const set &st);				// 拷贝构造函数
//*		> 赋值
//*			- set& operator=(const set &st);	// 重载等号操作符
//*		! set 容器插入数据时用insert
//*	@ set 大小和交换
//*		> 功能描述
//*			- 统计set容器大小以及交换set容器
//*		> 函数原型
//*			- size();							// 返回容器中元素的数目
//*			- empty();							// 判断容器是否为空
//*			- swap(st);							// 交换两个集合容器
//*	@ set 插入和删除
//*		> 功能描述
//*			- set 容器进行插入数据和删除数据
//*		> 函数原型
//*			- insert(elem);						// 在容器中插入元素。
//*			- clear();							// 清除所有元素
//*			- erase(pos);						// 删除pos迭代器所指的元素，返回下一个元素的迭代器。
//*			- erase(beg, end);					// 删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
//*			- erase(elem);						// 删除容器中值为elem的元素。
//*		! 总结
//*			- 插入 --- insert
//*			- 删除 --- erase
//*			- 清空 --- clear
//*	@ set 查找和统计
//*		> 功能描述
//*			- 对set容器进行查找数据以及统计数据
//*		> 函数原型
//*			- find(key);						// 查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//*			- count(key);						// 统计key的元素个数（对于set，结果为0或者1）
//*	@ set 和 multiset 区别
//*		> 学习目标
//*			- 掌握set和multiset的区别
//*		> 区别
//*			- set 不可以插入重复数据，而 multiset 可以
//*			- set 插入数据的同时会返回插入结果，表示插入是否成功
//*			- multiset 不会检测数据，因此可以插入重复数据
//*	@ pair 对组创建
//*		> 功能描述：
//*			- 成对出现的数据，利用对组可以返回两个数据
//*	@ 两种创建方式
//*			- pair<type, type> p ( value1, value2 );
//*			- pair<type, type> p = make_pair( value1, value2 );
//*	@ set 容器排序
//*		> 学习目标
//*			- set容器默认排序规则为从小到大，掌握如何改变排序规则
//*		> 主要技术点
//*			- 利用仿函数，可以改变排序规则
//*/
//
//
//#include <iostream>
//#include <set>
//
//using namespace std;
//
//
//void test01()
//{
//
//}
//
//
//int main(void)
//{
//	cout << "wocao" << endl;
//
//	test01();
//
//	return 0;
//}