/*用类实现一个银行账户，有存、取和显示的功能*/
#include<iostream>
#include "backaccount.h"

using namespace std ;
BankAccount  CreateAccount();
void DespositAndWithdraw(BankAccount *);
BankAccount *bk;

int main()
{


	BankAccount BC;
	BC = CreateAccount();
	bk = &BC;
	DespositAndWithdraw(bk);
	return 0 ;
}

BankAccount  CreateAccount()
{
	cout << "Now we will create a BankAccount for you :\n\n" << endl;
    cout << "First,please enter your name :";
    string name ;
    cin >> name ;
    cout << "\nNext,please enter the money , \nyou want first to open an account:";
    double money;
    cin >> money;
    string no ;
    no = "XA00071166";
    cout << "\nNow " << name << ", we give you a card num :" <<no;
    //创建账户
	BankAccount B(name,no,money);
    cout << ".\n\nPlease remind that:\n\n\n";
    B.showAccount();
   // bk = &B;
   return B;
}



/*xxx未解决的问题:创建多个账户的时候怎么随机账户名，也就是字符串和数字的转换*/
void DespositAndWithdraw(BankAccount *B)
{
	int i ;
	double dol ;
	cout << "Please enter 1 to save or 2 to get money:";

	while( cin >> i )
	{
		cout <<"\n\n";
		if(i == 1)
		{
			cout << "Please enter the money you want to save :";
			cin >> dol ;
            B->desposit(dol);
		}
		else if(i == 2)
		{
			cout << "Please enter the money you wang to get :";
			cin >> dol;
			B->withdraw(dol);
		}
		else break;
		cout << "Please enter 1 to save or 2 to get money:";
	}
	B->showAccount();
	cout << "...Done.\n\n";
}
