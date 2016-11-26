//using new with a struct
#include<iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std ;
    inflatable * ps = new inflatable;
    cout << "Enter a name of inflatable:" ;
    cin.get(ps->name,20);//method 1 for memeber success
    cout << "Enter volume in cubic volume :";
    cin >> (*ps).volume ;//method 2 for memeber success
    cout << "Enter price:";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;//method 2
    cout << "Volume: " << ps->volume << " cubic feet\n" ;//method 1
    cout << "Price: " << ps->price << "$";
    delete ps ;//»ØÊÕ¿Õ¼ä

    return 0 ;
}
