 ///
 /// @file    Sequence_Container_elem_inse_eras2.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-21 19:29:14
 ///

//序列式容器中元素的插入和删除 Sequence Container 
//在容器头部进行插入和删除（list和deque适用，vector不适用）
//void push_front(t)和void pop_front(void)

#include <iostream>
#include <list>
#include <deque>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::deque;
using std::vector;

int main()
{
#if 1
	//0.定义vector容器
	vector<int>::iterator iter;
	int arr[5] = {1, 2, 3, 4, 5};
	vector<int> obV(arr, arr+5);  //创建一个list对象，包含5个int型元素

	iter = obV.begin();
	while(iter != obV.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;

	//1.在容器头部插入元素
	obV.push_front(9);  //将int型数据安插在容器对象obL头部

	//2.输出处理，看是否安插成功
	iter = obV.begin();
	while(iter != obV.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;

	//3.从容器头部删除元素
	obV.pop_front();

	//4.输出处理，看是否弹出成功
	iter = obV.begin();
	while(iter != obV.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;
#endif
#if 0
	//0.定义deque容器
	deque<int>::iterator iter;
	int arr[5] = {1, 2, 3, 4, 5};
	deque<int> obD(arr, arr+5);  //创建一个list对象，包含5个int型元素

	iter = obD.begin();
	while(iter != obD.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;

	//1.在容器头部插入元素
	obD.push_front(9);  //将int型数据安插在容器对象obL头部

	//2.输出处理，看是否安插成功
	iter = obD.begin();
	while(iter != obD.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;

	//3.从容器头部删除元素
	obD.pop_front();

	//4.输出处理，看是否弹出成功
	iter = obD.begin();
	while(iter != obD.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;
#endif
#if 0
	//0.定义list容器
	list<int>::iterator iter;
	int arr[5] = {1, 2, 3, 4, 5};
	list<int> obL(arr, arr+5);  //创建一个list对象，包含5个int型元素

	iter = obL.begin();
	while(iter != obL.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;

	//1.在容器头部插入元素
	obL.push_front(9);  //将int型数据安插在容器对象obL头部

	//2.输出处理，看是否安插成功
	iter = obL.begin();
	while(iter != obL.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;

	//3.从容器头部删除元素
	obL.pop_front();

	//4.输出处理，看是否弹出成功
	iter = obL.begin();
	while(iter != obL.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;
#endif
	
	//5.将定义的list容器分别改成vector和deque容器，重新测试以上代码
	//测试结果表明push_front()和pop_front()只适合list和deque，不适合vector,它会显示、error：
	//'class st::vector<int>' has no member named 'push_front'
	
	return 0;
}

 
