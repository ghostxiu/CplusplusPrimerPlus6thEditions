//Changed by Ghostxiu 2017/9/19
//原书程序清单13.13内容
//包含文件 acctabc.cc acctacb.cc
//
#include "acctacb.cc"
const int CLIENTS = 4 ;

int main()
{

	AcctABC * p_clients[CLIENTS];
	string temp;
	long tempnum;
	double tempbal ;
	char kind ;

	for(int i = 0 ; i < CLIENTS ; ++i)
	{
		cout << "Enter client's name : " ;
		getline(cin,temp);
		cout << "Enter client's account num:";
		cin >> tempnum;
		cout << "Enter opening balance: $ ";
		cin >> tempbal ;
		cout << "Enter 1 for Brass account or "
			<<" 2 for BrassPlus account: ";
		while( cin >> kind && (kind) != '1' && kind != '2')
			cout << "Enter either 1 or 2: ";
		if (kind == '1')
		{
			p_clients[i] = new Brass(temp,tempnum,tempbal);
		}
		else
		{
			double tmax , trate ;
			cout << "Enter the overdraft limits: $ " ;
			cin >> tmax ;
			cout << "Enter the interest rate "
				<< "as a decimal fraction: " ;
			cin >> trate;
			p_clients[i] = new BrassPlus(temp,tempnum,tempbal,tmax,trate);

		}
		while(cin.get() != '\n')
		{
			continue ;
		}
	}
	cout << endl;
	for (int i = 0 ; i < CLIENTS; ++i)
	{
		p_clients[i] -> ViewAcct();
		cout <<endl ;

	}
	for(int i = 0 ; i < CLIENTS; ++i)
	{
		delete p_clients[i];
	}


	cout << "Done!\n";
	return 0;
}


//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test
