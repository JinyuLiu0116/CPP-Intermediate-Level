#include <iostream>
#include <string>
using namespace std;
const int SIZE = 10;

struct Grade {
	string firstName;
	string lastNmae;
	double quiz1,quiz2;
	double midtern, final;
	double aveQ1, aveQ2, aveMid, aveF;
	double total;
	double average;
	char letterGrade;

};
void getInfor(Grade& student);//use a function pass adress of Grade to assign user inputs.
void setData(Grade& student);//calculate user data.
void display(Grade& student);//display student's information.
int main()
{
	Grade student[SIZE];
	int i=0;
	bool check;
	char yesOrNo;
	do{
		getInfor(student[i]);
		setData(student[i]);
		display(student[i]);
		cout<<"Would you like try again for another student? (y/n): ";
		cin>>yesOrNo;
		switch(yesOrN)
		{
		case 'Y':
		case 'y': check = true; i++; break;
		case 'N':
		case 'n': check = false; break;
		default:cout << "Invalid input.";
		}
	}while(check);
	cout << '\n';
	cout << "Thank you for using.\n";


}
void getInfor(Grade& student)
{
	//user input first name and last name separately.
	cout << "Enter the student's first name: ";
	cin >> student.firstName;

	cout << "Enter the student's last name: ";
	cin >> student.lastNmae;

	cout << "Enter Quiz 1 score (Maximum is 10): ";
	cin >> student.quiz1;
	//use loop ask user input a number in rgiht range.
	while (student.quiz1 < 0 || student.quiz1 > 10)
	{
		cout << "Invalid input number for Quiz 1.\n";
		cout << "Enter Quiz 1 score (Mkae sure enter a number between 0-10): ";
		cin >> student.quiz1;
	};

	cout << "Enter Quiz 2 score (Maximum is 10): ";
	cin >> student.quiz2;
	while (student.quiz2 < 0 || student.quiz2 > 10)
	{
		cout << "Invalid input number for Quiz 2.\n";
		cout << "Enter Quiz 2 score (Mkae sure enter a number between 0-10): ";
		cin >> student.quiz2;
	}

	cout << "Enter Midterm score (Maximum is 100): ";
	cin >> student.midtern;
	while (student.midtern < 0 || student.midtern > 100)
	{
		cout << "Invalid input number for Midtern.\n";
		cout << "Enter Midterm score (Mkae sure enter a number between 0-100): ";
		cin >> student.midtern;
	}

	cout << "Enter Final score (Maximum is 100): ";
	cin >> student.final;
	while (student.final < 0 || student.final > 100)
	{
		cout << "Invalid input number for Final.\n";
		cout << "Enter Final score (Mkae sure enter a number between 0-100): ";
		cin >> student.final;
	}
}
void setData(Grade& student)
{
	//calculate the total scor of the four exams.
	student.total = student.quiz1 + student.quiz2 + student.midtern + student.final;
	//the average for each exam.
	student.aveQ1 = student.quiz1 * 1.25;
	student.aveQ2 = student.quiz2 * 1.25;
	student.aveMid = student.midtern * 0.25;
	student.aveF = student.final * 0.5;
	//the total average.
	student.average = student.aveQ1 + student.aveQ2 + student.aveMid + student.aveF;
	//assign letter grade based on student's total average.
	if (student.average >= 91 && student.average <= 100)
		student.letterGrade = 'A';
	else if (student.average >= 81 && student.average <= 90)
		student.letterGrade = 'B';
	else if (student.average >= 71 && student.average <= 80)
		student.letterGrade = 'C';
	else if (student.average >= 61 && student.average <= 70)
		student.letterGrade = 'D';
	else
		student.letterGrade = 'F';
}
void display(Grade& student)
{
	cout << "\n\n\n";
	cout << "Here is the results for " << student.firstName << " " << student.lastNmae << ".\n";
	cout << '\n' << '\n';
	cout << "        TEST        YOUR SCORE        MAX SCORE        AVERAGE SCORE\n";
	cout << "      Quiz 1                " << student.quiz1 << "                " << " 10 " << "                 " << student.aveQ1 << "%" << endl;
	cout << "      Quiz 2                " << student.quiz2 << "                " << " 10 " << "                 " << student.aveQ2 << "%" << endl;
	cout << "     Midterm               " << student.midtern << "                " << " 100 " << "                " << student.aveMid << "%" << endl;
	cout << "       Final               " << student.final << "                " << " 100 " << "                  " << student.aveF << "%" << endl;
	cout << "------------------------------------------------------------------------------\n";
	cout << "       TOTAL               " << student.total << "                " << student.totalMax << "                " << student.average << "%" << endl;
	cout << "\n";
	cout << "Numeric Average:" << student.average << "%\n";
	cout << "Final Grade:" << student.letterGrade << '\n';
}
