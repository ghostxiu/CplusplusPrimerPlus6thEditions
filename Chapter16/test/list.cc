//Changed by Ghostxiu 2017/12/1
//原书程序清单16.12 内容
//STL  方法
//using stl function
//uisng list
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
void coutin(int n )
{
	std::cout << n << " ";
}
int main()
{
	using namespace std ;
	list <int> one(5,2);//list中有5个2
	int stuff[5] ={ 1,2,4,8,6};
	list <int> two ;
	two.insert(two.begin(),stuff,stuff+5);
	cout << "List one: " ;
	for_each(one.begin(),one.end(),coutin);
	cout << endl << "List two: " ;
	for_each(two.begin(),two.end(),coutin);

	int more[6] = {6,4,2,4,6,5};
	list<int> three(two);
	three.insert(three.end(),more,more+6);
	cout<< endl << "List three: " ;
	for_each(three.begin(),three.end(),coutin);

	cout << endl << "List three after minus 2 : " ;
	three.remove(2);//删除three中所有的2
	for_each(three.begin(),three.end(),coutin);
	three.splice(three.begin(),one);
	cout << endl << "List three after splice list one : " ;
	for_each(three.begin(),three.end(),coutin);
	cout <<endl << "List one: " ;
	for_each(one.begin(),one.end(),coutin);

	cout << endl << "List three after unique : " ;
	three.unique();
	for_each(three.begin(),three.end(),coutin);
	//此处不能使用非成员的sort函数(链表不支持）
	three.sort();
	cout << endl << "List three after unique & sort : " ;
	for_each(three.begin(),three.end(),coutin);

	two.sort();
	cout << endl << "Sorted two merged into three  : " ;
	three.merge(two);
	for_each(three.begin(),three.end(),coutin);
	cout << endl ;

	return 0 ;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
