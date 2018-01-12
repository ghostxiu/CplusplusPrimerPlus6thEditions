//Changed by Ghostxiu 2017/12/29
//原書程序清單17.9內容
//setf()成员函数
//使用两个参数的setf()
#include <iostream>
#include <cmath> //sqrt() need

int main()
{
	using std::cout ;
	using std::endl;
	using std::ios_base;

	cout.setf(ios_base::left,ios_base::adjustfield);//使用左对齐
	cout.setf(ios_base::showpoint);//显示小数点
	cout.setf(ios_base::showpos);//正数显示+号
	cout.precision(3);//精度设置为3
	ios_base::fmtflags old =
		cout.setf(ios_base::scientific,ios_base::floatfield);//使用科学计数法
	cout << "Left Justification:\n";
	for(int i = 1 ; i <= 41 ; i +=10)
	{
		cout.width(4);
		cout << i << "|" ;
		cout.width(12);
		cout << sqrt(double(i)) << "|\n";
	}

	cout << "Internal Justification:\n";
	cout.setf(ios_base::internal,ios_base::adjustfield);//使用分开对齐(数值和符号）
	cout.setf(old,ios_base::floatfield);//还原为原来的计数方式
		for(int i = 1 ; i <= 41 ; i +=10)
	{
		cout.width(4);
		cout << i << "|" ;
		cout.width(12);
		cout << sqrt(double(i)) << "|\n";
	}

	cout << "Right Justification:\n";
	cout.setf(ios_base::right,ios_base::adjustfield);//使用右对齐
	cout.setf(ios_base::fixed,ios_base::floatfield);//使用小数点计数方式
		for(int i = 1 ; i <= 41 ; i +=10)
	{
		cout.width(4);
		cout << i << "|" ;
		cout.width(12);
		cout << sqrt(double(i)) << "|\n";
	}

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
