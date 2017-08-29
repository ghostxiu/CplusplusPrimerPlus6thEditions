#include "ilist.h"
#include <iostream>
ilist::ilist(const int &M )
{
	//类构造函数，通过M确定ilist最大元素个数，并开辟空间
	Len = M;
	//类中的动态数组可以先定义，后面再写具体实现
	member = new typex[M];
	Tag = 0 ;
}

//判断列表是否为空
bool ilist::isEmpty()
{
	if(Tag == 0)
	{
		std::cout << "List is empty.\n";
		return true;
	}
	return false;

}

//判断是否为满
bool ilist::isFull()
{
	if(Tag == Len )
	{
		return true;
		std::cout << "List is full.\n";
	}
	return false;
}

//添加成员
void ilist::add_mem(const typex & t)
{
    member[Tag++] = t ;
}

//析构函数
ilist::~ilist()
{
	delete member;
	std::cout << "Memory is freeing!\n";
}


//公有接口，访问数据项并执行其他操作
void ilist::visit(void (*pf)(typex & t))
{
	for (int i = 0 ; i < Tag ; ++i)
	{
		pf(member[i]);
	}
}

void show(typex &t)
{
	std::cout << t <<' ';
}

void modify(typex &t)
{
	std::cout << "Please enter a typex to replace:";
	typex x ;
	std::cin >> x ;
	if(t == x )
	{
		std::cout << "Matching!\n";
	}
	else
	{
		std::cout << "Do not maching ,Changing!\n";
		t = x ;
	}


}
