//用cin 和 cout 来传输struct 的值
#include<iostream>
#include<string>
using namespace std ;
struct Pisa{
	string company;
	float dia;
	double pound;
};
int main()
{
	Pisa P;
	cout << "Now input the pisa company：";
	getline(cin,P.company);
	cout << "The dia:";
	cin >> P.dia;
	cout << "The weight:" ;
	cin >> P.pound ;

	cout << "\n\nNow Optput :\n";
	cout << "There is a  pisa form " << P.company
		<< ".\nIt dia is " << P.dia << ", And "
		<<P.pound << " pound weight.";

	return 0 ;
}
