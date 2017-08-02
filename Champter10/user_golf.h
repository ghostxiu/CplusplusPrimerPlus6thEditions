#include "golf.h"
#include "cstring"
#include<iostream>

Golf::Golf(const char *name ,int hc)
{
	strcpy(fullname,name);
	handicap = hc ;
}

int Golf::setGolf()
{
	if(strlen(this->fullname) == 0)
	{
		return 0 ;
	}
	return 1 ;
}

void Golf::Handicap(int hc )
{
	//增杆
    handicap += hc ;
}

void Golf::showGolf() const
{
	std::cout << "name: " << this->fullname <<" , ";
	std::cout << "handicap: " << this->handicap << std::endl;
}

int Golf::Score()
{
	return this->handicap;
}
