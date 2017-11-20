//Changed by Ghostxiu 2017/11/20
//原书程序清单16.4 内容
//string类 capcity() & reserve
#include<iostream>
#include<string>

int main()
{
	using namespace std ;
	string empty ;
	string small = "bit";
	string larger = "Elephants are girl's best friend";
	cout << "Size :\n";
	cout << "\tempty: " << empty.size() << endl ;
	cout << "\tsamll: " << small.size() << endl ;
	cout << "\tlarger: " << larger.size() << endl ;
	cout << "Capticities: \n";//capacity() 返回申请的内存块大小
	cout << "\tempty: " << empty.capacity() << endl ;
	cout << "\tsamll: " << small.capacity() << endl ;
	cout << "\tlarger: " << larger.capacity() << endl ;
	empty.reserve(50);

	cout << "Capacity after empty.reserve(50): "
		 << empty.capacity() <<endl ;

	return 0;
}


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
