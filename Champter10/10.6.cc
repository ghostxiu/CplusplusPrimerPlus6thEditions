#include<iostream>
#include "use_move.h";
using namespace std ;
int main()
{
	Move a(2,3);
	Move b(6.8,7.2);
	string sa = "Show Move A:";
	string sb = "Show Move B:";
	a.showmove(sa);
	b.showmove(sb);

	cout << "\n\nNow reset Move A to 1.8 , 3.7";
	a.reset(1.8,3.7);
	sa = "Now A is :";
	a.showmove(sa);

	cout << "\n\n Now the Move  A add B , save in Move  C.\n";
	Move c = a.add(b);
	string sc = "Show Move C:";
	c.showmove(sc);

}
