 ///
 /// @file    Sequence_Container_elem_inse_eras6.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-21 23:01:13
 ///

//序列式容器中元素的删除 sequence container
//std::list还有一种删除方法：成员函数remove/remove_if

#include <iostream>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::list;

void disp(list<int>& x)
{
	list<int>::iterator iter = x.begin();
	for(; iter != x.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;
}

int main()
{
	list<int> liI = {1, 100, 2, 3, 10, 1, 11, -1, 12};
	disp(liI);
	liI.remove(1);  //删除容器中元素值为1的所有元素
	disp(liI);

	liI.remove_if([](int n){ return n > 10;});
	for(int n : liI)
	{
		cout << n << " ";
	}
	cout << endl;

	return 0;
}

