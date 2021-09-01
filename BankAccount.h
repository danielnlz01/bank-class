class BankAccount
{
	private:
		double balance;
		int accountNumber;
		
	public:
		BankAccount();
		BankAccount(double balance);
		~BankAccount();
		
		static int accountCounter; //belong to classes but not to objects
		
		double getBalance();
		int getAccountNumber();
		
		void setBalance(double amount);
		void depositMoney(double amount);
		void retrieveMoney(double amount);
};

BankAccount::BankAccount()
{
	this->balance = 0;
	this->accountNumber = accountCounter;
	accountCounter++;
}

BankAccount::BankAccount(double balance)
{
	this->balance = balance;
	this->accountNumber = accountCounter;
	accountCounter++;
}

BankAccount::~BankAccount()
{
	
}

double BankAccount::getBalance()
{
	return this->balance;
}

int BankAccount::getAccountNumber()
{
	return this->accountNumber;
}

void BankAccount::setBalance(double amount)
{
	this->balance = amount;
}

void BankAccount::depositMoney(double amount)
{
	this->balance += amount;
}

void BankAccount::retrieveMoney(double amount)
{
	this->balance -= amount;
}