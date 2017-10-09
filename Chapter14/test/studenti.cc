//Changed by Ghostxiu 2017/9/15
//原书程序清单14.5 内容 has-a 继承
//私有继承
#include "studenti.h"
using std::istream;
using std::ostream;
using std::endl;

//公有方法
double Student::Average() const
{
	if(ArrayDb::size() > 0)
	{
		return ArrayDb::sum()/ArrayDb::size();
	}
	else
		return 0;
}

double & Student::operator [](int i)
{
	return ArrayDb::operator[](i);
}
double Student::operator [] (int i ) const
{
	return ArrayDb::operator[](i);
}

const string & Student::Name() const
{
	return (const string &) *this ;
}

//私有方法
ostream & Student::arr_out( ostream &os ) const
{
	int i ;
	int lim = ArrayDb::size();

	if(lim > 0)
	{
		for(i = 0 ;  i < lim ; ++i)
		{
			os << ArrayDb::operator[](i) << "\t";
		}
		if(i%5 != 0 )
		{
			os << endl;
		}
	}
	else
	{
		os << "Empty Array.\n";
	}
	return os ;
}

//友元函数
istream & operator>>(istream & is ,Student & stu)
{
	is >> (string &) stu ;
	return is ;
}

istream & getline(istream & is ,Student & stu)
{
	getline(is,(string &)stu);
	return is ;
}


ostream & operator<<(ostream & os ,const Student & stu)
{
	os << "Scores for " <<  (const string & ) stu  << ":\n";
	stu.arr_out(os);
	return os ;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
