//动态存储 struct
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
	Pisa *P = new Pisa;
	cout << "The dia:";
	cin >> P->dia;
	cin.get();//注意回车字符会被getline(cin,P->company);读取
	cout << "Now input the pisa company：";
	getline(cin,P->company);

	cout << "The weight:" ;
	cin >> P->pound ;

	cout << "\n\nNow Optput :\n";
	cout << "There is a  pisa form " << P->company
		<< ".\nIt dia is " << P->dia << ", And "
		<<P->pound << " pound weight.";
	delete P;
	return 0 ;
}
