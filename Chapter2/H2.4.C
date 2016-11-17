#include<iostream>
//让用户输入其年龄，输出该年龄包含多少个月
int main ()
{
    using namespace std ;
    int age ;
    cout << "Enter your age : ";
    cin >> age;
    //int mon = age *12;
    cout << "There is "
         << age *12
         <<" month in your age "
         << age
         << endl;
    cin.get();
    cin.get();
    return 0;

}
