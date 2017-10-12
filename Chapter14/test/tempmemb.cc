//Changed by Ghostxiu 2017/10/11
//原书程序清单14.20 内容
//成员模版
//模板可用作结构、类或者模板类的成员

#include <iostream>
using std::cout ;
using std::endl ;

//类声明+类定义
template <typename T>
class beta
{
private:
	template <typename V>
	class hold
	{
	private:
		V val ;
	public:
		hold (V v = 0 ) : val (v) {}
		void show() const {cout << val << endl ;}
		V value ()const { return val;}
	};
	hold<T> q ;
	hold<int> n ;
	public:
		beta( T t ,int i) : q(t) , n(i) {}
		template<typename U>
		U blab(U u ,T t) {return (n.value() + q.value()*u /t );}
		void Show () const {q.show();n.show();}
};


//主程序入口
int main()
{
	beta<double> guy(3.5,3);
	cout << "T was set to double\n";
	guy.Show();
	cout << "V was set to T , which is double ,then V was set to int\n";
	cout << guy.blab(10,2.3) << endl ;
	cout << "U was set to int\n";
	cout <<guy.blab(10.0,2.3) << endl ;
	cout << "U was set to double.\n";
	cout << "Done.\n";


	return 0 ;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
