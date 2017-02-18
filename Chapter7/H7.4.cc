//彩票中奖，改7.4.cc
#include<iostream>
long double probability(unsigned numbers , unsigned picks);
void cout_pro( double re , std::string );

int main()
{
	using namespace std ;
	double total_1 = 47 , choices_1 = 5;
	double total_2 = 27 , choices_2 = 1;
	long double r1,r2  ;

	r1 = probability(total_1 ,choices_1) ;
	r2 = probability(total_2 ,choices_2) ;

	cout_pro(r1,"In 47->5 game:");
	cout_pro(r2,"In 27->1 game:");
	cout_pro(r2*r1,"In total game:");
	cout << "bye\n";
	return 0 ;
}

void cout_pro( double re ,std::string s)
{
	using namespace std ;
	cout << std::fixed << s << endl ;
	//std::fixed 不使用科学计数法
	cout << "\nYou have one chance in " ;
	cout << re ;
	cout << " of winning.\n\n\n" ;
}

long double probability(unsigned numbers , unsigned picks)
{
	long double result = 1.0 ;
	long double n ;
	unsigned p ;
	for ( n = numbers ,p = picks ;p > 0 ;n-- ,p-- )
	{
		result = result * n / p ;
	}
	return result ;
}
