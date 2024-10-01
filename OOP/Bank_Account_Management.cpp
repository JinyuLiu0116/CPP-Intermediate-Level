#include<iostream>
#include<sstream>
#include<ctime>
#include<cctype>
using namespace std;
class BankAccount {
	const int accountNumber;
	const string accountHolderName;
	double Balance;
public:
	BankAccount():accountNumber(0),accountHolderName(""),Balance(0.0){}
	BankAccount(int number, string holderName, double balance);
	int getAccountNumber() const { return accountNumber; }
	string getAccountHolderName() const { return accountHolderName; }
	double checkBAlance() const { return Balance; }
	void setAccountNumber(const int& number);
	void setAccountHolderName(const string& holderName);
	void setBalance(const double& balance);
	void deposit(const double& amount);
	void withdraw(const double& amount);
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
	double getInterest() const;
	void setInterestRate(double rate);
	virtual string displayAccountInfo() override = 0;
};
void setAccount(int& num, string& name, double& balance, double& rate);
void chcekName(const string& name);
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

void chcekName(const string& name){
	for(auto it: name){
		if(isalphat(name)==0)
			throw invalid_argument("First name can only contain alphatbats");
	}
}
void setAccount(int& num, string& name, double& balance, double& rate){
	cout<<"Welcom to ### bank\n";
	string first,laset;
	try{
		cout<<"Please enter your first name:";
		cin>>first;
		checkName(first);
		cout<<"Please enter your last name:";
		cin>>last;
		checkName(last);
	}catch(const invalid_argumen& e){
		cerr<<"Exception:"<<e.what()<<endl;
	}
	name=first+" "+last;
	
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
void SavingAccount::setInterestRate(const double& rate) {
	if (rate < 0)
		throw invalid_argument("Interest rate cannot be negative!");
	else
		this->interestRate = rate;
}
double SavingAccount::getInterest() const {
	return this->getBalance()*this->getInterestRate();
}
BankAccount::BankAccount(int number, string holderName, double balance) {
	this->setAccountNumber(number);
	this->setAccountHolderName(holderName);
	this->setBalance(balance);
}
void BankAccount::deposit(const double& amount){
	if(amount < 0)
		throw invalid_argument("Cannot deposit negative number of money!");
	else
		this->setBalance(this->getBalance() + amount);
}
void BankAccount::withdraw(const double& amount){
	if(amount >= 0 && this->getBalance() < amount)
		throw invalid_argumen("You don't have enough money!");
	else
		this-setBalance(this->getBalance() - amount);
	
}
void BankAccount::setAccountNumber(const int& number) {
	if (number <= 0)
		throw invalid_argument("Account number cannot be zeor or negative!");
	else
		this->accountNumber = number;
}
void BankAccount::setAccountHolderName(const string& holderName) {
	if (holderName.empty())
		throw invalid_argument("Holder name cannot be empty!");
	else
		this->accountHolderName = holderName;
}
void BankAccount::setBalance(const double& balance) {
	if (balance < 0)
		throw invalid_argument("Balance cannot be negative!");
	else
		this->Balance = balance;
}
