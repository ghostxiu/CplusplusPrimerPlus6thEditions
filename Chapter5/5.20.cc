#include<iostream>
const int Cities = 5 ;
const int Years = 4 ;
int main()
{
    using namespace std ;
    const char * cities[Cities ] =
    {
        "HangZhou",
        "LanZhou",
        "LinTao",
        "Baiyin",
        "YanTai"
    };


    int maxtemps[Years][Cities] =
    {
        {96,100,87,101,70},//values of maxtemps[0]
        {105,50,56,121,52},
        {88,99,52,105,15},
        {48,89,52,56,45}
    };

    cout << "Maxium temperatures for 2008 - 2001\n\n";
    for(int city = 0 ; city <Cities ; ++city)
    {
        cout << cities[city] << ":\t";
        for(int year = 0 ; year < Years ; ++year)
        {
            cout << maxtemps[year][city] << "\t";

        }
        cout << endl ;
    }
    //cin.get()
    return 0 ;

}
