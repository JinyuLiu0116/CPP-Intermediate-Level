#include <iostream>
using namespace std;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee {
	string name;
	string company;
	int tenure;
public:
	Employee(string Name, string Company, int Tenure);
	void introduce();
	string getName();
	string getCompany();
	int getTenure();
	void setName(const string& name);
	void setCompany(const string& company);
	void setTenure(const int& tenure);
	void AskForPromotion();

	void dalyWork();
};

class Developer : public Employee {
	string favProgrammingLanguage;
public:
	Developer(string Name, string Company, int Tenure, string fProLanguage)
		:Employee(Name, Company, Tenure) {
		favProgrammingLanguage = fProLanguage;
	}
	void dalyWork();
	string getLanguage();
};
int main()
{
	Employee employee1("Jojo", "LaGuardia", 2);
	employee1.introduce(); 
	employee1.dalyWork();
	employee1.AskForPromotion();

	Employee employee2("Coke", "BMCC", 5);
	employee2.introduce();
	employee2.dalyWork();
	employee2.AskForPromotion();

	Developer developer1("John Java", "Google", 10, "C++");
	developer1.introduce();
	developer1.dalyWork();
	developer1.AskForPromotion();



}
void Employee::setName(string name) {
	this->name = name;
}
void Employee::setCompany(string company) {
	this->company = company;
}
void Employee::setTenure(int tenure) {
	this->tenure = tenure;
}

Employee::Employee(string Name, string Company, int Tenure) {
	setName(Name);
	setCompany(Company);
	setTenure(Tenure);
}
string Employee::getName() {
	return name;
}
string Employee::getCompany() {
	return company;
}
int Employee::getTenure() {
	return tenure;
}
void Employee::AskForPromotion() {
	if (tenure >= 5)
		cout << name << " got promoted!" << endl;
	else
		cout << name << " sorry, no promotion for you." << endl;
}
void Employee::introduce() {
	cout << "Employee's name: " << getName() << endl;
	cout << "Employee's company: " << getCompany() << endl;
	cout << "Employee's tenure: " << getTenure() << endl;
}
void Employee::dalyWork() {
	cout << getName() << " is working on the daily tasks." << endl;
}
void Developer::dalyWork() {
	cout << getName() << " is coding by using " << getLanguage() << endl;
}
string Developer::getLanguage()
{
	return favProgrammingLanguage;
}



