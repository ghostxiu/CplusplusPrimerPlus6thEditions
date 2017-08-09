#include "customer.h"


Stack::Stack()
{
	top = 0 ;
}

bool Stack::pop(CR & cr)
{
	std:: cout << "top = " << top << std::endl;
	if(top == 0)
	{
		return false ;
	}
	else
	{
		cr = client[top--] ;
		return true ;
	}
}

bool Stack::push(const CR &cr)
{
	std:: cout << "top = " << top <<std:: endl;
	if(top < Max)
	{
		client[top++] = cr ;
		return true ;
	}
	else
	{
		return false ;
	}
}

bool Stack::isempty() const
{
	if(top == 0)
	{
		return true;
	}
	else
	{
		return false ;
	}
}

bool Stack::isfull() const
{
	if(top == Max)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Stack::~Stack()
{
	delete [] client ;
	std::cout << "Memnory is free!\n";
}
