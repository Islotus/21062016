 ///
 /// @file    Sequence_Container_create_access.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-21 14:11:53
 ///

//序列式容器的创建和元素的访问
//Sequence-Container 序列式容器

#include <iostream>
#include <vector>
#include <list>
#include <deque>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::deque;
using std::list;

#define UNIT unsigned int

int main()
{
	//1.创建vector容器
	vector<int> obV;  //创建一个空的vector
	cout << "obV的元素个数为：" << obV.size() << endl << endl;  //size()用来返回元素的个数

	//2.创建deque容器
	double arr[5] = {1, 2, 3, 4, 5};  //创建double型数组arr
	deque<double> obD(arr, arr+5);  //创建deque型容器obD,并用sz的首地址和末地址为其初始化，

	//2.1使用下标[]访问deque容器的元素
	for(UNIT i = 0; i < obD.size(); ++i)  //对obD中的元素进行随机访问，下标表示法
	{
		cout << obD[i] << " ";
	}
	cout << endl;

	//2.2使用迭代器访问deque容器的元素
	deque<double>::iterator itd = obD.end();
	while(itd != obD.begin())
	{
		--itd;  //注意，obD.end()指向的是最后一个元素的下一个迭代器
		cout << (*itd) << " ";
	}
	cout << endl << endl;

	//3.创建list容器
	list<float> obL(3, 5);  //创建一个大小为list型容器obL，其中每个元素都初始化为5

	//3.1 list不支持下标访问
	//obL[0] = 3;      //Error,list不支持下标访问
	
	//3.2使用迭代器访问list容器的元素
	list<float>::iterator itLf = obL.begin();  //创建list<float>型迭代器，类似指针的概念，并使其指向obL的第一个元素
	while(itLf != obL.end())
	{
		(*itLf) += 2;
		cout << (*itLf) << " ";  //通过迭代器间接访问容器中的元素，和指针相似
		++itLf;  //链表类型的迭代器，元素类型为float型
	}
	cout << endl;

	//3.3在创建一个list容器obL2，将其内容与obL的内容进行交换
	list<float> obL2(4, 9);
	obL.swap(obL2);  //交换obL和obL2里面的内容，相当于交换指针

	//3.4重新输出obL中的内容
	for(itLf = obL.begin(); itLf != obL.end(); ++itLf)
	{
		cout << *itLf << " ";
	}
	cout << endl << endl;


	return 0;
}
 
