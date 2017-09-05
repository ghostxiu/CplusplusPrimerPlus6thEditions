#include"string1.cc"
const int Arsize = 10 ;
const int MaxLen = 81 ;

int main()
{
	using std::endl ;
	String name ;
	cout << "Enter your name:";
	cin >> name;
	cout << name << " , please enter up to :" <<Arsize
		<< " short sayings <empty line to quit>:\n";
	String Sayings[Arsize];
	char temp[MaxLen];
	int i ;
	for(i = 0; i < Arsize ; ++i)
	{
		cout << i+1 << ":";
		cin.get(temp,MaxLen);
		while(cin &&cin.get()!= '\n')
		{
			continue;
		}
		if(!cin || temp[0] == '\0')
		{
			break;
		}
		else
		{
			Sayings[i] = temp;
		}
	}
	int total = i ;

	if(total > 0)
	{

		cout << "Here are your sayings:\n";
		int shortest = 0 ;
		int first = 0;
		for(i = 0 ; i < total ; ++i)
		{
			cout << Sayings[i][0] << ":" << Sayings[i] <<endl;
			//输出第一个字符：输入

			if(i > 0)
			{
				if(Sayings[i].length() < Sayings[shortest].length())
				{
					shortest = i ;
				}
				if(Sayings[i] < Sayings[first])
				{
					first = i;
				}
			}
		}
		cout << "Shortest saying:\n" <<Sayings[shortest] <<endl;
		cout << "First alphabetically:\n" <<Sayings[first] <<endl;
		cout << "The program used " << String::Howmany()
			<<" String objects.Bye.\n";
	}

	else
	{
		cout <<"No input!\n" <<endl;
	}
	return 0 ;
}
