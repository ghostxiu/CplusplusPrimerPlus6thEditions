//Changed by Ghostxiu 2017/12/7
//原书程序清单16.15 内容
//STL  方法
//函数对象 函数符（functor)
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

void couter(int n )
{
	std::cout << n << " ";
}

template <class T>
class TooBig
{
private:
	T cutoff ;
public:
	TooBig(const T & t) : cutoff(t) {}
	bool operator() ( const T & v) {return v > cutoff ;}
};

int main()
{
	using std::list ;
	using std::cout ;
	using std::endl;

	TooBig<int> f100(100);

	list <int> yadayada = {50,100,90,180,60,210,415,88,188,201};
	list <int> etcetera = {50,100,90,180,60,210,415,88,188,201};

	cout << "Original lists:\n";
	for_each(yadayada.begin(),yadayada.end(),couter);
	cout << endl ;
	for_each(etcetera.begin(),etcetera.end(),couter);
	cout << endl ;

	yadayada.remove_if(f100);
	etcetera.remove_if(TooBig<int> (200));

	cout << "Trimmed lists:\n";
	for_each(yadayada.begin(),yadayada.end(),couter);
	cout << endl ;
	for_each(etcetera.begin(),etcetera.end(),couter);
	cout << endl ;
	return 0 ;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
