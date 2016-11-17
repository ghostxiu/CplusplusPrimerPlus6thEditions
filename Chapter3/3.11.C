#include<iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "Interger division: 9/5 = " << 9/5 << endl
         << "Floating-point division : 9.0/5.0 = " << 9.0/5.0 <<endl
         << "Mixed division: 9.0/5 = " << 9.0/5 << endl
         << "double constants: 1e7/9.0 = " << 1e7/9.0 <<endl
         << "float constants: 1e7f/9.0f = " << 1e7f/7.0f << endl ;

    cin.get ();
    cin.get ();
    return 0;
}
