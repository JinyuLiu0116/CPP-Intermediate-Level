#include <iostream>
using namespace std;



int main()
{

	int num = 10;
	cout << &num << endl;
	int* pNum = &num;
	cout << pNum << endl;
	cout << *pNum << endl;
	*pNum = num + 5;
	cout << *pNum << endl;
	cout << num << endl;

	char grade = 'A';
	char* pChar_grade = &grade;
	cout << "Your fianl grade is:" << *pChar_grade << endl;
	string name = "JingJing Ling";
	string* pStr_name = &name;
	cout << "Hello " << *pStr_name << endl;

	double average = 96.47;
	double* pDouble_average = &average;
	cout << "Your average score is:" << *pDouble_average;




}