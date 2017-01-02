//读取单词并判断是否以元音开头
#include<iostream>
#include<string>
const int size = 100 ;
using namespace std ;
bool isvowel(char s[]);
int main()
{
    char *s = new char[size];
    int vo = 0 , co = 0 , ot = 0;
    cout << "Please enter ,and quit with q:";
    while(cin >> s && s[0] != 'q')
    {
        if(isalpha(s[0]))
        {
            if(isvowel(s))
            {
                vo++ ;
            }
            else
            {
                co++ ;
            }
        }
        else
        {
            ot++;
        }
    }
    cout << vo << " words begin with vowels.\n";
    cout << co << " words begin with consonants.\n";
    cout << ot << " others.\n";
    return 0;
}
bool isvowel(char s[])
{
    if(s[0] == 'a' || s[0] == 'e' || s[0] == 'i'
       || s[0] == 'i'
       || s[0] == 'o' || s[0] == 'u')
    {
        return true;
    }
    return false;
}
//拓展：重载string
