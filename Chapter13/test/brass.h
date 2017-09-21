//Changed by Ghostxiu 2017/9/15
//原书程序清单13.7内容
#ifndef BRASS_H_
#define BRASS_H_
#include<string>
#include<iostream>
using std::string ;
//基类Brass
class Brass{
private:
	string fullname;
	long accNum;
	double balance;
public:
	Brass(const string & fl = "nobody" , long an = -1 , double bal = 0.0 );
	void Deposit(double amt) ;
	virtual void WithDraw(double amt);
	double Balance() const { return balance ;}
	virtual void ViewAcct() const ;
	virtual ~Brass() {}

};

//派生类BrassPlus
class BrassPlus : public Brass
{
private:
	double maxLoan ;
	double rate;
	double owesBank ;
public:
	BrassPlus(const string & fl = "nobody" , long an = -1 ,
			double bal = 0.0 , double ml = 500 , double r = 0.11125  );
	BrassPlus(const Brass & ba , double ml = 500 , double r = 0.11125);
	virtual void ViewAcct() const ;
	virtual void WithDraw(double wt);
	void ResetMax( double m) {maxLoan = m ;}
	void ResetRate( double r ) { rate = r ;}
	void RestOwes (){owesBank = 0 ;}
};





#endif // BRASS_H_
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test
