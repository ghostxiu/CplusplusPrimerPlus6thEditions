//bop会议
//preference = 0 输出名字，=1 输出工作
// =2 输出popname =3 按preference输出

#include<iostream>
const int strsize = 20 ;
const int size = 4;
struct Bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
using namespace std ;

void DisplayMenu();
void DisplayMem(int num ,Bop B[]);

int main()
{
    Bop B[size]={"Wimp Macho","Programmer","WM",0,
    "Raki Rhodes" ,"Arter" ,"Rk" ,2,
    "Celia Laiter", "Database Manager","Celaer",1,
    "Hoppy Hipman","Data seller","HP",2};
    DisplayMenu();
    char ch ;
    int num;
    while(cin >> ch)
    {
        switch(ch)
        {
            case 'a':num =0;DisplayMem(num,B);break;
            case 'b':num =1;DisplayMem(num,B);break;
            case 'c':num =2;DisplayMem(num,B);break;
            case 'd':num =3;DisplayMem(num,B);break;
            case 'q':cout << "Program is quit!\n";num = 4 ;break;
            default : cout <<"Error!\n";
        }
        if(num == 4)
        {
            break;
        }

        cout <<"\n\n\nNext Choice:\n";
    }
    return 0 ;
}
void DisplayMem(int num ,Bop B[])
{
    //选择输出Bop的菜单
    for(int i = 0 ; i < size ; ++i)
    {
        if(num == 0)
        {
            cout << B[i].fullname<<endl;
        }
        else if(num == 1)
        {
            cout << B[i].title << endl ;
        }
        else if(num == 2)
        {
            cout << B[i].bopname<< endl;
        }
        else
        {
            switch(B[i].preference)
            {
                case 0:cout << B[i].fullname<<endl;break;
                case 1:cout << B[i].title << endl ;break;
                case 2:cout << B[i].bopname << endl ;
            }
        }
    }

}
void DisplayMenu()
{
    //输出菜单
    cout << "Beneveolent Order of Progaemmers Report:\n"
        << "a.dislplay by name\tb.display by title\n"
        << "c.display by bopname\td.display by preference\n";
}
