//Changed by Ghostxiu 2017/9/24
//修改自 原书程序清单13.15

#include "dma1.h"
#include <cstring>
using std::strlen;
using std::strcpy;
using std::endl;
using std::cout;
//基类dmaABC
dmaABC::dmaABC(const char * l , int r)
{
	label = new char[strlen(l)+1];
	strcpy(label,l);
	rating = r ;
}
dmaABC::dmaABC(const dmaABC & rs)
{
	label = new char[strlen(rs.label)+1];
	strcpy(label,rs.label);
	rating = rs.rating;
}

dmaABC::~dmaABC()
{
	delete [] label ;
}

dmaABC & dmaABC::operator=(const dmaABC & rs)
{
	if( this == &rs)
	{
		return *this ;
	}

	delete [] label ;
	label = new char[strlen(rs.label)+1];
	strcpy(label,rs.label);
	rating = rs.rating;

	return *this ;
}

ostream & operator<<(ostream &os , const dmaABC &rs)
{
	os << "Label: " << rs.label << endl;
	os << "Rating: " << rs.rating <<endl;
	return os ;
}
void dmaABC::show()
{
	cout << "Label: " << label << endl;
	cout << "Rating: " << rating <<endl;
}
//派生类baseDMA


ostream & operator<<(ostream &os , const baseDMA &rs)
{
	os << (const dmaABC &) rs ;
	return os ;
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
	if( this == &rs)
	{
		return *this ;
	}
	dmaABC::operator=(rs);
	return *this ;
}
void baseDMA::show()
{
	dmaABC::show();
}
//派生类 lacksDMA,由于没有使用new运算符开辟空间，故不需要再次回收
lacksDMA::lacksDMA(const char * c  ,
				 const char * l  ,int r)
				 :dmaABC(l,r)
{
	strcpy(color,c);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c ,const
				dmaABC &rs) : dmaABC(rs)
{
	strcpy(color,c );
	color[COL_LEN - 1 ] = '\0';

}

ostream &operator<<(ostream & os ,const lacksDMA &ls)
{
	os << (const dmaABC &) ls ;
	os << "Color: " << ls.color <<endl;
	return os ;
}
void lacksDMA::show( )
{
	dmaABC::show();
	cout << "Color: " << color <<endl;
}

//派生类hasDMA,由于使用new ，需要析构函数回收空间
hasDMA::hasDMA(const char * s  , const char *l
			, int r  ) : dmaABC(l,r)
{
    style = new char[strlen(s)+1];
    strcpy(style,s);


}

hasDMA::hasDMA(const char * s ,const dmaABC &rs)
				:dmaABC(rs)
{
	style = new char[strlen(s)+1];
	strcpy(style,s);

}

hasDMA::hasDMA(const hasDMA & hs)
{
	style = new char[strlen(hs.style) + 1];
	strcpy(style,hs.style);
}
hasDMA::~hasDMA()
{
	delete [] style ;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
	if(this == &hs)
	{
		return *this ;
	}
	dmaABC::operator=(hs);//执行基类的赋值运算符
	delete [] style ;
	style = new char[strlen(hs.style) + 1];
	strcpy(style,hs.style);

	return *this;
}

ostream & operator<<(ostream & os
								, const hasDMA & hs)
{
	os << (const dmaABC &) hs ;
	os << "style : " << hs.style <<endl;
	return os ;
}

void hasDMA::show( )
{
	dmaABC::show();
	cout  << "style : " << style <<endl;

}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13
