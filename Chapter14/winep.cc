//Changed by Ghostxiu 2017/10/20
//编程练习1
//包括文件 winep.h winep.cc 14.2.cc

#include "winep.h"
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
		int bot[]) : string(l),year(y)
{
	ArrayInt fst(y);
	ArrayInt sec(y);
	for(int i = 0 ; i < year ; ++i)
	{
		fst[i] = yr[i];
		sec[i] = bot[i];
	}
	PairArray::MakePair(fst,sec);
}
Wine::Wine(const char *l ,int y):string(l),year(y)
{
	ArrayInt fst(y);
	ArrayInt sec(y);
	PairArray::MakePair(fst,sec);
}

void Wine::GetBottles()
{
	cout << "Enter " << Label() << " data for "
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
	PairArray::MakePair(fst,sec);
}
void Wine::Show()
{
	cout << "Wine: " <<Label() << endl ;
	cout << "\tYear" <<"\tBottles" <<endl ;
	for(int i = 0 ; i < year ; ++i )
	{
		cout << "\t" << PairArray::first()[i] << "\t" << PairArray::second()[i] <<endl ;
	}
}


int Wine::sum()
{
	int sums = 0 ;
	for(int i = 0 ; i < year ; ++i)
	{
		sums +=  PairArray::second()[i];
	}
	return sums ;
}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14
