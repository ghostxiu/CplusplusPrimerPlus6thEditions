//复习题11.8的第四题，使用友元函数重载
//注：一英石=14磅
class Stonewt{
private:
	int stone;
	int pound;
public:
	Stonewt(int s = 0 , int p = 0);
	Stonewt operator *(double x);
	friend Stonewt operator*(double a,const Stonewt & t);
};

Stonewt::Stonewt(int s , int p )
{
	stone = s ;
	pound = p ;
}
Stonewt Stonewt::operator*(double x)
{
	Stonewt op ;
	int ponuds = (stone * 14 + pound)*x;
	op.pound = pounds%14;
	op.stone = pounds/14;
	return op;
}

//方法1
friend Stonewt operator*(double a,const Stonewt & t)
{
	Stonewt op ;
	int ponuds = (t.stone * 14 + t.pound)*x;
	op.pound = pounds%14;
	op.stone = pounds/14;
	return op;
}

//方法2 无需使用声明，不需要使用友元函数
Stonewt operator*(double a,const Stonewt & t)
{
	return t*a;
}
