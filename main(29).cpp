#include <iostream>
#include "BankAccount.h"

using namespace std;

int BankAccount::accountCounter = 1064;

int main() 
{
	BankAccount *b = new BankAccount();
	cout << "bank account 1" << endl;
	cout << "account number: " << b->getAccountNumber() << endl;
	cout << "balance: " << b->getBalance() << endl;
	b-> depositMoney(420.69);
	cout << "balance: " << b->getBalance() << endl;
	
	BankAccount *b2 = new BankAccount(9000);
	cout << "bank account 2" << endl;
	cout << "account number: " << b2->getAccountNumber() << endl;
	cout << "balance: " << b2->getBalance() << endl;
	b2-> retrieveMoney(420.69);
	cout << "balance: " << b2->getBalance() << endl;
	
	BankAccount *b3 = new BankAccount(100);
	cout << "bank account 3" << endl;
	cout << "account number: " << b3->getAccountNumber() << endl;
	cout << "balance: " << b3->getBalance() << endl;
	b3-> retrieveMoney(10);
	cout << "balance: " << b3->getBalance() << endl;
	
  return 0;
}