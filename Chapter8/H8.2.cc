//引用和尽量使用const
#include<iostream>
const int Size = 20 ;
struct CandyBar
{
	char *band;
	double weight ;
	int calories;
};
typedef CandyBar cb;

using namespace std ;

void fill_candy(cb &C,char *s , double w ,int c );
void show_candy(const cb & C );

int main()
{
	cb C;
	char *s =  new char[Size];
	s = "Millennium Munch";
	double weight = 2.85 ;
	int calories = 350 ;
	fill_candy(C,s,weight,calories);
	show_candy(C);
	delete [] s;
	return 0 ;
}

void fill_candy(cb &C,char * s , double w ,int c )
{
	C.band = s ;
	C.weight = w ;
	C.calories = c;
	cout << "Fill Candy Bar OK!" <<endl ;
}

void show_candy( const cb & C )
{
	cout  << "Now show the candy bar:\n";
	cout << "band : " << C.band << endl;
	cout << "weight : " << C.weight << endl;
	cout << "calories : " << C.calories << endl ;
}
