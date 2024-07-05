#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;

class Student {
	string name;
	string subject[SIZE] = { "English","Math","CS","Science","Flaxble" };
	int grade[SIZE];
	double total = 0;
	double average;
	char letterGrade;

	void setName(string);
	void setInfor(int[]);
	
public:
	void askForInput();
	void displayInfor();
};

int main()
{
	int numberOfStudent;
	cout << "How many students:";
	cin >> numberOfStudent;
	cin.ignore();
	
	Student* student = new Student[numberOfStudent];

	cout << "You have created " << numberOfStudent << " student documents.\n";

	do {
		student[numberOfStudent-1].askForInput();
		cout << "************************************\n";
		student[numberOfStudent-1].displayInfor();
		cout << "************************************\n";

		numberOfStudent--;
	}while(numberOfStudent !=0);


}
void Student::setName(string nam)
{
	name = nam;
}

void Student::setInfor(int array[])
{
	for (int index = 0; index < SIZE; index++)
	{
		grade[index] = array[index];
		total += grade[index];
	}
	average = total / SIZE;
	if (average >= 90)
		letterGrade = 'A';
	else if (average >= 80)
		letterGrade = 'B';
	else if (average >= 70)
		letterGrade = 'C';
	else if (average >= 60)
		letterGrade = 'D';
	else
		letterGrade = 'F';
}
void Student::askForInput()
{	
	string nam;
	int array[SIZE];
	cout << "Pleare enter student's name:";
	getline(cin, nam);
	
	cout << "Plear enter " << name << "'s grades for each subject.\n";
	cout << "***********************************\n";
	for (int index = 0; index < SIZE; index++)
	{
		cout << index + 1 << "." << subject[index] << "(0-100):";
		cin >> array[index];
		while (array[index] < 0 || array[index]>100)
		{
			cout << "\n" << "Invalid input number.\n" << "Please enter a number between 0 and 100\n";
			cout << index + 1 << "." << subject[index] << "(0-100):";
			cin >> array[index];
		}
	}
	setName(nam);
	setInfor(array);
}
void Student::displayInfor()
{
	cout << "Student Name :" << name << '\n';
	cout << "Total score  :" << total << '\n';
	cout << "Average score:" << average << '\n';
	cout << "Letter grade :" << letterGrade << '\n';
}




