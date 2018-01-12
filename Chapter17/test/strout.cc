//Changed by Ghostxiu 2017/1/12
//原書程序清單17.21 內容
//string 类的内核格式化
//输出

#include <iostream>
#include <string  >
#include <sstream >



using namespace std ;

int main()
{
	ostringstream outstr;
	string harddisk ;
	cout << "What's the name of your hard disk?";
	cin >>harddisk ;
	cout << "What's its capcity GB ?";
	int capcity ;
	cin >> capcity ;

	outstr << "The hard disk " << harddisk << " has a capcity of "
			<< capcity << " gigabytes.\n";
	string result = outstr.str();
	cout << result ;

	return 0;
}



//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
