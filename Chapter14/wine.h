//Changed by Ghostxiu 2017/10/14
//编程练习1
//包括文件 wine.h wine.cc 14.1.cc
//Wine类中存储Pair<valarray<int>,<valarray<int>>类型的数组是难点
//使用自建的MakePair方法完成数据的传输
#ifndef WINE_H_
#define WINE_H_

#include <iostream>
#include <string>
#include <valarray>
#include <utility>

using std::string ;
using std::pair;
//Pair类声明
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
	void MakePair(const T1 & t1 , const T2 & t2);
};

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt,ArrayInt> PairArray;

//Wine类声明
class Wine{
private:
	string label;
	int year ;//输入数量
	PairArray parr;
public:
	Wine(const char * l ,int y, const int yr[],const int bot[]);
	Wine(const char *l ,int y);
	Wine(){};
	~Wine(){};
	void GetBottles();
	void Show();
	int sum();
	string Label(){return label;}
};


#endif // WINE_H_


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14
