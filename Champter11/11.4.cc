//在原书程序的基础上更改
//包括time.cc,time.h
//使用友元函数来实现所有的运算符重载
#include<iostream>
#include"timec.cc"
int main()
{
	using std::cout ;
	using std::endl ;

	Time kitty;
	Time john(4,50);
	Time patty(2,20);
	Time kiss(10,05);
	Time total;

	cout << "Show Kitty:"<<endl;
	kitty.show();

	cout << "Show john:" <<endl;
	john.show();

	cout << "Show patty:" <<endl;
	patty.show();

	cout <<"Show kiss:"<<endl ;
	kiss.show();

	cout << "Show john sum patty:";
	total = john.sum(patty);
	total.show();

	cout << "patty + kiss = " ;
	total = patty+kiss;
	total.show();


	cout << "john + patty + kiss = " ;
	total = john + patty + kiss;
	total.show();

	cout << "kiss - patty = " ;
	total = kiss - patty ;
	total.show();

	int mul = 3;
	cout << "patty * 3 = " ;
	total = patty * mul;
	total.show();

	mul = 2;
	cout << "kiss * 2 = " ;
	total = mul * kiss;
	total.show();

	total.reset_time();
	cout << "Now total is reset:";
	cout <<total;

}
