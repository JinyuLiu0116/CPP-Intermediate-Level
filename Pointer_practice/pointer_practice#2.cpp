#include <iostream>
using namespace std;

void printNmuber(int* num) {
	cout << "The number is:" << *num << endl;
}
void printGrade(char* grade)
{
	cout << "The grade is:" << *grade << endl;
}
void pVoid_print(void* ptr, char type)
{	
	type = tolower(type);
	switch (type)
	{
	case 'i': cout << "The number is:" << *((int*)ptr) << endl; break;
	case 'c': cout << "Your grade is:" << *((char*)ptr) << endl; break;
	case 's': cout << "Your name is:" << *((string*)ptr) << endl; break;
	case 'd': cout << "Your average score is:" << *((double*)ptr) << endl; break;
	default: cout << "Invalid input." << endl;
	}
}

int main()
{
	int num = 10;
	//printNmuber(&num);
	pVoid_print(&num, 'i');
	char grade = 'A';
	//printGrade(&grade);
	pVoid_print(&grade, 'c');

	string name = "JingJing Ling";
	pVoid_print(&name, 'S');

	double average = 97.45;
	pVoid_print(&average, 'd');


}
