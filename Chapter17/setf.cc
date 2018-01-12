//Changed by Ghostxiu 2017/12/29
//原書程序清單17.8內容
//setf()成员函数
//setf()控制了小数点被显示时其他几个格式选项
#include <iostream>


int main()
{
	using std::cout ;
	using std::endl;
	using std::ios_base;

	int temperature = 63 ;
	cout << "Today's water temprature: ";
	cout.setf(ios_base::showpos);
	cout << temperature <<endl;

	cout << "For our programmingf friends,that's\n";
	cout << std::hex << temperature << endl ;
	cout.setf(ios_base::uppercase);//以16进制大写字母显示
	cout.setf(ios_base::showbase);
	cout << "or\n";
	cout << temperature << endl;

	cout << "How " << true <<" ! oops -- How " ;
	cout.setf(ios_base::boolalpha);
	cout << true << "!\n";


	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
