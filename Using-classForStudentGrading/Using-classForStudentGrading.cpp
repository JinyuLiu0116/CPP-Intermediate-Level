#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;

class School
{
	string name;
	string subject[SIZE] = { "English","Math","CS","History","Gym" };
	double grade[SIZE];
	double total = 0;
	double average;
	char letterGrade;

public:
	void userInputInfor();
	void calculateValue();
	void displayInfor();
};

int main()
{

	School student;
	char check;
	do
	{
		student.userInputInfor();
		student.calculateValue();
		student.displayInfor();

		//ask for choice.
		cout << "Do you want to continue? (y/n):";
		cin >> check;
		//check user input.
		while (check != 'y' && check != 'Y' && check != 'n' && check != 'N')
		{
			cout << "Invalid input charactor.\n";
			cout << "Please enter (y\n):";
			cin >> check;
		}

	} while (check != 'n' && check != 'N');
	cout << "Thank you for using.\n";




}
void School::userInputInfor()
{
	//ask for student name
	cout << "Enter your name: ";
	getline(cin, name);
	cout << '\n' << "Hello " << name << endl;
	cout << "Enter your score for subjects (0-100):\n";
	cout << "*****************************\n";
	//assigns scores for subjects
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "." << subject[i] << ": ";
		cin >> grade[i];
		//check user input a corrected number, otherwide, ask for input again.
		while (grade[i] < 0 || grade[i]>100)
		{
			cout << "Invalid input number.\nYou should enter a nuber between 0 and 100.\n";
			cout << "Please Enter again:\n";
			cout << i + 1 << "." << subject[i] << ": ";
			cin >> grade[i];
		}
	}

}
void School::calculateValue()
{
	//calculate total and average
	for (int i = 0; i < SIZE; i++)
		total += grade[i];
	average = total / 5;
	//assign letter grade
	if (average >= 90 && average <= 100)
		letterGrade = 'A';
	else if (average >= 80 && average <= 90)
		letterGrade = 'B';
	else if (average >= 70 && average <= 80)
		letterGrade = 'C';
	else if (average >= 60 && average <= 70)
		letterGrade = 'D';
	else
		letterGrade = 'F';

}
void  School::displayInfor()
{
	cout << '\n' << "*****************************\n";
	//display imformation
	cout << "Student Name: " << name << endl;
	cout << " Total Score: " << total << endl;
	cout << "     Avergae: " << average << "%" << endl;
	cout << "Letter Grade: " << letterGrade << endl;
	cout << '\n' << "*****************************\n";
}