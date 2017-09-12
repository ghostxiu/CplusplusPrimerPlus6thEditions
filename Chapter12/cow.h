//Changed by Ghostxiu 2017/9/12
#ifndef COW_H_
#define COW_H_
class Cow{
private:
	char name[20];
	char * hobby ;
	double weight;
public:
	Cow();
	Cow(const char * nm , const char * ho , double wt);
	~Cow();
	Cow(const Cow  & c);
	Cow & operator = (const Cow & c);
	void ShowCow() const ;
};
#endif // COW_H_



//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/
