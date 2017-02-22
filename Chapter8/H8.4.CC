//补全函数
#include<iostream>

using namespace std ;
#include<cstring>

struct stringy
{
	char *str ;
	int ct ;
};



//prototypes for set(), show(),and show() go here
void set(stringy &beany ,const char * c);
void show(const stringy &s , int t = 1);
void show(const string &s , int t = 1);

int main ()
{
	stringy beany ;
	char testing[] = "Reality isn`t what is used to be.";

	set (beany,testing);//first argument is a reference ,
						//allocates space to hold copy of testing ,
						//sets str member of beany to point to the
						//new block, copies testing to new  block ,
						// and sets ct member of beany

	show(beany);//print string member once
	show(beany,2);//print member string twice
	testing[0] = 'D';
	testing[1] = 'u' ;
	show(testing) ; // prints testing string once
	show(testing,3);//prints testing string thrice
	show("Done!");

	return 0 ;
}

void set(stringy &beany ,const char * c)
{
	//此处如形参使用const char * c 则只用循环的方式赋值
	//否则不能直接赋值，原因是不能将const char * 转化为char *
	int l = strlen(c);
	beany.str = new char[l];
	for(int i = 0 ; i < l ; ++i)
	{
		beany.str[i] = c[i];
	}
	//beany.str = c ;
	beany.ct = l ;

}

void show(const stringy &s , int t)
{
	cout << endl ;
	for(int i = 0 ; i < t; ++i )
	{
		cout << s.str << endl ;
	}
}
void show(const string &s , int t )
{
	cout << endl ;
	for(int i = 0 ; i <  t ;  ++i)
	{
		cout << s << endl ;
	}
}
