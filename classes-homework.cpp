#include <iostream>
#include <string>
//to make a program that takes the Name, Date of Birth and email from 10 users using a class.
using namespace std;
const int SIZE = 10;

class Information {
	string name;
	string email;
	int yearOfBirth;
	int monthOfBirth;
	int dayOfBirth;

public:
	Information() {
		name = "";
		email = "";
		yearOfBirth = 0;
		monthOfBirth = 0;
		dayOfBirth = 0;
	}
	void setName(string name);
	void setEmail(string email);
	void setYear(int year);
	void setMonth(int month);
	void setDay(int day);
	string getName();
	string getEmail();
	int getYear();
	int getMonth();
	int getDay();
	void setInfor(string newName, string NewEmail, int newMonth, int newDay, int newYear);
	void display();
};
int main()
{
	Information information[SIZE];
	int index = 0;
	cout << "Please fill the information:\n";

	do {
		string name, email;
		int month, day, year;

		cout << "Please enter the name:";
		cin.ignore();
		getline(cin,name);

		cout << "Please enter the email:";
		cin.ignore();
		getline(cin, email);
		cout << "Please enter the month of birth:";
		cin >> month;
		while (month < 1 || month>12)
		{
			cout << "Invalid input number, please enter number between 1 and 12:";
			cin >> month;
		}
		cout << "Please enter the day of birth:";
		cin >> day;
		while (day < 1 || day>31)
		{
			cout << "Invalid input number, please enter number between 1 and 31:";
			cin >> day;
		}
		cout << "Please enter the year of birth:";
		cin >> year;
		while (year < 1874 || year>2024)
		{
			cout << "Invalid input number:";
			cin >> year;
		}
		information[index].setInfor(name, email, month, day, year);
		cout << "\n********************************\n";
		information[index].display();
		cout << "\n********************************\n";


		index++;
	} while (index < SIZE);
	cout << "\n********************************\n";
	cout << "Thank you for using!";


}
string Information::getName() {
	return name;
}
string Information::getEmail() {
	return email;
}
int Information::getYear() {
	return yearOfBirth;
}
int Information::getMonth() {
	return monthOfBirth;
}
int Information::getDay() {
	return dayOfBirth;
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
	setName(newName);
	setEmail(NewEmail);
	setYear(newYear);
	setMonth(newMonth);
	setDay(newDay);
}

void Information::display() {
	cout << "Name:" << name << endl;
	cout << "Email:" << email << endl;
	cout << "Birthday: " <<monthOfBirth <<" / "<<dayOfBirth<<" / "<<yearOfBirth << endl;
}