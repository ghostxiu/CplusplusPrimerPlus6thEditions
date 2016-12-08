#include<iostream>
#include<string>
int main()
{
	using namespace std ;
	cout << "Enter words (to stop ,type the word done) : " ;
	string x;
	int count = 0 ;
	while ( cin >> x , x != "done")
	//while( cin >> x , x.compare("done"))//or use it
	{
		++count ;
	}
	cout << "You entered a total of "<< count << " words."<<endl;

}

/* the function  compare() in string :
string 里面 compare() 方法的用法
0	They compare equal
<0	Either the value of the first character that
does not match is lower in the compared string,
 or all compared characters match but the
 compared string is shorter.
>0	Either the value of the first character that does
 not match is greater in the compared string, or all
  compared characters match but the compared string
  is longer.
*/
