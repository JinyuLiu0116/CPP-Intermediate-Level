#include <iostream>

using namespace std;

class Student {
	string Name;
	string College;
	double Grade;
	int ID;
public:
	Student() : Name("Unknown"), College("Unknown"), Grade(0.0), ID(0){}
	Student(string name, string college, double grade, int id);
	string getName() const { return this->Name; }
	string getCollege() const { return this->College; }
	double getGrade() const { return this->Grade; }
	int getID() const { return this->ID; }
	void setName(string name);
	void setCollege(string college);
	void setGrade(double grade);
	void setID(int id);
	void student_infor();
	virtual void study() = 0;

};
class CS_Student :public Student{
public:
	CS_Student() :Student(){}
	CS_Student(string name, string college, double grade, int id):Student(name,college,grade,id){}
	void study() override { cout << this->getName() << " is studying programming." << endl; }
};
class Math_Student :public Student{
public:
	Math_Student() :Student() {}
	Math_Student(string name, string college, double grade, int id) :Student(name, college, grade, id) {}
	void study() override { cout << this->getName() << " is studying calculus math." << endl; }
};
class Science_Student :public Student{
public:
	Science_Student() :Student(){}
	Science_Student(string name, string college, double grade, int id) :Student(name,college,grade,id){}
	void study() override { cout << this->getName() << " is studying Physics." << endl; }
};
class Air_Student :public Student{
public:
	Air_Student() :Student() {}
	Air_Student(string name, string college, double grade, int id) :Student(name, college, grade, id) {}
	void study() override { cout << this->getName() << " is studying drawing." << endl; }
};
class Music_Student :public Student{
public:
	Music_Student() :Student() {}
	Music_Student(string name, string college, double grade, int id) :Student(name, college, grade, id) {}
	void study() override { cout << this->getName() << " is studying singing." << endl; }
};
int main() {
	try{
		Student* student[5];
		student[0] = new CS_Student("Ali", "LaGuardia", 3.9, 216426);
		student[1] = new Math_Student("Culus", "City", 3.7, 216549);
		student[2] = new Science_Student("Luis", "Hunter", 3.6, 154876);
		student[3] = new Air_Student("Lily", "BMCC", 4.0, 365416);
		student[4] = new Music_Student("Ikura", "Queens", 4.0, 131420);
		for (int i = 0; i < 5; i++) {
			student[i]->student_infor();
			student[i]->study();
		}

		for (int i = 0; i < 5; i++) {
			delete student[i];
		}
	}
	catch (runtime_error e) {
		cerr << "Exception: " << e.what() << endl;
	}
	catch (invalid_argument e) {
		cerr << "Exception: " << e.what() << endl;
	}


}
void Student::student_infor() {
	cout << this->getName() << " from " << this->getCollege() << " college" 
		<< " with ID:" << this->getID() << " has grade:" << this->getGrade() << endl;
}
Student::Student(string name, string college, double grade, int id) {
	this->setName(name);
	this->setCollege(college);
	this->setGrade(grade);
	this->setID(id);
}
void Student::setName(string name) {
	if (name.empty()) {
		throw runtime_error("Not input entered!");
	}
	else {
		this->Name=name;
	}
}
void Student::setCollege(string college) {
	if (college.empty()) {
		throw runtime_error("Not input entered!");
	}
	else {
		this->College=college;
	}
}
void Student::setGrade(double grade) {
	if (grade < 0) {
		throw invalid_argument("Cannot have negative value!");
	}
	else {
		this->Grade=grade;
	}
}
void Student::setID(int id) {
	if (id < 0) {
		throw invalid_argument("Cannot have negative value!");
	}
	else {
		this->ID=id;
	}
}
