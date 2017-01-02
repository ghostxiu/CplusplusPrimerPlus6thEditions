//所得税计算
#include<iostream>
using namespace std ;

int main()
{
    double wage,revenue,leave;
    cout << "Please given your wage of a month:\n";

    while(cin >> wage )
    {
        if(wage < 0 )//怎么判断不是数字
        {
            break;
        }
        revenue = leave = 0.0 ;
        if(wage <= 5000)
        {
            leave = wage;
        }
        else if(wage > 5000 && wage <= 15000)
        {
            leave =wage - 5000 ;
            revenue = leave *0.1;
        }
        else if (wage > 15000 && wage <= 35000 )
        {
            leave = wage - 15000 ;
            revenue = 10000*0.1 + leave*0.15;
        }
        else
        {
            leave = wage - 35000;
            revenue = 10000*0.1 +20000*0.15 + leave * 0.2;
        }

        cout << "You need give the govement " << revenue;
        cout << " of your "<< wage << " wage.\n";
        cout << "So you leave " << wage - revenue << ".\n\n\n" ;
        cout << "Please given your wage of a month:\n";
    }
    return 0;
}
