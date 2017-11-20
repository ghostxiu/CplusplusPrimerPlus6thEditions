//Changed by Ghostxiu 2017/11/17
//原书程序清单16.3 内容
//string类 使用字符串
//find() 方法

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cctype>

using std::string ;

const int NUM = 26 ;

const string wordlist[NUM] = { "apiary" , "bettle" , "cereal" , "danger" ,"ensign" ,
		"florid" , "garage" , "health" ,  "insult" , "jackl", "keeper" , "loaner" ,
		"manage" , "nonce" , "onset" , "plaid" , "quilt" ,"remote" , "stolid" , "train"
		"useful" , "vaild" , "whence", "xenon" , "yearn" , "zippy"};


int main()
{
	using std::cin;
	using std::cout ;
	using std::tolower;
	using std::endl ;
	std::srand(time(nullptr));
	char play ;

	cout << "Will you play a word game? <y/n> ";
	cin >> play ;
	play = tolower(play);

	while (play == 'y')
	{
		string  target = wordlist[std::rand() %NUM];
		int length = target.length();
		string attempt(length,'-');
		string badchars ;
		int guesses = 6 ;
		cout << "Guess my secret word. It has " << length
			 << " letters, and you guess\n"
			 << "one letter at a time. You get " << guesses
			 << " wrong guess.\n";
		cout << "Your word: " << attempt << endl ;
		while(guesses > 0 && attempt != target)
		{
			char letter ;
			cout << "Guess a letter: " ;
			cin >> letter ;
			if(badchars.find(letter) != string::npos
				|| attempt.find(letter) != string::npos )
			{
				cout << "You already that.Try again!\n";
				continue;
			}
			int loc = target.find(letter);
			if( loc == string::npos)
			{
				cout << "Oh, bad guess!\n";
				--guesses;
				badchars += letter;
			}
			else
			{
				cout << "Good guess!\n";
				attempt[loc] = letter ;
				loc = target.find(letter,loc + 1);
				while( loc != string::npos)
				{
					attempt[loc] = letter ;
					loc = target.find(letter,loc + 1) ;
				}
			}
			cout << "Your  word: " << attempt << endl ;
			if(attempt != target)
			{
				if(badchars.length() > 0 )
				{
					cout << "Bad choices: " << badchars << endl ;
				}
				cout << guesses << " bad guesses left\n";
			}
		}
		if(guesses > 0)
		{
			cout << "That's right!\n";
		}
		else
		{
			cout << "Sorry, the word is " << target << ".\n";
		}
		cout << "Will you play another? <y/n> ";
		cin >> play ;
		play = towlower(play);
	}
	cout << "Bye\n";
	return 0;
}


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
