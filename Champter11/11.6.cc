//根据课本改写，包括stonewt.h 和 stonewt.cc
//Modify by ghostxiu 2017/9/1
//重载六个全部关系运算符，声明一个6个元素的类对象数组，
//初始化三个对象的值，循环读取三个值
//报告最小元素，最大元素，大于或等于11英石的元素
#include"stonewt.cc"
using std::cin;
const int Len = 6;
int main()
{
	Stonewt *st = new Stonewt[Len];
	st[0] = Stonewt(689.2);
	st[1] = Stonewt(798.9);
	st[2] = Stonewt(123.09);

	cout << "Now enter other three Stones:";
	double sti;
	for(int i = 3 ; i < Len ; ++i)
	{
		cout << "st" << i+1 << ":";
		cin >> sti;
		st[i] = Stonewt(sti);
	}

	Stonewt min,max;
	min = max = st[0];
	double st11= double(Stonewt(11,0));
	int n = Len;
	int tag = 0;

	while(n--)
	{
		cout << st[n] <<endl;
		if(st[n]>max)
		{
			max = st[n];
		}
		else if(st[n] < min)
		{
			min = st[n] ;
		}
		if(st[n] >= st11)
		{
			tag++;
		}
	}

	cout << "Max weight is : " << max ;
	cout << "Minimum weight is : " << min ;
	cout << "There are " << tag << " number weight upper than 11 stones.\n";

	//st[0];
	cout << "\n\n\n...end...\n";
	return 0;
}
