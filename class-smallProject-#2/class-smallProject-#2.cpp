/*. Define a class for a type called CounterType. An object of this type is used to count things, 
so it records a count that is a nonnegative whole number. Include a mutator function that 
sets the counter to a count given as an argument. Include member functions to increase the 
count by one and to decrease the count by one. Be sure that no member function allows the 
value of the counter to become negative. Also, include a member function that returns the 
current count value and one that outputs the count. Embed your class definition in a test 
program.*/

#include <iostream>
using namespace std;

class CounterType {
	int number;
	
public:
	void setNumber();
	int increament();
	int decreament();
	void getNumber();
};

int main()
{
	CounterType number;
	number.setNumber();
	number.getNumber();

	number.increament();
	number.increament();
	number.getNumber();

	number.decreament();
	number.getNumber();
}
void CounterType::setNumber()
{
	int num;
	cout << "Enter a nonnegative whole number: ";
	cin >> num;
	if (num < 0)
	{
		cout << "Illegal input number.";
		exit(1);
	}
	else
		number = num;
}
int CounterType::increament()
{
	number++;
	return number;
}
int CounterType::decreament()
{
	if (number == 0)
	{
		cout << "invalid, number cannot be neagtive number.";
		exit(1);
	}
	else
		number--;
	return number;
}
void CounterType::getNumber()
{
	cout << "The number is: " << number << endl;
}
