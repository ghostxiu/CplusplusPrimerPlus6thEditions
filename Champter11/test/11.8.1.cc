//复习题11.8的第一题
//注：一英石=14磅
class Stonewt{
private:
	int stone;
	int pound;
public:
	Stonewt(int s = 0 , int p = 0);
	Stonewt operator *(double x);
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
