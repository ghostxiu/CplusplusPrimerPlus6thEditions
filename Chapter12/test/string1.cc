#include<cstring>
#include "string1.h"
using std::cout;
using std::cin;
int String::num_strings = 0 ;

int String::Howmany()
{
	return num_strings;
	//调用的时候要使用String::Howmany
	//而不能使用对象来调用
}

String::String(const char * s )
{
	len = std::strlen(s);
	str = new char[len + 1];
	std:strcpy(str,s);
	num_strings++;
	//cout << num_strings << ": \""<< str
	//	 <<"\" object created.\n";
}
String::String()
{
	len = 0 ;
	str = new char[1];
	//这样写和类析构函数兼容，而不是new char
	std::strcpy(str,"\0");
	num_strings++;
}
String::~String()
{
	//cout << num_strings << ": \""<< str
		 //<<"\" object deleted.\n";
	--num_strings;
	//cout << num_strings << " left.\n";
	delete [] str;
}

//复制构造函数（深度复制）
String::String(const String &st )
{
	len = st.len; //same length
	str = new char[len + 1];
	std:strcpy(str,st.str);
	num_strings++;
	//cout << num_strings << ": \""<< str
		// <<"\" object created.\n";
}

//重载赋值运算符,解决隐式赋值数据受损
String & String::operator=( const String & st)
{
	if(this == & st)
	{
		return *this ;
	}
	delete [] str ;
	len = st.len;
	str = new char[len+1];
	std:strcpy(str,st.str);
	return *this;
}

String & String::operator=( const char *c)
{
	delete [] str ;
	len = std::strlen(c);
	str = new char[len + 1];
	std:strcpy(str,c);
	return *this ;
}


//重载索引
char & String::operator[](int i )
{
	return str[i];
}
//索引的只读形式,使用此形式不能改变赋值的值
const char & String::operator[](int i) const
{
	return str[i];
}

//友元函数重载运算符

std::ostream & operator<<(std::ostream &os ,const String &st)
{
	os <<st.str ;
	return os ;
}

std::istream & operator>>(std::istream & is ,String &st)
{
	char temp[String::CINLIM];
	is.get(temp,String::CINLIM);
	if(is)
	{
		st = temp ;
	}
	while(is && is.get() != '\n')
	{
		continue;
	}
	return is ;

}

bool operator>(const String & st1 , const String & st2)
{
	return (std::strcmp(st1.str,st2.str) < 0);
	//当字符串1中的字母表顺序在第一个之前，则返回一个负值
	//两个字符串相同，返回0
	//第二个参数在第一个参数之后，返回一个正值
}
bool operator<(const String & st1 , const String & st2)
{
	return st2 > st1 ;
}

bool operator==(const String & st1 , const String & st2)
{
	return (std::strcmp(st1.str,st2.str) == 0);
}

