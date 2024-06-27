#include <iostream>
#include <string>
using namespace std;

struct school {
	string name;
	string subject[5] = { "English","Math","CS","History","Gym"};
	double grade[5];
	double total=0;
	double average;
	char letterGrade;
};

void setDate(school& student);
void getDate(school& student);
int main()
{

	school student1, student2, student3;
	setDate(student1);
	getDate(student1);

}
void setDate(school& student) 
{
	cout << "Enter student name:";
	getline(cin, student.name);
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the grade for: " << student.subject[i];
		cin >> student.grade[i];
	}
	for (int i = 0; i < 5; i++)
	{
		student.total += student.grade[i];
	}
	student.average = student.total / 5;
	if (student.average >= 91 && student.average <= 100)
	{
		student.letterGrade = 'A';
	}
	else if (student.average >= 81 && student.average <= 90)
	{
		student.letterGrade = 'B';
	}
	else if (student.average >= 71 && student.average <= 80)
	{
		student.letterGrade = 'C';
	}
	else if (student.average >= 61 && student.average <= 70)
	{
		student.letterGrade = 'D';
	}
	else
	{
		student.letterGrade = 'F';
	}
}
void getDate(school& student)
{
	for (int i = 0; i < 5; i++)
	{
		cout << student.subject[i] << ": " << student.grade[i] << endl;
	}
	cout << '\n';
	cout << student.name << " has total grade: " << student.total << endl;
	cout << student.name << " has average grade: " << student.average << "%" << endl;
	cout << student.name << " has letter grade: " << student.letterGrade << endl;
}

