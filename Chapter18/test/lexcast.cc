//Changed by Ghostxiu 2018/1/19
//原書程序清單18.11內容
//boost库测试
//lexical_cast
#include<iostream>
#include "boost/lexical_cast.hpp"
int main()
{
	using namespace std ;

	cout << "Enter your weight: " ;
	double weight ;
	cin >> weight ;
	string gain = "A %10 increase raises ";
	string wt = boost::lexical_cast<string>(weight);
	gain = gain + wt + " to " ;//string operator+()
	weight = 1.1 * weight ;
	gain = gain + boost::lexical_cast<string>(weight)+ "." ;//string operator+()
	cout << gain << endl;

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter18/test
