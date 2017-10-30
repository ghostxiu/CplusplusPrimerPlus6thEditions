//Changed by Ghostxiu 2017/10/24
//原书程序清单15.13 内容
//异常
//bad_alloc 异常 与 new
#include <iostream>
#include <new>
#include <cstdlib>

using namespace std ;

struct Big
{
	double stuff[20000];
};
int main()
{
	Big *pb,*pc,*pd ;
	try {
		cout << "Trying to get a big block of memory:\n";
		pb = new Big[10000];
		pc = new Big[10000];
		pd = new Big[10000];
		cout << "Got past the new request:\n";
	}
	catch(bad_alloc &ba)
	{
		cout << "Caught the exception!\n";
		cout << ba.what() <<endl ;
		exit(EXIT_FAILURE);
	}
	cout << "Memory successfully allocted\n";
	pb[0].stuff[0] = 4 ;
	pc[0].stuff[0] = 4 ;
	pd[0].stuff[0] = 4 ;
	cout << pb[0].stuff[0] <<endl;
	cout << pc[0].stuff[0] <<endl;
	cout << pd[0].stuff[0] <<endl;
	delete [] pb ;
	delete [] pc ;
	delete [] pd ;
	return 0;
}
//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
