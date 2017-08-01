#include <iostream>
#include <cstring>
class Person{
private:
	static const int LIMIT = 25 ;
	std::string lname ; //Person's lastname
	char  fname[LIMIT];// Person's first name
public:
	Person(){lname ="";fname[0] = '\0';}//#1
	Person(const std::string & ln , const char * fn = "Heyyou")//#2
	{
		lname = ln ;
		strcpy(fname,fn);
		//注意char[] 是一个数组 而 char * 是一个指针，不能直接赋值
	}
	//注意方法包含默认参数
	//the following methods display lnmae and fname
	void Show() const; //first name last name format
	void FormalShow() const; //last name , first name format
};
//构造函数重载
