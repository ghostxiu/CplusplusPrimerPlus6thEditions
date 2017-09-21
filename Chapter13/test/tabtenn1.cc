//Changed by Ghostxiu 2017/9/15
//原书程序清单13.5内容
#include"tabtenn1.h"
#include<iostream>

using std::cout ;
using std::cin;
using std::endl;
//TableTennisPlayer类的方法
TableTennisPlayer::TableTennisPlayer(const string & fn,
									const string & ln , bool ht) : firstname(fn) ,
									lastname(ln) ,hasTable(ht){}
void TableTennisPlayer::Name() const
{
	cout << lastname << "," <<firstname ;
}

//RatedPlayer 类的方法
RatedPlayer::RatedPlayer(unsigned int r ,const string & fn ,
						const string & ln , bool ht ) :
							TableTennisPlayer(fn,ln,ht),rating(r){}

RatedPlayer::RatedPlayer(unsigned int r , const TableTennisPlayer & tp) :
	TableTennisPlayer(tp),rating(r){}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test

