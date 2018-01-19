//Changed by Ghostxiu 2018/1/17
//原書程序清單18.4內容
//lambda函数
//比较使用普通函数，operator()()，和匿名函数

#include <iostream>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <vector>

const long Size1 = 39L;
const long Size2 = Size1 * 100 ;
const long Size3 = Size2 * 100 ;

bool f3(int x) {return x%3 == 0;}
bool f13(int x ) {return x%13 == 0;}


int main()
{
	using namespace std ;
	vector<int> numbers(Size1);
	srand(time(nullptr));

	//使用普通的方法
	generate(numbers.begin(),numbers.end(),rand);
	cout << "\n\n\nSample size: " << Size1 << endl ;

	int count3 = count_if(numbers.begin(),numbers.end(),f3);
	cout << "Count of numbers divisible by 3:" << count3 << endl;
	int count13 = count_if(numbers.begin(),numbers.end(),f13);
	cout << "Count of numbers divisible by 13:" << count13 << endl;

	//使用operator()()
	numbers.resize(Size2);
	generate(numbers.begin(),numbers.end(),rand);
	cout << "\n\n\nSample size: " << Size2 << endl ;
	class f_mod
	{
	private:
		int dv ;
	public:
		f_mod(int d = 1 ) :dv(d) {}
		bool operator()(int x) {return x % dv == 0 ;}
	};

	count3 = count_if(numbers.begin(),numbers.end(),f_mod(3));
	cout << "Count of numbers divisible by 3:" << count3 << endl;
	count13 = count_if(numbers.begin(),numbers.end(),f_mod(13));
	cout << "Count of numbers divisible by 13:" << count13 << endl;

	//使用lambda表达式
	numbers.resize(Size3);
	generate(numbers.begin(),numbers.end(),rand);
	cout << "\n\n\nSample size: " << Size3 << endl ;

	count3 = count_if(numbers.begin(),numbers.end(),
						[](int x){return x % 3 == 0 ;});
	cout << "Count of numbers divisible by 3:" << count3 << endl;
	count13 = count_if(numbers.begin(),numbers.end(),
							[](int x){return x % 13 ==0 ;});
	cout << "Count of numbers divisible by 13:" << count13 << endl;
	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter18/test
