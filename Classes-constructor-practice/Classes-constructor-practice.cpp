#include <iostream>
using namespace std;

class Person 
{
	string firstName;
	string lastName;
	int age;
	
public:
	Person();
	Person(string firstName);
	Person(string firstName, string lastName);
	void display()
	{
		cout << firstName << " " << lastName << endl;
	}

};

int main()
{
	string first, last;
	cout << "Enter your fist name:";
	cin >> first;
	cout << "Enter your last name:";
	cin >> last;
	Person one;
	one.display();
	Person two(first);
	two.display();
	Person three(first, last);
	three.display();



}
Person::Person()
{
	firstName = "";
	lastName = "";
}
Person::Person(string firstName)
{
	this->firstName = firstName;
	lastName = "";
}
Person::Person(string firstName, string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}