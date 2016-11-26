//using points to block of 10 ints
#include<iostream>
#include<cstring>//declare strlen(),strcpy()
int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char * bird = "wren" ;
    //字符串的字面值是常量，所以此处使用const
    //可用bird访问，但是不能修改它
    char *ps ;

    cout << animal << " and " ;
    cout << bird << endl;

    //cout << ps << endl ;//may display garbage , may cause a cash

    cout << "Enter a kind of animal: ";//set ps to point to sting
    cin >> animal ;
    //cin >> ps ; //too horrible  a blunder to try ;
    //ps dosent point to allocated space

    ps = animal ; //set ps to point to string
    cout << ps << endl ;//OK ，same as using animal
    cout << "Before using strcpy():"<<endl;
    cout << animal << " at " << (int *) animal << endl ;
    cout << ps << " at " <<(int *) ps << endl ;

    ps = new char[strlen(animal)+1];//get new storage
    //输出的字符串不能填满空间，strlen确定字符串长度
    //用原长度+1空字符长度来申请新空间
    strcpy(ps,animal);//copy string to new adress
    cout <<"After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << &ps << endl;
    //使用strcpy()和new()，将获得 输入两个animal的副本



    return 0;
}
/*在cout和多数C++表达式中，char数组名、char指针以及用
引号括起的字符串常量都被解释为字符串的第一字符的地址
*/
/*
1.有些编译器强字符串的字面值视为只读常量，
试图修改将导致运行阶段错误。C++视为常量
2.有些编译器只用字符串字面值的一个副本来
表示程序中所有的该字面值。
*/

//caution：要使用strcpy()或strncpy()，而不是赋值运算符将字符串赋给数组


