//reversing an error
//转置一个string数组
#include<iostream>
#include<string>
int main()
{
    using namespace std ;
    cout << "Enter a word:" << endl ;
    string word;
    cin >> word ;
    for(int j = 0 , i = word.size()-1; j < i; --i,++j)
    {
        int tmp;
        tmp = word[i];
        word[i] = word[j];
        word[j] = tmp ;
    }
    cout << word << endl;
    cout << "Done.\n" ;
    return 0 ;
}
