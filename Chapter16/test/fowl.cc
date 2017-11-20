//Changed by Ghostxiu 2017/11/20
//原书程序清单16.6 内容
//string类 被抛弃了的 auto_ptr 不能完成的工作
#include<iostream>
#include<string>
#include<memory>
int main()
{
	using namespace std ;

	shared_ptr<string> films[5] =
	{
		shared_ptr<string> (new string("Fowl Balls")),
		shared_ptr<string> (new string("Ray Ghostxiu")),
		shared_ptr<string> (new string("Angerest Laou")),
		shared_ptr<string> (new string("La Ou")),
		shared_ptr<string> (new string("Killer"))
	};

	shared_ptr<string> pwin ;
	//将所有权转给pwin,films[2]将引用一个空指针
	pwin = films[2];
	//若使用unique_ptr此处编译不过
	//因为shared_ptr有一个引用计数器，所以不会出问题具体见原书p672
	cout << "The nominess for best avian baseball film are\n";

	for(int i = 0 ; i < 5 ; ++i)
	{

		cout << *films[i] << endl ;
	}


	cout << "The winner is " << *pwin << "!\n";
	cin.get();

	return 0;
}


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
