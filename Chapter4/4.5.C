//reading more than one word  get（）

#include<iostream>
using namespace std;
int main()
{
    const int ArSize = 20 ;
    char name[ArSize] ;
    char dessert[ArSize] ;


    cout << "Please enter your name:\n";
    cin.get(name,ArSize).get();//using cin.get() to start a new line
    cout << "Then enter your favorite dessert:\n";
    cin.get(dessert,ArSize);

    cout << "I have some delicious " << dessert
         << " for you , " << name << endl;
    return 0;
    }
//与getline的区别，不舍弃换行符
