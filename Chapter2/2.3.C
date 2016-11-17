#include<iostream>
//getinfo.C
int main ()
{
   using namespace std ;
   int carrots ;
   cout << "How many carrots do you have ? \n";
   cin >> carrots;
   cout << "Here are two more.\n";
   carrots = carrots +2 ;
   //the next line concatennates output
   cout <<"Now you have "<< carrots << " carrots ."<<endl;
   return 0;
}
