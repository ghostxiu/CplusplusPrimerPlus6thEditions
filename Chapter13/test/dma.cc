//Changed by Ghostxiu 2017/9/20
//原书程序清单13.15内容
#include "dma.h"
#include <cstring>
using std::strlen;
using std::strcpy;
using std::endl;
using std::cout;
//基类baseDMA
baseDMA::baseDMA(const char * l , int r)
{
	label = new char[strlen(l)+1];
	strcpy(label,l);
	rating = r ;
}

baseDMA::baseDMA(const baseDMA & rs)
{
	label = new char[strlen(rs.label)+1];
	strcpy(label,rs.label);
	rating = rs.rating;
}

baseDMA::~baseDMA()
{
	delete [] label ;
}
baseDMA & baseDMA::operator=(const baseDMA & rs)
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

ostream & operator<<(ostream &os , const baseDMA &rs)
{
	os << "Label: " << rs.label << endl;
	os << "Rating: " << rs.rating <<endl;
	return os ;
}
//派生类 lacksDMA,由于没有使用new运算符开辟空间，故不需要再次回收
lacksDMA::lacksDMA(const char * c  ,
				 const char * l  ,int r)
				 :baseDMA(l,r)
{
	strcpy(color,c);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c ,const
				baseDMA &rs) : baseDMA(rs)
{
	strcpy(color,c );
	color[COL_LEN - 1 ] = '\0';

}

ostream &operator<<(ostream & os ,const lacksDMA &ls)
{
	os << (const baseDMA &) ls ;
	os << "Color: " << ls.color <<endl;
	return os ;
}


//派生类hasDMA,由于使用new ，需要析构函数回收空间
hasDMA::hasDMA(const char * s  , const char *l
			, int r  ) : baseDMA(l,r)
{
    style = new char[strlen(s)+1];
    strcpy(style,s);


}

hasDMA::hasDMA(const char * s ,const baseDMA &rs)
				:baseDMA(rs)
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
	baseDMA::operator=(hs);//执行基类的赋值运算符
	delete [] style ;
	style = new char[strlen(hs.style) + 1];
	strcpy(style,hs.style);

	return *this;
}

ostream & operator<<(ostream & os
								, const hasDMA & hs)
{
	os << (const baseDMA &) hs ;
	os << "style : " << hs.style <<endl;
	return os ;
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test
