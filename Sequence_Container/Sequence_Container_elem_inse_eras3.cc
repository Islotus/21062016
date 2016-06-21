 ///
 /// @file    Sequence_Container_elem_inse_eras3.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-21 19:54:30
 ///

//序列式容器中元素的插入和删除 Sequence Container
//获取容器头部和尾部元素（list、deque和vector都适用）
//front(void)和back(void)

#include <iostream>
#include <list>
#include <vector>
#include <deque>

using std::cin;
using std::endl;
using std::cout;
using std::vector;
using std::list;
using std::deque;

int main()
{
	double arr[5] = {1, 2, 3, 4, 5};
	deque<double> deD(arr, arr+5);

	double dFront = deD.front();  //读取最前端元素的值
	double dBack = deD.back();  //读取最末端元素的值

	cout << "dFront = " << dFront << endl;
	cout << "dBack = " << dBack << endl;

	return 0;
}
 
