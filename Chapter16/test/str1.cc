//Changed by Ghostxiu 2017/11/14
//原书程序清单16.1 内容
//string类 构造函数
#include<iostream>
#include<string>

int main()
{
	using std::string;
	using std::cout ;
	using std::endl;


	string one("Lottery Winner!");//use string(const char *)
	cout << one << endl;

	string two(20,'$');//use string(size_type n, char c) 20 个 $
	cout << two << endl ;

	string three(one);//use string(const string & s) 复制构造函数
	cout << three << endl ;

	one += "Oops!";//overload +=
	cout << one << endl ;

	two = "Sorry! that was ";
	three[0] = 'P';
	string four ; //use string() 默认构造函数
	four = two + three ;
	cout << four << endl ;

	char alls[] = "All's well that ends well ";
	string five(alls , 20 ); // use string(const char * , size_type n)
	cout << five << "!\n";

	string six(alls + 6 , alls + 10 );//use template<class Iter>  string(Iter begin, Iter end )
	cout << six << " , " ;

	string seven(&five[6],&five[10]);//use template<class Iter>  string(Iter begin, Iter end )
	cout << seven << "...\n" ;

	string eight(four,7,16);//  use  string(const string & str , string size_typepos = 0 , size_type n = npos )
	cout << eight << " in motion!" << endl ;
	return 0;
}


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
