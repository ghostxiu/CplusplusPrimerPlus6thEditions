//Changed by Ghostxiu 2017/10/14
//编程练习1
//包括文件 wine.h wine.cc 14.1.cc
#include "wine.h"
using std::cout;
using std::cin;
using std::endl;

//Pair类定义
template <class T1 , class T2>
T1 & Pair<T1,T2>::first()
{
	return a ;
}

template <class T1, class T2>
T2 & Pair<T1,T2>::second()
{
	return b ;
}

template <class T1, class T2>
void Pair<T1,T2>::MakePair(const T1 & t1 , const T2 & t2)
{
	a = t1 ;
	b = t2 ;
}
//Wine 类定义
Wine::Wine(const char * l ,int y, const int yr[],const
		int bot[]) : label(l),year(y)
{
	ArrayInt fst(y);
	ArrayInt sec(y);
	for(int i = 0 ; i < year ; ++i)
	{
		fst[i] = yr[i];
		sec[i] = bot[i];
	}
	parr.MakePair(fst,sec);
}
Wine::Wine(const char *l ,int y):label(l),year(y)
{
	ArrayInt fst(y);
	ArrayInt sec(y);
	parr.MakePair(fst,sec);
}

void Wine::GetBottles()
{
	cout << "Enter " << label << " data for "
		<< year << " year(s):";
	int yr , bts ;
	ArrayInt fst(year);
	ArrayInt sec(year);
	for(int i = 0 ; i < year ; ++i)
	{
		cout << "Enter year: ";
		cin >> yr ;
		cout << "Enter bottles for that year: ";
		cin >> bts ;
		fst[i] = yr;
		sec[i] = bts;
	}
	parr.MakePair(fst,sec);
}
void Wine::Show()
{
	cout << "Wine: " << label << endl ;
	cout << "\tYear" <<"\tBottles" <<endl ;
	for(int i = 0 ; i < year ; ++i )
	{
		cout << "\t" << parr.first()[i] << "\t" << parr.second()[i] <<endl ;
	}
}


int Wine::sum()
{
	int sums = 0 ;
	for(int i = 0 ; i < year ; ++i)
	{
		sums += parr.second()[i];
	}
	return sums ;
}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14
