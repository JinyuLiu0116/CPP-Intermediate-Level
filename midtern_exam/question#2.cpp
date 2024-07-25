#include<iostream>
#include<string>
using namespace std;
const int SIZE = 4;
//Write a C++ program using the keyword CLASS to compute and display an employee’s
//weekly salary as determined by the following conditions : If the hours worked are less than or
//equal to 40 hours, the employee will get paid $12.00 per hour; otherwise, if the employee
//worked over 40 hours will get paid $17.00 for each hour worked. (30 points)
//The program should request the hours worked as input and display the salary as
//output.

class Employee {
public:
	string name;
	int hour;
	double weekly_salary;
	Employee() {
		this->name = "";
		this->hour = 0;
		this->weekly_salary = 0;
	}
	void setName(string name) {
		this->name = name;
	}
	void setHour(int a) {
		this->hour = a;
	}
	void setSalary(int a) {
		if (a <= 0) {
			this->weekly_salary = 0;
		}
		else if (a <= 40) {
			this->weekly_salary = 12.00 * a;
		}
		else {
			this->weekly_salary = 12.00 * 40+17.00*(a-40);
		}
	}
	string getName() {
		return name;
	}
	int getHour() {
		return hour;
	}
	double getWeekly_salary() {
		return weekly_salary;
	}
	void display() {
		cout <<"| " << getName() << "| "<< getHour()<<"            | $:"<< getWeekly_salary()<<" | "<<endl;
		cout << "-------------------------------------\n";
	}
};

int main() {
	Employee employee[SIZE];
	cout << "***Please Fill Employee's Information***\n\n";
	int index = 0;
	do {
		string n;
		int h;
		cout << "Enter employee's name: ";
		getline(cin, n);

		employee[index].setName(n);
		cout << "Enter employee's working hour: ";
		cin >> h;
		employee[index].setHour(h);
		employee[index].setSalary(h);
		cin.ignore();
		cin.clear();
		index++;
	} while (index < SIZE);

	cout << "Thank you for using.\n";
	cout << "-------------------------------------\n";
	cout << "| Employee | Working hours | Salary |\n";
	cout << "-------------------------------------\n";

	for (int i = 0; i < SIZE; i++)
		employee[i].display();

}