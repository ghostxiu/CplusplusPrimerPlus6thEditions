//assigin structures
#include<iostream>
struct infaltable{
    char name[20];
    float volume ;
    double price;
    };
int main()
{
    using namespace std;
    infaltable bouquet { "sunflower",1.99,8.0};
    infaltable choice ;

    cout << "bouquet :"<<bouquet.name << " for $ "
        << bouquet.price << ".\n";
    choice = bouquet;
    cout << "choice :"<<choice.name << "for $ "
        << choice.price << ".\n";
    //注意不能用 choice.name = bouquet.name8

}
//struct的赋值
