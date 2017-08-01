#include "userperson.h"

int main()
{
	Person one ;
	Person two("Ghostxiu");
	Person three("Ghostxiu","Ray");

	one.Show();
	one.FormalShow();

	two.Show();
	two.FormalShow();

	three.Show();
	three.FormalShow();
	return 0 ;
}
