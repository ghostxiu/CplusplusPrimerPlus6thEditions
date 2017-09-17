//Changed by Ghostxiu 2017/9/17
//改写第十章的程序清单10.8,10.9
//包括文件 stock.h stock.cc
//使用动态分配内存，重载<<
#include "stock0.cc"
const int STKS = 4;

int main()
{
	Stock stocks[STKS] = {
		Stock("NanoSmart",12,20.0),
		Stock("Boffo Objects", 200 , 2.0),
		Stock("Monolithic Obelisks" , 130 , 3.25 ),
		Stock("Fleep Enterprises",60,60.5)
	};
	cout << "Stock holding:\n";
	int st ;
	for( st = 0 ; st < STKS ; ++st)
		stocks[st].show();
	const Stock * top = &stocks[0];
	for( st = 1 ; st < STKS ; ++st )
	{
		top = &top->topval(stocks[st]);
	}

	cout << "\nMost valuable holding:\n";
	top -> show();

	return 0;
}
/

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/
