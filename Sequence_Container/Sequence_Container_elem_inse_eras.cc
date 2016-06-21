 ///
 /// @file    Sequence_Container_elem_inse_eras.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-21 19:05:39
 ///

//序列式容器中元素的插入和删除 Sequence Container
//在容器尾部进行插入和删除（list,deque和vector都适用）
//void push_back(t)和void pop_back(void)

#include <iostream>
#include <vector>
#include <deque>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::deque;
using std::list;

int main()
{
	//0.定义vector容器
	vector<int>::iterator it;  //定义迭代器
	vector<int> obV(3, 1);  //创建一个vector类对象，包含3个int型元素，每个都为1
	//list<int>::iterator it;
	//list<int> obL(3, 1);
	//deque<int>::iterator it;
	//deque<int> obD(3, 1);
	
	cout << "容器中原先的值为：" << endl;
	it = obV.begin();
	while(it !=obV.end())
	{
		cout << (*it) << " "; 
		++it;
	}
	cout << endl;
	
	//1.在尾部插入元素
	cout << "容器尾部插入后值为：" << endl;
	obV.push_back(2);  //将int型数据安插在容器对象obV末尾

	//2.输出，看是否安插成功
	it = obV.begin();
	while(it !=obV.end())
	{
		cout << (*it) << " ";  //output,看是否安插成功
		++it;
	}
	cout << endl;

	//3.从尾部弹出元素
	obV.pop_back();  //将最后一个元素弹出

	//4.输出，看是否弹出成功
	it = obV.begin();
	while(it != obV.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	return 0;
}
 
