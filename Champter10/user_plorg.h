#include "plorg.h"
#include<iostream>
#include <cstring>
plorg::plorg(char * tag)
{
	CI = 50;
	//name = tag ;
	strcpy(name,tag);
}

bool plorg::reset(int & p)
{
	int k = CI;
	CI = p;
	if(CI > 0 )
	{
		return true;
	}
	else
	{
		CI = k;
	}
	return false;
}

void plorg::show() const
{
	std::cout << "\n\n\nNow show the Plorg things:\n";
	std::cout << "Name : " << name << " , CI = " << CI <<" .\n";
}
