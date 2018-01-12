//Changed by Ghostxiu 2017/12/30
//原書程序清單17.12內容
//cin输入 和抛出异常
//检查允许的输入
#include <iostream>
#include <exception>

int main()
{
	using namespace std ;
	cout << "Enter numbers: ";
	cin.exceptions(ios_base::failbit);
	int input ,sum;
	sum = 0;
	try{
		while(cin>>input)
		{
			sum += input;
		}
	}catch(ios_base::failure &bt)
	{
		cout << bt.what()<<endl;
		cout << "O!the horror!\n";
	}
	cout << "Last value entered = " << input << endl ;
	cout << "Sum " << sum << endl ;
	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
