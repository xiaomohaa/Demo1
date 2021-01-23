
/*	map/multimap 容器
*	@ map 基本概念
*		> 简介：
*			- map 中所有元素都是pair
*			- pair中第一个元素为key（键值），起到索引作用，第二个元素为value（实值）
*			- 所有元素都会根据元素的键值自动排序
*		> 本质：
*			- map/multimap属于关联式容器，底层结构是用二叉树实现。
*		> 优点：
*			- 可以根据key值快速找到value值
*		> map和multimap区别：
*			- map 不允许容器中有重复key值元素
*			- multimap 允许容器中有重复key值元素
*	@ map 构造和赋值
*		> 功能描述：
*			- 对map容器进行构造和赋值操作
*		> 函数原型：
*		构造：
*			- map<T1, T2> mp;						// map默认构造函数:
*			- map(const map &mp);					// 拷贝构造函数
*		赋值：
*			- map& operator=(const map &mp);		// 重载等号操作符
*		! map 中所有元素都是成对出现，插入数据时候要使用对组
*	 @ map 大小和交换
*		> 功能描述：
*			- 统计map容器大小以及交换map容器
*		> 函数原型：
*			- size();								// 返回容器中元素的数目
*			- empty();								// 判断容器是否为空
*			- swap(st);								// 交换两个集合容器
*	@ map 插入和删除
*		> 功能描述：
*			- map 容器进行插入数据和删除数据
*		> 函数原型：
*			- insert(elem);							// 在容器中插入元素。
*			- clear();								// 清除所有元素
*			- erase(pos);							// 删除pos迭代器所指的元素，返回下一个元素的迭代器。
*			- erase(beg, end);						// 删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
*			- erase(key);							// 删除容器中值为key的元素。
*	@  map 查找和统计
*		> 功能描述：
*			- 对map容器进行查找数据以及统计数据
*		> 函数原型：
*			- find(key);							// 查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
*			- count(key);							// 统计key的元素个数
*	@ map 容器排序
*		> 学习目标：
*			- map 容器默认排序规则为 按照key值进行 从小到大排序，掌握如何改变排序规则
*		>主要技术点:
*			- 利用仿函数，可以改变排序规则
*		! 总结：
*			- 利用仿函数可以指定map容器的排序规则
*			- 对于自定义数据类型，map必须要指定排序规则,同set容器
*/


#include <iostream>
#include <map>

using namespace std;

void test01(void)
{

}

int main(void)
{
	cout << "wocao" << endl;

	test01();

	return 0;
}