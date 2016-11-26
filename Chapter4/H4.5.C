#include<iostream>
using namespace std;
struct CandyBar{
	string brand;
	double weight;
	long calories;
};
int main()
{
	CandyBar snack = { "Mocha Munch",2.3,350};
	cout << "Now you can see the snack :" << endl ;
	cout << "Brand : " << snack.brand << endl;
	cout << "Weight = " << snack.weight << " pounds.\n";
	cout << "Eat a " << snack.brand << " ,you will have " << snack.calories << " calories!\n";
	return 0;
}
