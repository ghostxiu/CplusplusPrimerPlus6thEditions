//Changed by Ghostxiu 2017/12/15
//原书程序清单16.20 内容
//STL  方法
//使用valarray

#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>

using namespace std ;

int main()
{

	vector<double> data ;
	double temp ;

	cout << "Enter numbers (<=0 to quit):\n";
	while(cin>>temp && temp>0)
	{
		data.push_back(temp);
	}
	sort(data.begin(),data.end());
	int sizes  = data.size();

	valarray<double> numbers(sizes);
	for(int i =0 ; i < sizes ; ++i)
	{
		numbers[i] = data[i];
	}
	valarray<double> sqtr_nums(sizes);
	sqtr_nums = sqrt(numbers);
	valarray<double> results(sizes);
	results = numbers + 2.0 * sqtr_nums;

	cout.setf(ios_base::fixed);
	cout.precision(4);
	for(int i = 0 ; i < sizes ; ++i)
	{
		cout.width(8);
		cout << numbers[i] << ": " ;
		cout.width(8);
		cout << results[i] << endl;
	}
	cout << "Done!\n";
	return 0;
}


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
