#ifndef STRING2_H_
//Changed by Ghostxiu 2017/9/13
//升级课本的string1.h
#define STRING2_H_
#include<iostream>
class String
{
private:
	char *str ;
	int len ;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String(const char * s );
	String();
	~String();
	String(const String & st);//显式的复制构造函数
	int length() const {return len;}
	//如果类中包含静态数据成员如num_strings
	//他的值再新对象被创建时发生变化
	//应该提供一个显式的构造函数
	//重载
	//重载赋值运算符
	String & operator=( const String &) ;
	String & operator=( const char *) ;
	//重载索引
	char & operator[](int i );
	const char & operator[](int i) const;

	//友元函数重载运算符
	friend std::ostream & operator<<(std::ostream & os ,const String & st);
	friend std::istream & operator>>(std::istream & is , String &st);
	friend bool operator>(const String & st1 , const String & st2) ;
	friend bool operator<(const String & st1 , const String & st2);
	friend bool operator==(const String & st1 , const String & st2);
	//静态类函数,注意他的调用方法
	static int Howmany();
	//大写转小写
	void Stringlow();
	//小写转大写
	void Stringbig();
	//统计某个字符在字符串中的出现次数
	int Chartimes(const char & c);
	friend String operator+(const String & s1,const String & s2);//重载+运算符，连接两个字符串
};
#endif // STRNG_H_
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/
