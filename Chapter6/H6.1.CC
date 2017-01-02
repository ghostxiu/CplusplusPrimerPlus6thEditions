//接受键盘的输入，遇大写转小写，遇小写转大写，遇数字忽略，遇@结束
#include<iostream>
#include<cctype>
using namespace std ;
int main()
{
    char ch ;
    while(cin.get(ch) && ch != '@')
    {
        if(isdigit(ch))
        {
            continue;
        }
        else if (islower(ch))
        {
            ch = toupper(ch);
        }
        else if (isupper(ch))
        {
            ch = tolower(ch);
        }
        cout << ch ;
    }
    return 0;
}
