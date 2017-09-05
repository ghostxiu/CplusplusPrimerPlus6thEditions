#ifndef STRNGBAD_H_
#define STRNGBAD_H_
#include<iostream>
class StringBad
{
private:
	char *str ;
	int len ;
	static int num_strings;
public:
	StringBad(const char * s );
	StringBad();
	~StringBad();
	friend std::ostream & operator<<(std::ostream &os ,const StringBad &st);
	//如果类中包含静态数据成员如num_strings
	//他的值再新对象被创建时发生变化
	//应该提供一个显式的构造函数
	StringBad(const StringBad & st);//显式的复制构造函数
};
#endif // STRNGBAD_H_
