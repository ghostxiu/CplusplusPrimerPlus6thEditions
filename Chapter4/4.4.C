//reading more than one word with getline()
//getline()函数读取整行，它使用沟通过回车键输入的换行符来确定输入的结尾
#include<iostream>
using namespace std;
int main()
{
    const int ArSize = 20 ;
    char name[ArSize] ;
    char dessert[ArSize] ;


    cout << "Please enter your name:\n";
    cin.getline(name,ArSize);
    cout << "Then enter your favorite dessert:\n";
    cin.getline(dessert,ArSize);

    cout << "I have some delicious " << dessert
         << " for you , " << name << endl;
    return 0;
    }
//getline()函数每次读取一行，他通过换行符来确定行尾，
//但不保存换行符。相反，在存储字符串时，
//他用空字符串来替换行尾。

