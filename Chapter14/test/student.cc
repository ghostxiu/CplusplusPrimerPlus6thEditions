//Changed by Ghostxiu 2017/9/15
//原书程序清单14.1内容 has-a 继承
#include "studentc.h"
using std::ostream ;
using std::endl;
using std::istream ;
using std::string ;

double Student::Average() const
{
	if (scores.size() > 0 )
	{
		return scores.sum() / scores.size();
	}
}

const string & Student::Name () const
{
	return name ;
}

double & Student::operator[] (int i )
{
	return scores[i];
}

double   Student::operator[] (int i ) const
{
	return scores[i];
}

ostream & Student::arr_out(ostream & os ) const
{
	int i ;
	int lim = scores.size();
	if(lim > 0)
	{
		for(i = 0 ; i < lim ; ++i)
		{
			os << scores[i] << " " ;
			if( i % 5 == 4 )
			{
				os << endl ;
			}
		}
	}
	else
		os << " empty array " ;
	return os ;

}

istream & operator>>( std::istream & is , Student & stu)
{

	is >> stu.name ;
	return is ;
}

istream & getline( std::istream & is , Student & stu)
{
	getline(is,stu.name);
	return is ;
}

ostream & operator<<( std::ostream & os , Student & stu)
{
	os << "Scores for " << stu.name << ":\n";
	stu.arr_out(os) ;
	return os ;
}


//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
