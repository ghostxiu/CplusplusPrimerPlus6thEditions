//结构与函数
#include<iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(box  B );
void box_vol(box * B );

int main()
{
	box B1 = {"Fuljie",10.2,8.3,6.3};
	box_vol(&B1);
	show_box(B1);
	return 0 ;
}

void show_box ( box  B)
{
	using namespace std ;
	cout << "Now  show the info of the box:\n";
	cout << "Brand : " << B.maker << endl ;
	cout << "Length : " << B.length << endl ;
	cout << "Width : " << B.width << endl ;
	cout << "Height : " << B.height << endl ;
	cout << "Volume : " << B.volume << endl ;
}

void box_vol(box * B )
{
	B -> volume = B -> length * B -> width * B -> height ;
}
