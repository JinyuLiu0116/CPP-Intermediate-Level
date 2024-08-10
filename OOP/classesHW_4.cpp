#include <iostream>
#include <string>
//to make a program that takes the Name, Date of Birth and email from 10 users using a class.
using namespace std;
const int SIZE = 2;

class Information {
protected:
	string name;
	string email;
	int yearOfBirth;
	int monthOfBirth;
	int dayOfBirth;
	//keep setters private, only can be access from member method
	void setName(string name);
	void setEmail(string email);
	void setYear(int year);
	void setMonth(int month);
	void setDay(int day);
public:
//a defult constructor
	Information() {
		name = "";
		email = "";
		yearOfBirth = 0;
		monthOfBirth = 0;
		dayOfBirth = 0;
	}
	//use class method pass temporary arguments to signt value for attributes
	void setInfor(string newName, string NewEmail, int newMonth, int newDay, int newYear);
	void display(int i);
};

class LaGuardia: public Information {
public:
    LaGuardia():Information(){}
};

class QueensCollege: public Information {
public:
    QueensCollege():Information(){}
};

class BMCC: public Information{
public:
    BMCC():Information(){}
};
//call by reference function for user input
void acceptUserInput(string&, string&, int&, int&, int&);

int main()
{
	LaGuardia student[SIZE]; // array of object 
    QueensCollege student1[SIZE];
    BMCC student2[SIZE];
	int index1 = 0, index2=0, index3=0;//index variable, will be increased each run of loop
	cout<<"Welcom to use Information System\n";
    cout << "Please fill the information for LaGuardia college student:\n";
	cout<<'\n';
	cout << "---------------------------------------------------\n";
	cout << "| Student | Full name |    DOB   |     Email      |\n";
	cout << "---------------------------------------------------\n";
    //LaGuardia college student
	do {
        //temporary variables for user input, they will gone after loop stoped
	    string name, email;
	    int month, day, year; 
        //call by reference function for user input
	    acceptUserInput(name, email, month, day, year);
        //use class method pass temporary arguments to signt value for attributes
	    student[index1].setInfor(name, email, month, day, year);
	    cout << "\n********************************\n";
		index1++;
	} while (index1 < SIZE);
	cout << "\n********************************\n";
	cout<<"Student Information from LaGuardia College\n";
	cout << "---------------------------------------------------\n";
	cout << "| Student | Full name |    DOB   |     Email      |\n";
	cout << "---------------------------------------------------\n";
	for (int i = 0; i < SIZE; i++)
		student[i].display(i);//use for loop to print out formatted information

    cout<<'\n';
    cout<<"Welcom to use Information System\n";
    cout << "Please fill the information for Queens college student:\n";
	cout<<'\n';
	cout << "---------------------------------------------------\n";
	cout << "| Student | Full name |    DOB   |     Email      |\n";
	cout << "---------------------------------------------------\n";
    //Queens College student
	do {
        string name, email;
	    int month, day, year; 
		acceptUserInput(name, email, month, day, year);
        student1[index2].setInfor(name, email, month, day, year);
        cout << "\n********************************\n";
		index2++;
	} while (index2 < SIZE);
	cout << "\n********************************\n";
	cout<<"Student Information from Queens College\n";
	cout << "---------------------------------------------------\n";
	cout << "| Student | Full name |    DOB   |     Email      |\n";
	cout << "---------------------------------------------------\n";
	for (int i = 0; i < SIZE; i++)
		student1[i].display(i);

    cout<<'\n';
    cout<<"Welcom to use Information System\n";
    cout << "Please fill the information for BMCC college student:\n";
	cout<<'\n';
	cout << "---------------------------------------------------\n";
	cout << "| Student | Full name |    DOB   |     Email      |\n";
	cout << "---------------------------------------------------\n";
    //BMCC college student
	do {
        string name, email;
	    int month, day, year; 
		acceptUserInput(name, email, month, day, year);
        student2[index3].setInfor(name, email, month, day, year);
        cout << "\n********************************\n";
		index3++;
	} while (index3 < SIZE);
	cout << "\n********************************\n";
	cout<<"Student Information from BMCC College\n";
	cout << "---------------------------------------------------\n";
	cout << "| Student | Full name |    DOB   |     Email      |\n";
	cout << "---------------------------------------------------\n";
	for (int i = 0; i < SIZE; i++)
		student2[i].display(i);
}
void acceptUserInput(string& name, string& email, int& month, int& day, int& year) {
	cout << "Please enter the name:";

	getline(cin, name);
	cin.ignore();//accecpt enter key
    cin.clear();
	
	cout << "Please enter the email:";
	
	getline(cin, email);

	cout << "Please enter the month of birth:";
	cin >> month;
	while (month < 1 || month>12)//while loops to concrol user input
	{
		cout << "Invalid input number, please enter number of month between 1 and 12:";
		cin >> month;
	}
	cout << "Please enter the day of birth:";
	cin >> day;
	while (day < 1 || day>31)
	{
		cout << "Invalid input number, please enter number of day between 1 and 31:";
		cin >> day;
	}
	cout << "Please enter the year of birth:";
	cin >> year;
	while (year < 1864 || year>2024)
	{
		cout << "Invalid input number, please enter number of year between 1864 and 2024:";
		cin >> year;
	}
	cin.ignore();

}
void Information::setName(string name) {
	this->name = name;
}
void Information::setEmail(string email) {
	this->email = email;
}
void Information::setYear(int year) {
	yearOfBirth = year;
}
void Information::setMonth(int month) {
	monthOfBirth = month;
}
void Information::setDay(int day) {
	dayOfBirth = day;
}
void Information::setInfor(string newName, string NewEmail, int newMonth, int newDay, int newYear) {
	//setters to inisialize attributes
	setName(newName);
	setEmail(NewEmail);
	setYear(newYear);
	setMonth(newMonth);
	setDay(newDay);
}
void Information::display(int i) {
	cout << "|    " << i + 1 << "    | " << name << " | " << monthOfBirth << "/" << dayOfBirth << "/" << yearOfBirth << " | " << email << " |\n";
	cout << "---------------------------------------------------\n";
}


