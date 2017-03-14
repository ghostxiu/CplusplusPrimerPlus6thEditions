#include<iostream>
#include<cstring>

const int Size = 2 ;
struct chaff
{
	char dross[20];
	int slag;
};
const int BUFF = 128;
char buffer[BUFF];
void coutchaff(const chaff & c);

#if(0)
//常规new
int main()
{
	chaff *C = new chaff[2];
	strcpy(C[1].dross,"ppplgsvc");
	strcpy(C[0].dross,"dddtpsc");
	C[0].slag = 0 ;
	C[1].slag = 1;
	std::cout << "Out the chaff:\n";
	for(int i = 0 ; i < Size ; ++i)
	{
		coutchaff(C[i]);
	}
	delete C;
	return 0 ;
}
#endif

int main()
{
	chaff *C = new (buffer) chaff[2];
	strcpy(C[1].dross,"ppplgsvc");
	strcpy(C[0].dross,"dddtpsc");
	C[0].slag = 0 ;
	C[1].slag = 1;
	std::cout << "Out the chaff:\n";
	for(int i = 0 ; i < Size ; ++i)
	{
		coutchaff(C[i]);
	}

	return 0 ;
}
 void coutchaff(const chaff & c)
{
	std::cout << "dross : " << c.dross << std::endl;
	std::cout << "slag : " << c.slag << std::endl;
}
