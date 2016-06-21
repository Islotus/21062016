 ///
 /// @file    iterat_invalidation.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-21 20:08:41
 ///

//迭代器失效  iterator invalidation

#include <iostream>
#include <vector>
#include <string>
#if 0
using std::cin;
using std::cout;
using std::endl;
#endif
//using namespace std;
int main()
{
	std::vector<std::string> vcs;
	vcs.push_back("this is A");
	std::vector<std::string>::iterator it = vcs.begin();
	int i = 9;
	for(; it != vcs.end(); ++it)
	{
		std::cout << "caplity of vector is: " << vcs.size() << std::endl;
		std::cout << "--->" << *it << std::endl;  //直接coredump
		if(i == 9)
		{
			vcs.push_back("this is BBBB");  //容器扩容时，是复制拷贝。先找适合大小的空间，然后把当前容器内容
											//拷贝过去，然后释放当前容器内存
			std::cout << "vcs.push! " << std::endl;
//			it = vcs.begin();  //重新给迭代器赋新容器的头，就不会出错了。
		}
		i = 8;
	}
	return 0;
}
 
