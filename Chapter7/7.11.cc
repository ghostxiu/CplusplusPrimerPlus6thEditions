//传递和返回结构
#include<iostream>
struct travel_time
{
	int hours;
	int mins;
};
const int Mins_per_hr = 60 ;

travel_time sum( travel_time t1 , travel_time t2 );
void show_time( travel_time t , std::string s);//or use char * s

int main()
{
	travel_time day1 ={5,45};
	travel_time day2 = {4,48};
	travel_time total = sum(day1,day2);
	show_time(total,"Two-day total time");

	travel_time day3 = {6,29};
	show_time(sum(total,day3),"Three-day total time");

	return 0 ;
}

travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total ;
	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
	total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr ;
	return total ;
}
void show_time( travel_time t , std::string s)
{
	using namespace std ;
	cout << s << ":" << endl ;
	cout << t.hours << " hours , ";
	cout << t.mins << " mins.\n";
}
