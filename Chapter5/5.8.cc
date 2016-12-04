#include<iostream>
int main()
{
    using namespace std;

    cout << "The Amazing Accounto will sum and average";
    cout <<"five numbers to you !\n";
    cout << "Please Enter the value:\n";
    double number ;
    double sum = 0.0 ;
    for(int i = 0u; i < 5 ; ++i)
    {
        cout <<"Value "<< i << ":" ;
        cin >> number ;
        sum += number ;
    }

    cout << "Five exquisite choices indeed ! Tey sum to " << sum
         << endl <<"and averange to " << sum / 5 <<endl
         <<"The amazing Account bids you adieu!" << endl;

    return 0 ;
}
