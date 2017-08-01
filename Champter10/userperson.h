#include "person.h"
void Person::Show() const
{
	using namespace std ;
	cout << "\n\nShow way 1 ,name:\n";
	cout << fname << "  " << lname << endl ;
}

void Person::FormalShow() const
{
	using namespace std ;
	cout << "\nShow way 2 ,name:\n";
	cout << lname << "," << fname << endl;
}
