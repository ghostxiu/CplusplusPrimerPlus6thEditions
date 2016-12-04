#include<iostream>
int main()
{
    using namespace std ;
    int ch ;//should be int ,not be char
    int count = 0 ;
    while((ch = cin.get()) != EOF)//!=的优先级大于等号
    {
        cout.put(char(ch));
        count++;
    }
    cout << endl << count << " characters read\n";
    return    0;

}
