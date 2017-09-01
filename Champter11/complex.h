//modify by Ghostxiu 2017/9/1
#ifndef COMPLEX_H_
#define COMPLEX_H_
using std::ostream;
using std::istream;
class complex{
private:
	double a;
	double b;
public:
	complex();
	complex(double x,double y) ;
	~complex();

	//重载
	complex operator+(const complex &c);
	complex operator-(const complex &c);
	complex operator*(const complex &c);
	complex operator*(double b);
	complex operator~();
	friend istream & operator>>(istream & is ,complex &c);
	friend ostream & operator<<(ostream & os , const complex &c);
	friend complex operator*(double b,const complex &c);
};
#endif // COMPLEX_H_
