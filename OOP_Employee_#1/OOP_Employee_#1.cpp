#include <iostream>
using namespace std;

class AbstractEmployee {
	virtual void AskForPromotion()=0;
};

class Employee : AbstractEmployee {
	string name;
	string company;
	int tenure;
public:
	Employee(string, string, int);
	void introduce();
	string getName();
	string getCompany();
	int getTenure();
	void setName(string name);
	void setCompany(string company);
	void setTenure(int tenure);
	void AskForPromotion();
};

int main()
{
	Employee employee1("Jojo", "LaGuardia", 2);
	employee1.introduce();
	employee1.AskForPromotion();

	Employee employee2("Coke", "BMCC", 5);
	employee2.introduce();
	employee2.AskForPromotion();

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

Employee::Employee(string na, string co, int te) {
	setName(na);
	setCompany(co);
	setTenure(te);
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


