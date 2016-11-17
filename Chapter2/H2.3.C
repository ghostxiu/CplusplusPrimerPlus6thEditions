#include<iostream>
//使用三个用户自定义函数，包括main实现输出
using namespace std ;
void look()
{
    cout << "Three blind mice \n";
}
void resul()
{
    cout << "See how they run \n";
}
int main()
{
    look();
    look();
    resul();
    resul();
    cin.get();
    cin.get();
    return 0;

}
