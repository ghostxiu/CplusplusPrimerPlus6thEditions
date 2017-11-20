//Changed by Ghostxiu 2017/11/20
//原书程序清单16.5 内容
//string类 智能指针模版 使用三种智能指针
#include<iostream>
#include<string>
#include<memory>
using namespace std ;

class Report
{
private:
	string str;
public:
	Report(string s ): str(s){
		cout << "Object created!\n";}
	~Report()
	{
		cout << "Object deleted!\n";
	}
	comment()
	{
		cout << str << endl ;
	}
};

int main()
{
	{
		auto_ptr<Report> ps (new Report("use auto_ptr"));
		ps -> comment();
	}
	{
		shared_ptr<Report> ps (new Report("use shared_ptr"));
		ps -> comment();
	}
	{
		unique_ptr<Report> ps (new Report("use unique_ptr"));
		ps -> comment();
	}

	return 0;
}


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
