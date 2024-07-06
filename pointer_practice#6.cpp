#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int* pMyArray = new int[num];

	for (int index = 0; index < num; index++)
	{
		pMyArray[index] = rand() % 20 + 1;
	}
	for (int index = 0; index < num; index++)
	{
		cout << pMyArray[index] << " ";
	}


}