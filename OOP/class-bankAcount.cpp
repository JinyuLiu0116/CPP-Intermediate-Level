#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	string accountNumber;
	string accountHolderName;
	double balance;
public:
	BankAccount(string accNum, string holderName, double bal) {
		accountHolderName = accNum;
		accountHolderName = holderName;
		balance = bal;
	}
	void deposit(double amount);
	void withdraw(double amount);
	void display();
};
int main()
{	
	BankAccount myAccount("123456879", "Bro Pizza", 5000);
	myAccount.display();
	myAccount.withdraw(500);
	myAccount.display();
	myAccount.deposit(1000);
	myAccount.display();

}
void BankAccount::deposit(double amount) 
{
	balance += amount;
}
void BankAccount::withdraw(double amount)
{
	if (balance < amount) {
		cout << "You don't have enough money for withdraw.";
		exit(1);
	}
	else
		balance - +amount;
}
void BankAccount::display()
{
	cout << "Account number: " << accountNumber << endl;
	cout << "Account holder: " << accountHolderName << endl;
	cout << "Account balance: " << balance << endl;
}
