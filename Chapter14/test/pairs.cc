//Changed by Ghostxiu 2017/10/11
//原书程序清单14.19 内容
//使用多个类型参数

#include <iostream>
#include <string >

//类声明部分
template <class T1 , class T2>
class Pair{
private:
	T1 a ;
	T2 b ;
public :
	T1 & first();
	T2 & second();
	T1 first() const {return a ;}
	T2 second() const { return b ;}
	Pair(const T1 & aval , const T2 & bval) : a(aval) , b (bval){}
	Pair() {}
};

//类实现部分


template <class T1 , class T2>
T1 & Pair<T1,T2>::first()
{
	return a ;
}

template <class T1, class T2>
T2 & Pair<T1,T2>::second()
{
	return b ;
}


//程序入口
int main()
{
	using std::cout ;
	using std::endl;
	using std::string ;
	Pair<string,int> ratings[4] = {
		Pair<string ,int >("The purpled Duck" , 5 ),
		Pair<string , int >("Jaquie's Frisco Al Fresco", 4) ,
		Pair<string , int >("Cafe Souffle", 5) ,
		Pair<string , int >("Bertie's", 3)
	};
	int joints = sizeof(ratings) / sizeof (Pair<string,int>);
	cout << "Rating:\t Eatery\n";
	for(int i = 0 ; i < joints ; ++i)
	{
		cout << ratings[i].second() << ":\t "
			 << ratings[i].first() << endl;
	}
	cout << "Oops! Revised rating:\n";
	ratings[3].first() = " Bertie's Fab eats";
	ratings[3].second() = 6 ;
	cout << ratings[3].second() << ":\t "
		<< ratings[3].first() << endl;
	return 0 ;
}

//数组模板示例
