#include <iostream>
using namespace std;
const int SIZE = 5;


class Grade {
	string firstName;
	string lastName;
	string subjects[SIZE];
	int grades[SIZE];
	double total=0;
	double average;
	char letterGrade;

	void setData(int setGrade[]) 
	{

		for (int index = 0; index < SIZE; index++)
		{
			grades[index] = setGrade[index];
			total += grades[index];
		}
		average = total / SIZE;
		setLetterGrade(average);
	}
	void setLetterGrade(double ave)
	{
		if (ave > 90)
			letterGrade = 'A';
		else if (ave > 80)
			letterGrade = 'B';
		else if (ave > 70)
			letterGrade = 'C';
		else if (ave > 60)
			letterGrade = 'D';
		else
			letterGrade = 'F';
	}
	
public:
	Grade() {

	}
	Grade(string firstName, string lastName)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		total = 0;
		average = 0;
		letterGrade = 'F';
	}
	void setName(Grade student)
	{
		firstName = student.firstName;
		lastName = student.lastName;
	}
	void setSubAndGrade()
	{	
		int getGrade[SIZE];
		for (int index = 0; index < SIZE; index++)
		{
			cout << index + 1 << ". Subject:";
			cin >> subjects[index];
			cout << "Grade(0-100): ";
			cin >> getGrade[index];

			while (getGrade[index] < 0 || getGrade[index]>100)
			{
				cout << "Please enter grade between 0 and 100:";
				cin >> getGrade[index];
			}
		}

		setData(getGrade);
	}
	void displayInfor()
	{
		cout << "Student name:" << firstName << " " << lastName << endl;
		cout << "Total score: " << total << endl;
		cout << "Average score:" << average << endl;
		cout << "Letter grade:" << letterGrade << endl;
	}



};
int main()
{
	int counter = 1;
	//use dynamic object array dosen't work :)
	Grade* student = new Grade[counter];
	int index = 0;
	char choice;

	do {
		string firstN, lastN;

		cout << "Enter your first name and last name:";
		cin >> firstN >> lastN;


		Grade object(firstN, lastN);
		student[index].setName(object);

		cout << "Enter the subjects and the grade for each subject:\n";
		student[index].setSubAndGrade();


		cout << '\n' << "******************************" << '\n';
		student[index].displayInfor();

		cout << "Do you want to continue?(y/n):";
		cin >> choice;
		while(tolower(choice)!='y'&& tolower(choice) != 'n')
		{
			cout << "Please enter 'y' for yes and 'n' for exit.";
			cin >> choice;
		}
		if (tolower(choice) == 'y')
		{
			counter++;
			index++;
		}
		
	} while (tolower(choice) != 'n');



}