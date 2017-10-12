 //Changed by Ghostxiu 2017/10/12
//原书程序清单14.24 内容
//演示模板类和友元
//模版友元 有三类
//1.非模板友元 2.约束模板友元
//3.非约束模板友元
//本程序演示 非约束模板友元

#include <iostream>
using std::cout ;
using std::endl;

//类声明
template <typename T>
class ManyFriend{
private:
	T item;
public:
	ManyFriend(const T & i ) : item(i) {}
	template<typename C, typename D>
	friend void show2 ( C & , D & );

};

template<typename C , typename D> void show2(C & c , D & d )
{
	cout << c.item << ", " << d.item << endl ;
}

int main()
{
	ManyFriend<int> hif1(10);
	ManyFriend<int> hif2(20);
	ManyFriend<double> hidb(10.23);
	cout << "hif1 , hif2 : " ;
	show2(hif1,hif2);
	cout << "hif1 , hidb : " ;
	show2(hif1,hidb);

	return 0;
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
