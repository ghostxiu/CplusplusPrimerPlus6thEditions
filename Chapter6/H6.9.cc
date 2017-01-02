//6.6从文件中读取
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<queue>
using namespace std ;

struct Donate{
    string name ;
    double fund;
};

 void PushDonate(queue<int> x,Donate D[]);

int main()
{
    cout << "Now open the donate.txt\n";
    string filename = "donate.txt";
    ifstream inFile;
    inFile.open(filename);
    int n ;
    inFile >> n ;
    Donate *D = new Donate[n];
    int k = 0 ;

    queue<int> grand;
    queue<int> normal;

    while(n-k)
    {
        inFile >> D[k].name;
        inFile >> D[k].fund;
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
