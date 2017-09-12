//Changed by Ghostxiu 2017/9/12
#include "cow.h"

#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
Cow::Cow()
{
	name[0] = '\0';
	hobby = nullptr;

}
Cow::Cow(const char *nm , const char * ho , double wt)
{
	weight = wt ;

	int len = strlen(ho);
	hobby = new char[len];
	strcpy(name,nm);
	strcpy(hobby,ho);
}

Cow::Cow(const Cow & c)
{
	delete [] hobby ;
	int len = strlen(c.hobby);
	hobby = new char[len];
	std::strcpy(hobby,c.hobby);
	std::strcpy(name,c.name);
	weight = c.weight;
}

Cow::~Cow()
{
	delete [] hobby ;
	cout << "Object deleted!" <<  endl ;
}
Cow & Cow::operator = (const Cow & c)
{
	delete [] hobby ;
	int len = strlen(c.hobby);
	hobby = new char[len];
	std::strcpy(hobby,c.hobby);
	std::strcpy(name,c.name);
	weight = c.weight;
	return *this;
}
void Cow::ShowCow() const
{
	cout << "Cow's name : " << name
		<<", hobby : " << hobby << endl
		<< "and hobby's weight is : " << weight <<endl;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/
