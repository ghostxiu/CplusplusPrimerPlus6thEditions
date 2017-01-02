//捐款统计，捐款结构有两个成员
//捐款结构用动态数组来完成
//要求分成两组
#include<iostream>
#include<queue>
#include<climits>
using namespace std ;

struct Donate{
    string name ;
    double fund;
};

 void PushDonate(queue<int> x,Donate D[]);

int main()
{
    cout << "Please enter the number of the donater:";
    int n ;
    cin >> n ;
    Donate *D = new Donate[n];
    int k = 0 ;

    queue<int> grand;
    queue<int> normal;

    while(n-k)
    {
        cout << "Now enter the " << k + 1
            << " person name :" ;
        cin >> D[k].name;
        cout << "The fund donated:";
        cin >> D[k].fund;
        if(D[k].fund >= 10000)
        {
            grand.push(k);
        }
        else
        {
            normal.push(k);
        }
        ++k;
    }

    cout << "Grand band:\n";
    PushDonate(grand,D);
    cout << "Normal band:\n";
    PushDonate(normal,D);
    delete []D;
    return 0 ;
}

 void PushDonate(queue<int> x,Donate D[])
 {
     if(x.empty())
     {
         cout << "no member\n";
         return;
     }
     while(!x.empty())
     {
         int k = x.front();
         cout << D[k].name <<endl
            << D[k].fund << endl ;
        x.pop();
     }
 }
