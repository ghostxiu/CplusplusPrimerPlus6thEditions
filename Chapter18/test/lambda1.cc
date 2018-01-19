//Changed by Ghostxiu 2018/1/17
//原書程序清單18.5內容
//lambda函数
//使用lambda访问域内动态变量

#include <iostream>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <vector>

const long Size1 = 39L;
const long Size = Size1 * 100 ;


int main()
{
	using namespace std ;
	vector<int> numbers(Size);
	srand(time(nullptr));

	generate(numbers.begin(),numbers.end(),rand);
	cout << "\n\n\nSample size: " << Size << endl ;


	int count3 = count_if(numbers.begin(),numbers.end(),
						[](int x){return x % 3 ;});
	cout << "Count of numbers divisible by 3:" << count3 << endl;
	int count13 = 0;
	for_each(numbers.begin(),numbers.end(),
							[&count13](int x){count13 += x % 13 ==0;});
	cout << "Count of numbers divisible by 13:" << count13 << endl;

	//使用一个Lambda表达式
	count3 = count13 = 0 ;
	for_each(numbers.begin(),numbers.end(),
		[&](int x){count3 += x % 2 == 0 ;count13 += x % 13 ==0;});
	cout << "Count of numbers divisible by 3:" << count3 << endl;
	cout << "Count of numbers divisible by 13:" << count13 << endl;
	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter18/test
