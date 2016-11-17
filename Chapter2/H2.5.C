#include<iostream>
//将摄氏温度转化为华氏
double celtofah( double cels)
{
    return 1.8*cels + 32.0 ;
}
int main ()
{
    using namespace std;
    double celsius ;
    cout << "Please enter a Celsius value : ";
    cin >> celsius;
    double fahrenheit = celtofah(celsius);
    cout << celsius
         << " degrees Celsius is "
         << fahrenheit
         << " degrees Fahrenheit ."
         <<endl;
    cin.get();
    cin.get();
    return 0;

}
