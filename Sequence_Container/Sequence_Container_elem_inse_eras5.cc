 ///
 /// @file    Sequence_Container_elem_inse_eras5.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-21 22:34:20
 ///

//序列式容器中元素的删除  sequence container 

//erase 删除操作，有2种重载形式：
//>删除迭代器p所指向的元素，返回p指向的下一个迭代器
//iterator erase(iterator p)

//>删除[firse, lase)之间的所有元素，返回last指向的下一个迭代器
//iterator erase(iterator first, iterator last);

//clear操作：用于将容器对象清空
//void clear(void)

//对于 std::list 还有一种删除方法：成员函数remove/remove_if

//删除容器中间的元素

#include <iostream>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::list;


void disp(list<int>& x)  //定义disp函数用以输出容器对象所有元素
{
	list<int>::iterator it = x.begin();
	while(it != x.end())  //list不支持下标随机访问
	{
		cout << *it << " ";
		++it;
	}
}

int main()
{
	//1.创建容器
	int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> liI(arr, arr+9);  //使用两个迭代器（指针）创建list<int>对象
	disp(liI);
	cout << endl;

	//2.erase重载版本
	list<int>::iterator iter = liI.begin();  //创建迭代器iter,指向最前端元素
	++iter;  //指向第二个元素	
	iter = liI.erase(iter);  //将第二个元素抹掉，并用指向第三个元素的迭代器为iter赋值
	disp(liI);
	cout << endl;

	//3.erase重载版本
	liI.erase(iter,liI.end());  //将第2个元素直到最后一个元素都抹掉
	disp(liI);
	cout << endl;

	//4.clear
	int arr1[3] = {5, 5, 5};
	iter = liI.end();  //重新生成迭代器（指针的值），因为上一句erase执行结束后，返回的是last指向的下一个位置（迭代器）

	liI.insert(iter, arr1, arr1+3);
	disp(liI);
	liI.clear();
	cout << "clear()后容器的元素个数为：" << liI.size() << endl;

	return 0;
}
 
