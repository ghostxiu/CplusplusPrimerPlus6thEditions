#include "move.h"

Move::Move ( double a, double b )
{
	x = a ;
	y = b ;
}

Move::~Move()
{
	std::cout << "Memory is freeing!\n" << std::endl;
}

void Move::showmove (std::string & s ) const
{
	std::cout << "\n\n\nNow show move the values:\n";
	std::cout << s ;
	std::cout << " x = " << x << ", y = " << y << std::endl;
}

Move Move::add ( const  Move & m ) const
{
	double new_x = x + m.x ;
	double new_y = y + m.y ;
	Move new_m ( new_x, new_y );
	return new_m;
}

void Move::reset ( double a, double b  )
{
	x = a ;
	y = b ;
}
