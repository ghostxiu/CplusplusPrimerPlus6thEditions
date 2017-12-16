//Changed by Ghostxiu 2017/12/15
//原书程序清单16.17 内容
//STL  方法
//string 在STL中使用
//next_permutation() 全排列
#include <iostream>
#include <string>
#include <algorithm>



int main()
{
	using namespace std ;
	string letters ;
	cout << "Enter the letter grouping (q to quit): " ;

	while	( cin >> letters && letters != "q")
	{
		cout << "Permutation of " << letters << endl ;
		sort(letters.begin(),letters.end());
		cout << letters << endl;
		while(next_permutation(letters.begin(),letters.end()))
			cout << letters << endl;
		cout << "Enter the next sequence(q to quit):"<<endl;
	}
	cout << "Done.\n";
	return 0;
}
//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
