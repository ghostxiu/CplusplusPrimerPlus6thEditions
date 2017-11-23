//Changed by Ghostxiu 2017/11/23
//原书程序清单16.7 内容
//STL vector
#include <iostream>
#include <vector>
#include <string>

const int NUM = 5;

int main()
{
	using std::cout;
	using std::string;
	using std::endl ;
	using std::cin ;
	using std::vector ;

	vector <int> ratings(NUM);
	vector <string> titles(NUM);

	for(int i = 0 ; i < NUM ; ++i)
	{
		cout << "Enter the title "<< i+1 << ":" ;
		getline(cin,titles[i]);
		cout << "Enter the rating 0 ~ 10:";
		cin >> ratings[i];
		cin.get();

	}
	cout << "Thank you.You entered the following:\n"
		 << "Rating Book\n";
	for(int i = 0; i < NUM ; ++i )
	{
		cout << ratings[i] << "\t" << titles[i] << endl ;
	}

	return 0;
}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
