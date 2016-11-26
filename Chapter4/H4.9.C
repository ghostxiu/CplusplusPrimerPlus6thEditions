//建立并初始化结构体数组，用动态方法实现
#include<iostream>
using namespace std;
struct CandyBar{
	string brand;
	double weight;
	long calories;
};
int main()
{
	CandyBar *snack = new CandyBar[3];
	snack[0] = {"Mocha Munch",2.3,350};
	snack[1] = {"White Rabbit",0.15,100};
	snack[2] = {"Coca-Cola",20,1200};

	for(int i = 0 ; i < 3 ; i++ )
	{
		cout << "\nNow you can see the snack "<<i+1<<":" << endl ;
		cout << "Brand : " << snack[i].brand << endl;
		cout << "Weight = " << snack[i].weight << " pounds.\n";
		cout << "Eat a " << snack[i].brand << " ,you will have "
		<< snack[i].calories << " calories!\n";
	}
	delete [] snack ;//回收空间
	return 0;
}
