#include <iostream>
#include <ctime>

using namespace std;
const int SIZE = 3;

class Pattern {
	int maxNumber[SIZE];
	
	int roll()
	{
		int roll = rand() % 5 + 6;
		return roll;
	}
public:
	void setNumber();
	void numberPattern();
	void charPattern();
	void startPattern();
	void diamondPattern();


};

int main()
{
	srand(time(NULL));
	Pattern pattern;
	pattern.setNumber();
	cout << '\n';
	pattern.numberPattern();
	cout << '\n';
	pattern.charPattern();
	cout << '\n';
	pattern.startPattern();
	cout << '\n';
	pattern.diamondPattern();
	
}

void Pattern::setNumber()
{
	for (int index = 0; index < SIZE; index++)
	{
		maxNumber[index] = roll();
		cout << maxNumber[index] << " ";
	}
}
void Pattern::numberPattern()
{
	for (int n = 0; n < SIZE; n++)
	{
		for (int i = 1; i <= maxNumber[n]; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << j;
			}
			cout << '\n';
		}
		cout << '\n';
	}
}
void Pattern::charPattern() 
{
	
	for (int n = 0; n < SIZE; n++)
	{
		char letter = 'A';
		for (int i = 1; i <= maxNumber[n]; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << letter;
				
			}
			letter++;
			cout << '\n';
		}
		cout << '\n';
	}
}
void Pattern::startPattern()
{
	for (int n = 0; n < SIZE; n++)
	{
		for (int i = 1; i <= maxNumber[n]; i++)
		{
			for (int j = 1; j <= maxNumber[n] - i; j++)
				cout << " ";

			for (int j = 1; j <= i; j++)
			{
				cout << "* ";
			}
			cout << '\n';
		}
		cout << '\n';
	}
}
void Pattern::diamondPattern()
{
	for (int n = 0; n < SIZE; n++)
	{
		for (int i = 1; i <= maxNumber[n]; i++)
		{
			for (int j = 1; j <= maxNumber[n] - i; j++)
				cout << " ";

			for (int j = 1; j <= i; j++)
				cout << "* ";
			cout << '\n';
		}
		for (int i = 1; i <= maxNumber[n] - 1; i++)
		{
			for (int j = 1; j <= i; j++)
				cout << " ";
			for (int j = 1; j <= maxNumber[n] - i; j++)
				cout << "* ";
			cout << '\n';
		}
		cout << '\n';
	}
}
