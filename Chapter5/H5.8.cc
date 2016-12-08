#include<iostream>
#include<cstring>
int main()
{
	using namespace std ;
	cout << "Enter words (to stop ,type the word done) : " ;
	char x[20];
	int count = 0 ;
	while ( cin >> x , strcmp(x,"done"))
	{
		++count ;
	}
	cout << "You entered a total of "<< count << " words."<<endl;

}
/* function of strcmp():
cstring 里面 strcmp() 方法的用法
<0	the first character that does not match
has a lower value in ptr1 than in ptr2
0	the contents of both strings are equal
>0	the first character that does not
 match has a greater value in ptr1 than in ptr2
*/
