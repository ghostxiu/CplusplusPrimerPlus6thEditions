#include<iostream>
int main()
{
    using namespace std ;
    const int ch_ft = 12 ;
    int inch, high , footer ;

    cout << "Please Enter the height of you in inchs:___\b\b\b";
    cin >> high ;
    inch = high % ch_ft ;
    footer = high / ch_ft ;
    cout << "You are " << footer << " footers and "
         << inch << " inchs.\n";

    cin.get();
    cin.get();
    return 0;
}
