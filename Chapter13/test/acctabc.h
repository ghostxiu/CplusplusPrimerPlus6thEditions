//Changed by Ghostxiu 2017/9/19
//原书程序清单13.11内容
//修改自brass.h
#ifndef ACCTABC_H_
#define ACCTABC_H_
#include<string>
#include<iostream>
using std::string ;
//抽象基类 AcctABC
class AcctABC{
private:
	string fullname;
	long accNum;
	double balance;
protected:
	//使用保护类型，使派生类可以使用
	struct Formatting
	{
		std::ios_base::fmtflags flag ;
		std::streamsize pr ;
	};
	const string & Fullname() const { return fullname ;}
	long AccNum () const { return accNum ; }
	Formatting SetFormat() const ;
	void Restore(Formatting & f) const ;
public:
	AcctABC(const string & s = "Noboddy" ,long an = -1 , double bal = 0.0);
	void Deposit(double amt) ;
	//保证类为抽象类必须有一个纯虚函数，且纯虚函数可以没有定义
	virtual void WithDraw(double amt) = 0 ;//纯虚函数
	double Balance() const { return balance ;}
	virtual void ViewAcct() const  = 0;
	virtual ~AcctABC(){}//基类一般使用虚析构函数
};

//派生类Brass
class Brass : public AcctABC {
public:
	Brass(const string & fl = "nobody" , long an = -1 ,
		double bal = 0.0 ):AcctABC(fl,an,bal){}
		//注意使用构造函数初始化值的时候要在定义时使用而不是声明时
	virtual void WithDraw(double amt);
	virtual void ViewAcct() const ;
	virtual ~Brass() {}

};


//派生类BrassPlus
class BrassPlus : public AcctABC
{
private:
	double maxLoan ;
	double rate;
	double owesBank ;
public:
	BrassPlus(const string & fl = "nobody" , long an = -1 ,
			double bal = 0.0 , double ml = 500 , double r = 0.10  );
	BrassPlus(const Brass & ba , double ml = 500 , double r = 0.10);
	virtual void ViewAcct() const ;
	virtual void WithDraw(double wt);
	void ResetMax( double m) {maxLoan = m ;}
	void ResetRate( double r ) { rate = r ;}
	void RestOwes (){owesBank = 0 ;}
};





#endif //
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test
