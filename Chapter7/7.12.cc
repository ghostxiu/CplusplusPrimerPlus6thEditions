//一个处理结构函数的示例
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

polar rect_to_polar (rect xypos );
void show_polar(polar dapos);

int main()
{

	using namespace std ;
	rect rplace ;
	polar pplace ;

	cout << "Enter the x ande the y values: " ;
	while(cin >> rplace.x >> rplace.y )
	{
		pplace =  rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers(q to quit): ";
	}
	cout << "Done.\n";
	return 0 ;
}

polar rect_to_polar (rect xypos )
{
	using namespace  std ;
	polar answer ;
	answer.distance =
		sqrt(pow(xypos.x,2.0)+pow(xypos.y,2.0));
	answer.angle =
		atan2(xypos.y,xypos.x);
	return answer ;

}

void show_polar(polar dapos)
{

	using namespace std ;
	const double Rad_to_Deg = 57.29577951 ;


	cout << "distance = " << dapos.distance ;
	cout << ", angle = " << dapos.angle * Rad_to_Deg ;
	cout << " degrees\n";

}
