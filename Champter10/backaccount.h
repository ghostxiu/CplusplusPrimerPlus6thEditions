//程序10.1的头文件
class BankAccount{
private:
	std::string name ;
	std::string card_no;
	double fund;
public:
	BankAccount(){}
	BankAccount(std::string & client ,std::string & num , double money)
	{
		name = client ;
		card_no = num  ;
		fund = money ;
	}
	void showAccount( void ) const
	{
		std::cout << "\nYour bankaccount information fllowing: \n\n";
		std::cout << this->name << " bank card is " << this->card_no <<std::endl ;
		std::cout << "Now have " << this->fund << " dollar money in account.\n";
	}
	void desposit( double mon)
	{

		std::cout << "You desposit " << mon << " dollar money to your account.\n";
		fund += mon;
	}
	void  withdraw( double mon)
	{

		std::cout << "You withdraw " << mon << " dollar money from your account.\n";
		fund -= mon;
	}
	~BankAccount()
	{
            std::cout << "delete BankAccount" << std:: endl ;
	}
};
