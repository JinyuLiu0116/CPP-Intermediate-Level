#include<iostream>
#include<sstream>
#include<ctime>
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
	void deposit(double amount);
	void withdraw(double amount);
	virtual string displayAccountInfo() = 0;
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
	virtual string displayAccountInfo() override = 0;
};
void setAccount(int& num, string& name, double& balance, double& rate);
int main() {
	try{
		char check = 'y';
		string name;
		int number=0;
		double balance = 0, rate = 0;
		setAccount(number, name, balance, rate);
		BankAccount account = new SavingAccount(number, name, balance, rate);
		do{
		}while(check == 'y');

		delete account;
	}catch(const invalid_argument e){
		cerr << "Exception:" << e.what() << endl;
	}
}

void setAccount(int& num, string& name, double& balance, double& rate){
	cout<<"Welcom to ### bank\n";
	while(name.empty()){
		cout<<"Please enter your first name:";
		cin.ignore();
		getline(cin,name);
	}
	srand(time(NULL));
	int array[16];
	for(int i = 0; i < 16; i++){
		array[i] = rand()%10;
		num = num*10 + array[i];
	}
	while(balance <= 0){
		cout<<"Set your balance:";
		cin>>balance;
	}
	while(rate <= 0){
		cout<<"Set your rate:";
		cin>>rate;
	}
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
void BankAccount::deposit(double amount){
	if(amount < 0)
		throw invalid_argument("Cannot deposit negative number of money!");
	else
		this->setBalance(this->getBalance() + amount);
}
void BankAccount::withdraw(double amount){
	if(amount >= 0 && this->getBalance() < amount)
		throw invalid_argumen("You don't have enough money!");
	else
		this-setBalance(this->getBalance() - amount);
	
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
