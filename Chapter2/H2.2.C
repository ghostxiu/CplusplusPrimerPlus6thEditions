#include<iostream>
//要求用户输入一个以long为单位的距离，然后将它转为码，一long为220码
long longtoyd( int l )
{
    return l*220;
}
int main()
{
    using namespace std;
    long l ;
    cout << "Please input the distance of Long：";
    cin >> l;
    long yards = longtoyd(l);
    cout << l
         << " long = "
         << yards
         << " yards \n";
    cin.get();
    cin.get();
    return 0;

}
