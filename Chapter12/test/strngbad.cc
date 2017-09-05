#include<cstring>
#include "strngbad.h"
using std::cout;

int StringBad::num_strings = 0 ;

StringBad::StringBad(const char * s )
{
	len = std::strlen(s);
	str = new char[len + 1];
	std:strcpy(str,s);
	num_strings++;
	cout << num_strings << ": \""<< str
		 <<"\" object created.\n";
}
StringBad::StringBad()
{
	len = 4 ;
	str = new char[len + 1];
	std::strcpy(str,"C++");
	num_strings++;
	cout << num_strings << ": \""<< str
		 <<"\" object created.\n";
}
StringBad::~StringBad()
{
	cout << num_strings << ": \""<< str
		 <<"\" object deleted.\n";
	--num_strings;
	cout << num_strings << " left.\n";
	delete [] str;
}
std::ostream & operator<<(std::ostream &os ,const StringBad &st)
{
	os <<st.str ;
	return os ;
}
//复制构造函数（深度复制）
StringBad::StringBad(const StringBad &st )
{
	len = st.len; //same length
	str = new char[len + 1];
	std:strcpy(str,st.str);
	num_strings++;
	cout << num_strings << ": \""<< str
		 <<"\" object created.\n";
}
