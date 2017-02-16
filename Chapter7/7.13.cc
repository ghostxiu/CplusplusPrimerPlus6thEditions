//传递结构地址
#include<iostream>
#include<cmath>

struct rect
{
	double x ;
	double y ;

};

struct polar
{
	double distance ;
	double angle ;
};

void rect_to_polar (const rect *pxy ,polar *pda );
void show_polar(const polar *pda );

int main()
{

	using namespace std ;
	rect rplace ;
	polar pplace ;

	cout << "Enter the x ande the y values: " ;
	while(cin >> rplace.x >> rplace.y )
	{
		rect_to_polar(&rplace,&pplace);
		show_polar(&pplace);
		cout << "Next two numbers(q to quit): ";
	}
	cout << "Done.\n";
	return 0 ;
}

void rect_to_polar (const rect *pxy ,polar *pda)
{
	using namespace  std ;
	pda->distance =
		sqrt(pow(pxy->x,2.0)+pow(pxy->y,2.0));
	pda->angle =
		atan2(pxy->y,pxy->x);

}

void show_polar( const polar *pda)
{

	using namespace std ;
	const double Rad_to_Deg = 57.29577951 ;


	cout << "distance = " << pda->distance ;
	cout << ", angle = " << pda->angle * Rad_to_Deg ;
	cout << " degrees\n";

}
