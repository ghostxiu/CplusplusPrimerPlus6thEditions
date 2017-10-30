//Changed by Ghostxiu 2017/10/25
//原书程序清单15.15 内容
//异常、类和继承
//stdexcept
//包括 sales.h sales.cc use_sales.cc
#include "sales.h"
#include <iostream>
Sales::bad_index::bad_index(int ix ,const string & s ) : std::logic_error(s) ,bi(ix)
{
}

Sales::Sales(int yy)
{
	year = yy ;
	for (int i = 0 ; i < MONTHS ; ++i)
	{
		gross[i] = 0 ;
	}
}

Sales::Sales(int yy , const double * gr , int n )
{
	year = yy ;
	int lim = (n > MONTHS) ? n : MONTHS ;
	int i ;
	for (i = 0 ; i < lim ; ++i)
	{
		gross[i] = gr[i];
	}
	for(; i < MONTHS ; ++i)
	{
		gross[i] = 0 ;
	}
}

double Sales::operator[] (int i) const
{
	if( i < 0  || i >= MONTHS )
	{
		throw bad_index(i) ;
	}
	return gross[i];
}

double & Sales::operator[]( int i )
{
	if( i < 0  || i >= MONTHS )
	{
		throw bad_index(i) ;
	}
	return gross[i];
}

LabeledSales::nbad_index::nbad_index(const string & lb , int ix,
			const string & s ) : Sales::bad_index(ix,s)
{
	lbl = lb ;
}

LabeledSales::LabeledSales(const string & lb ,int yy ,
						const double *gr ,int n )
						: Sales(yy ,gr ,n)
{
	label = lb ;
}

double LabeledSales::operator[] (int i ) const
{
	if( i < 0 || i >= MONTHS)
	{
		throw nbad_index(Label(),i);

	}
	return Sales::operator[](i);
}


double & LabeledSales::operator[] (int i )
{
	if( i < 0 || i >= MONTHS)
	{
		throw nbad_index(Label(),i);

	}
	return Sales::operator[](i);
}
//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
