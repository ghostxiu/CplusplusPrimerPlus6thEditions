//Changed by Ghostxiu 2017/9/17

#include <iostream>
#include "stack0.h"
#include <cstring>
Stack::Stack(int n )
{
	size = n ;
	pitems = new Item[size];
	top = 0 ;
}


//复制构造函数
Stack::Stack(const Stack & st)
{
	size = st.size;
	pitems = new Item[size];
	std::memcpy(pitems,st.pitems,st.size * sizeof(Item));
	top = st.top ;
}

Stack::~Stack()
{
	delete [] pitems;
}

bool Stack::isempty()
{
	return (top == 0);
}
bool Stack::isfull()
{
	return (top == size) ;
}
bool Stack::push(const Item & item)
{
	if(top < size)
	{
		pitems[top++] = item ;
		return true ;
	}
	else
	{
		return false;
	}
}

bool Stack::pop(Item & item)
{
	if(top > 0 )
	{
		item = pitems[--top];
		return true;
	}
	else
	{
		return false;
	}
}

Stack & Stack::operator=(const Stack & st)
{
	if(this == &st)
	{
		return *this;
	}

	delete [] pitems ;
	size = st.size ;
	pitems = new Item[size];
	int i = 0 ;
	while(st.top - i != 0)
	{
		pop(st.pitems[i]);
	}

	return *this ;

}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/
