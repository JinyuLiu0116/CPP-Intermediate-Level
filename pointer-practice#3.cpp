#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	srand(time(NULL));
	int arrayNumber[] = { 5,4,8,7,6 };
	cout << size(arrayNumber) << endl;
	cout << arrayNumber << endl;
	cout << &arrayNumber[0] << endl;
	cout << *(arrayNumber + 3) << endl;
	int array[5];
	for (int index = 0; index < 5; index++)
	{
		array[index] = rand() % 10 + 1;
	}
	for (int index = 0; index < 5; index++)
	{
		cout << *(array+index) << " ";
	}
}