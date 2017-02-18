//求调和平均数
#include<iostream>
double att_av(int nu_a , int nu_b);
int main()
{
	using namespace std ;
	int num_a , num_b ;
	cout << "Please enter two number:" ;
	while((cin >> num_a >> num_b),num_a != 0 && num_b != 0)
	{
		double result = att_av(num_a,num_b);
		cout << "result : " << result  << endl ;
		cout << "Please enter two number( 0 to quit ):" ;
	}

	return 0 ;

}

double att_av(int x , int y)
{
	double re = 2.0 * x * y /(x + y) ;
	return re ;
}
