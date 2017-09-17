//Changed by Ghostxiu 2017/9/17
//
#ifndef STOCK0_H_
#define STOCK0_H_
#include<iostream>
#include<cstring>
using std::string;
using std::ostream;
class Stock{
private:
	char * company ;
	int shares ;
	double share_val ;
	double total_val;
	void set_tot() { total_val  =  shares * share_val ;}
public:
	Stock();
	Stock(const char * co , long n = 0 , double p = 0.0 );
	~Stock();
	void buy(long num , double price);
	void sell(long num , double price);
	void update(double price);
	void show() const ;
	const Stock & topval( const Stock & s ) const ;
	friend ostream & operator<<(ostream & os , const Stock & s);

};
#endif // STOCK0_H_
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/
