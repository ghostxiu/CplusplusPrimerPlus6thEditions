//10个以下的数组值计算
#include<iostream>
#include<array>
#include<cctype>
using namespace std ;
const int Size = 10 ;
int main()
{
    array<double,Size> arr ;
    char x ;
    int count =  0;
    double avg =  0.0;
    while(cin.get(x) && count < Size && isdigit(x))
    {
        arr[count] = x ;
        avg += x;
        ++count;
    }
    avg /= count ;
    int c = 0 ;
    for(int i = 0 ; i < count ; ++i )
    {
        if(arr[i] > avg )
        {
            ++c;
        }
    }
    cout << "There is the average " << avg
         << " of " << c << " number ,"
         << "\n and there have " << c << " numbers upper than "
         << avg << ".\n" ;
    return 0;
}
