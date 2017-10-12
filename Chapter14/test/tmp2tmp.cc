 //Changed by Ghostxiu 2017/10/12
//原书程序清单14.23 内容
//演示模板类和友元
//模版友元 有三类
//1.非模板友元 2.约束模板友元
//3.非约束模板友元
//本程序演示 约束模板友元
#include <iostream>

using std::cout;
using std::endl;
//约束模板友元要先声明，再在类中关联
template <typename T> void counts();
template <typename T> void report(T & );

//类声明
template <typename TT>
class HasfriendT
{
private:
	TT item ;
	static int ct ;
public:
	HasfriendT( const TT & i ) : item (i) {ct++;}
	~HasfriendT(){ct--;}
	friend void counts<TT>();
	friend void report<>(HasfriendT<TT> & ) ;
	//report<>没有定义模板类型，是因为
	//可以根据后面HasfriendT<TT>推断出

} ;

template <typename T>
int HasfriendT<T>::ct = 0 ;



//类定义
template <typename T>
void counts()
{
	cout << "template size: " << sizeof(HasfriendT<T>) << "; ";
	cout << "template counts(): " << HasfriendT<T>::ct << endl ;
}

template <typename T>
void report(T & hf)
{
	cout << hf.item << endl ;
}


int main()
{
	counts<int>();
	HasfriendT<int> hfi1(10);
	HasfriendT<int> hfi2(20);
	HasfriendT<double> hfdb(20.23);
	report(hfi1);
	report(hfi2);
	report(hfdb);
	cout << "counts<int>() output:\n";
	counts<int>();
	cout << "counts<double>() output:\n";
	counts<double>();

	return 0 ;
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
