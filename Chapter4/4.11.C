//a simple  struct
#include<iostream>
struct infaltable{
    char name[20];
    float volume ;
    double price;
};

int main()
{
    using namespace std;
    infaltable guest =  {
        "Glorious Floria", //bame value
        1.88 , // volume value
        29.9 // price value
    };
    //guest is structrue variable of type inflatable
    //It`s initialized to indicated values
    infaltable pal =
    {
        "Audacious Arthur",
        3.12,
        39.9
    };

    cout << "Expand you guest list with " << guest.name
         <<" and " << pal.name <<"!\n" ;
    cout << "You can have both for $:"
         << guest.price+pal.price << " !\n";

        return 0;
    }
//在程序中使用结构
