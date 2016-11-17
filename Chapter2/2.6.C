#include<iostream>
//将英石转化为英镑
int stonetolb(int sts)
{
    return 14 * sts;
}
int main()
{
    using namespace std;
    int stone ;
    cout << "Enter the weight in stone : ";
    cin >> stone ;
    int pounds = stonetolb(stone);
    cout<<stone<<" Stone = "
        <<pounds<<" Pounds \n";
    cin.get();
    cin.get();
    return 0;


}
