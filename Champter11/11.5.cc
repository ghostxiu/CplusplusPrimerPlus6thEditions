//根据课本改写，包括stonewt.h 和 stonewt.cc
//Modify by ghostxiu 2017/9/1
//增加状态成员来确定使用英石格式，整数磅格式，浮点磅数格式重载<<，+，-，*
#include"stonewt.cc"
int main()
{
	Stonewt as(666);
	Stonewt bs(12,65.2,Stonewt::INT);
	Stonewt cs(11,23.6,Stonewt::FLOT);
	Stonewt ds;
	Stonewt es(0.0);
	//输出
	cout << "The weight of  a :" << as ;
	cout << "The weight of  b :" << bs ;
	cout << "The weight of  c :" << cs ;
	cout << "The weight of  d :" << ds ;
	cout << "The weight of  e :" << es ;

	//展示重载符号
	cout << "\n\na + b weight is : " << as + bs ;
	cout << "a - c weight is : " << as - cs ;

	cout << "c*2 = " << cs *2 ;

	//展示函数转换
	//数值转化为类对象
//	es = 688.02; //隐式转换
	//显式转化
	//es = (Stonewt)688.02;
	es = Stonewt(688.02);
	cout << "\n\ncovert double 668.02 to e :" << es ;


	//类对象转化为数字
	int d = int(ds);
	cout << "\n\n covert d to an int numbre : "<< d << endl ;
	double e = double(es);
	cout << "\n\n covert e to a double numbre : "<< e << endl ;
	cout << "\n\n\n...end...\n";
	return 0;
}
