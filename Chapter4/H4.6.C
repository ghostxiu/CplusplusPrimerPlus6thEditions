//建立并初始化结构体数组
#include<iostream>
using namespace std;
struct CandyBar{
	string brand;
	double weight;
	long calories;
};
int main()
{
	CandyBar snack[3]= { {"Mocha Munch",2.3,350},
	{"White Rabbit",0.15,100},{"Coca-Cola",20,1200}};

	for(int i = 0 ; i < 3 ; i++ )
	{
		cout << "\nNow you can see the snack "<<i+1<<":" << endl ;
		cout << "Brand : " << snack[i].brand << endl;
		cout << "Weight = " << snack[i].weight << " pounds.\n";
		cout << "Eat a " << snack[i].brand << " ,you will have "
		<< snack[i].calories << " calories!\n";
	}
	return 0;
}
