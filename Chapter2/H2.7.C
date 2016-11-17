#include<iostream>
//输入小时和分钟数，格式化输出
using namespace std ;
void disp( int h, int m)
{
    cout << "Time: " << h << ":" << m << endl;

}
int main ( void )
{
    int hour;
    cout << "Enter the number of hours: ";
    cin >> hour ;
    int minute;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    disp(hour,minute);
    cin.get();
    cin.get();

    return 0 ;
}
