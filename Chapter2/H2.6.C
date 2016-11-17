#include<iostream>
//将光年转化为天文单位 1 光年 = 63240 天文单位
double asttoli( double astro )
{
    return astro*63240.0;

}

int main()
{
    using namespace std ;
    double light;
    cout << "Enter the number of light years: ";
    cin >> light ;
    double astronomical = asttoli(light);
    cout << light
         << " light years = "
         << astronomical
         << " astronomical units.\n";
    cin.get();
    cin.get();
}
