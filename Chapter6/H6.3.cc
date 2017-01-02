#include<iostream>
bool ErrChoice(char ch);
int main()
{
    using namespace std ;
    cout << "Please enter one of the following choice:\n";
    cout << "c)carnivore\tp)pianist\nt)tree\tg)game\n";

    char ch ;
    cin >> ch;
    while(ErrChoice(ch))
    {
        cout << "Please enter a c,p,t,g:\n";
        cin >> ch ;
    }
    switch(ch)
    {
        case 'c':cout << "There is a dragonfly in the sky\n";break;
        case 'p':cout << "1,2,3,4 fly between fingers\n";break;
        case 't':cout << "There are many apple on the tree\n 1\t 2\n 3\t 4\n.."<<endl;break;
        case 'g':cout << "Game is nothing,please study !"<<endl;break;
    }
    return 0 ;
}
bool ErrChoice(char ch)
{
    if(ch == 'c' || ch == 'p' || ch == 't'
       || ch == 'g')
    {
        return false ;
    }
    else
    {
        return true;
    }
}
