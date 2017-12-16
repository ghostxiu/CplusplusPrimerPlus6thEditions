//Changed by Ghostxiu 2017/11/28
//原书程序清单16.10 内容
//STL  方法
//using stl function
//copy() ostream_iterator reverse_iterator
#include <iostream>
#include <vector>
#include <iterator>

using namespace std ;



int main()
{
	int cast[10] = {6,7,2,9,4,11,8,7,10,5};
	vector <int> dice(10);

	copy(cast,cast+10,dice.begin());
	cout << "Let the dice be cast!\n";

	ostream_iterator<int,char> out_it(cout," ");

	copy(dice.begin(),dice.end(),out_it);

	cout<<endl;
	cout << "Implicit use of reverse iterator:\n";

	copy(dice.rbegin(),dice.rend(),out_it);
	cout << endl ;

	cout << "Explicit use of reverse iterator.\n";

	vector <int> ::reverse_iterator it ;
	//对反向迭代器执行递增操作将导致它被递减
	for(it = dice.rbegin();it != dice.rend();++it)
	{
		cout << *it << " " ;
	}
	cout << endl ;

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
