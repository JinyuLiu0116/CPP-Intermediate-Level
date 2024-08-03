//1. Write a grading program for a class with the following grading policies.
//a.There are two quizzes, each graded on the basis of 10 points.
//b.There is one midterm exam and one final exam, each graded on the basis of 100 points.
//c.The final exam counts for 50 % of the grade, the midterm counts for 25 %, and the two
//quizzes together count for a total of 25 % . (Do not forget to normalize the quiz scores.They
//	should be converted to a percentage before they are averaged in.)

#include <iostream>
#include <string>
using namespace std;

class Grading {
	double quizze_1, quizze_2;
	double midterm, final;
	double pQuizee_1;
	double pQuizee_2;
	double pMidterm;
	double pFinal;
	double grade;
public:
	void input();
	void output();
};
int main()
{
	Grading student1;
	student1.input();
	student1.output();
}
void Grading::input()
{	
	string name;
	int q1, q2, mid, fin;
	cout << "Enter the points of your first quizee(1-10): ";
	cin >> q1;
	cout << "Enter the points of your second quizee(1-10): ";
	cin >> q2;
	cout << "Enter the points of your midtern(1-100): ";
	cin >> mid;
	cout << "Enter the points of your final(1-100): ";
	cin >> fin;
	if ((q1 < 1 && q1>10) || (q2 < 1 && q2>10) || (mid < 1 && mid>100) || (fin < 1 && fin>100))
	{
		cout << "Illegal valus!\n";
		exit(1);
	}
	else
	{
		quizze_1 = q1;
		quizze_2 = q2;
		midterm = mid;
		final = fin;
	}
	pQuizee_1 = (q1 / 10.0) * 12.5;
	pQuizee_2 = (q2 / 10.0) * 12.5;
	pMidterm = (midterm / 100.0) * 25;
	pFinal = (final / 100.0) * 50;
	grade = pQuizee_1 + pQuizee_2 + pMidterm + pFinal;

}
void Grading::output()
{
	cout << "The points of your first quizee is: " << quizze_1 <<", is "<< pQuizee_1 <<"%\n";
	cout << "The points of your second quizee is: " << quizze_2 << ", is " << pQuizee_2 << "%\n";
	cout << "The points of your midtern exam is: " << midterm << ", is " << pMidterm << "%\n";
	cout << "The points of your final exam is: " << final << ", is " << pFinal << "%\n";
	cout << "\nYour grade is: " << grade;
	if (grade >= 90)
		cout << "Your letter grade is: A";
	else if (grade >= 80)
		cout << "Your letter grade is: B";
	else if (grade >= 70)
		cout << "Your letter grade is: C";
	else if (grade >= 60)
		cout << "Your letter grade is: D";
	else
		cout << "You not pass this class.";
}
