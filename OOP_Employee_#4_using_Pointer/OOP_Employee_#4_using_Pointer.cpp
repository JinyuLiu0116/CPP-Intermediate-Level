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
	virtual void introduce();
	string getName();
	string getCompany();
	int getTenure();
	void setName(string name);
	void setCompany(string company);
	void setTenure(int tenure);
	void AskForPromotion();

	virtual void Work();
};

class Developer : public Employee {
	string favProgrammingLanguage;
public:
	Developer(string Name, string Company, int Tenure, string fProLanguage)
		:Employee(Name, Company, Tenure) {
		favProgrammingLanguage = fProLanguage;
	}
	void Work();
	string getLanguage();
};

class Teacher : public Employee {
	string teach_subject;
public:
	Teacher(string Name, string Company, int Tenure, string subject)
		:Employee(Name, Company, Tenure) {
		teach_subject = subject;
	}
	void Work();
	string getTeach_subject() {
		return teach_subject;
	}
};

class Plumber : public Employee {
	string plumbing_skill;
public:
	Plumber(string Name, string Company, int Tenure, string skill)
		: Employee(Name, Company, Tenure) {
		plumbing_skill = skill;
	}
	void Work();
	string getSkill() {
		return plumbing_skill;
	}
};

int main()
{
	Employee employee1("Jojo", "LaGuardia", 2);
	employee1.introduce();
	employee1.Work();
	employee1.AskForPromotion();
	cout << '\n';

	Developer developer1("John Java", "Google", 10, "C++");
	/*developer1.introduce();
	developer1.Work();
	developer1.AskForPromotion();*/

	Teacher teacher1("Olivia", "PS.500", 20, "Math");
	/*teacher1.introduce();
	teacher1.Work();
	teacher1.AskForPromotion();*/

	Plumber plumber1("Jinyu", "Pipe_First", 4, "water system");
	/*plumber1.introduce();
	plumber1.Work();
	plumber1.AskForPromotion();*/

	Employee* employee2 = &developer1;
	Employee* employee3 = &teacher1;
	Employee* employee4 = &plumber1;

	employee2->introduce();
	employee2->Work();
	employee2->AskForPromotion();
	cout << '\n';
	employee3->introduce();
	employee3->Work();
	employee3->AskForPromotion();
	cout << '\n';
	employee4->introduce();
	employee4->Work();
	employee4->AskForPromotion();


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
void Employee::Work() {
	cout << getName() << " is working on the daily tasks." << endl;
}
void Developer::Work() {
	cout << getName() << " is coding by using " << getLanguage() << endl;
}
string Developer::getLanguage()
{
	return favProgrammingLanguage;
}
void Teacher::Work()
{
	cout << getName() << " is teaching " << getTeach_subject() << endl;
}
void Plumber::Work() {
	cout << getName() << " is working on " << getSkill() << endl;
}





