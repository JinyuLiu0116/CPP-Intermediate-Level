#include<iostream>
#include<sstream>
using namespace std;
class BankAccount {
	int accountNumber;
	string accountHolderName;
	double Balance;
public:
	BankAccount():accountNumber(0),accountHolderName(""),Balance(0.0){}
	BankAccount(int number, string holderName, double balance);
	int getAccountNumber() const { return accountNumber; }
	string getAccountHolderName() const { return accountHolderName; }
	double checkBAlance() const { return Balance; }
	void setAccountNumber(int number);
	void setAccountHolderName(string holderName);
	void setBalance(double balance);
	virtual void deposit(double amount)=0;
	virtual void withdraw(double amount)=0;
	virtual string displayAccountInfo()=0;
};
class SavingAccount:public BankAccount {
	double interestRate;
public:
	SavingAccount():BankAccount(), interestRate(0.0){}
	SavingAccount(int number, string holderName, double balance, double rate)
		:BankAccount(number, holderName, balance) {
		this->setInterestRate(rate);
	}
	double getInterestRate() const { return this->interestRate; }
	void setInterestRate(double rate);
	virtual void deposit(double amount) override = 0;
	virtual void withdraw(double amount) override = 0;
	virtual string displayAccountInfo() override = 0;
};
int main() {

}
void SavingAccount::setInterestRate(double rate) {
	if (rate < 0)
		throw invalid_argument("Interest rate cannot be negative!");
	else
		this->interestRate = rate;
}

BankAccount::BankAccount(int number, string holderName, double balance) {
	this->setAccountNumber(number);
	this->setAccountHolderName(holderName);
	this->setBalance(balance);
}
void BankAccount::setAccountNumber(int number) {
	if (number <= 0)
		throw invalid_argument("Account number cannot be zeor or negative!");
	else
		this->accountNumber = number;
}
void BankAccount::setAccountHolderName(string holderName) {
	if (holderName.empty())
		throw invalid_argument("Holder name cannot be empty!");
	else
		this->accountHolderName = holderName;
}
void BankAccount::setBalance(double balance) {
	if (balance < 0)
		throw invalid_argument("Balance cannot be negative!");
	else
		this->Balance = balance;
}