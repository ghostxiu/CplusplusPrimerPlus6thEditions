#include<iostream>

#if(0)
void simon(int);//function protype for simon()

int main()
{
    using namespace std ;
    simon(3);//call the simon();
    cout << "Pick an integer : ";
    int count;
    cin >> count;
    simon(count);//call it again
    cout<<"Done !\n";
    return 0;

}

void simon ( int n)
{
    using namespace std ;
    cout << "Simon says touch your toes "
         << n
         <<" times"
         <<endl;
}
#endif
void simon ( int n)
{
    using namespace std ;
    cout << "Simon says touch your toes "
         << n
         <<" times"
         <<endl;
}
int main()
{
    using namespace std ;
    simon(3);//call the simon();
    cout << "Pick an integer : ";
    int count;
    cin >> count;
    simon(count);//call it again
    cout<<"Done !\n";
    return 0;

}
