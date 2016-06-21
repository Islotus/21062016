 ///
 /// @file    Sequence_Container_elem_inse_eras4.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-21 21:44:17
 ///

//序列式容器中元素的插入和删除 Sequence Container 

//在容器中间插入元素，有如下3种重载形式：

//>将元素t插到p之前，返回的迭代器指向被插入的元素  //在迭代器指针it前插入元素x,返回x迭代器指针
//iterator insert(iterator p, elemType t)
//>在p之前插入n个t，无返回值
//void insert(iterator p, int n, elemType t)
//>在p之前插入[first, last)之间的所有元素
//void insert(iterator p, iterator first, iterator last)

#include <iostream>
#include <vector>
#include <list>
#include <deque>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::deque;

void disp(vector<int>& x)  //定义disp函数用以输出容器对象所有元素
{
	vector<int>::iterator it = x.begin();
	while(it != x.end())
	{
		cout << *it << " ";
		++it;
	}
}

int main()
{
	//1.创建一个vector<int>容器对象
	vector<int> veI(5,0);
	vector<int>::iterator iter = veI.begin();
	while( iter != veI.end() )
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;

	//2.insert()的重载形式
	iter = veI.end();  //创建迭代器iter
	cout << "*iter = " << *iter << endl;  //一开始的iter = veI.end()指向容器最后元素的下一位
	iter = veI.insert(iter, 1);  //在尾部插入元素，并使迭代器指向新插入的元素
	cout << "*iter = " << *iter << endl;
	disp(veI);
	cout << endl;
	
	iter = veI.insert(iter, 2);  //在iter之前插入元素，并返回指向插入元素的迭代器指针，故，需要一个输出函数来输出容器中的内容
	cout << "*iter = " << *iter << endl;
	disp(veI);
	cout << endl;

	//3.insert()的重载形式
	veI.insert(iter, 2, 3);  //在新插入的元素之前插入两个元素，无返回值
	disp(veI);
	cout << endl;

	//4.insert()的重载形式
	iter = veI.begin();  //很重要，插入后，原来的迭代器可能失效，由于容器的扩容导致的
	int arr[3] = {7, 8, 9};
	veI.insert(iter, arr, arr+3);
	disp(veI);  //故需要一个输出函数来输出容器中的内容
	cout << endl;
	
	//5.上述的插入操作对list，vector，deque三种Sequence Container序列容器都适用，可自测
	return 0;
}
