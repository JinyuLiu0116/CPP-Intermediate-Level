#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
	srand(time(NULL));

	vector<int> test;
	int rollSIZE = rand() % 3 + 6;
	int roll;

	cout << "The size of vector is:" << rollSIZE << endl;

	for (int index = 0; index < rollSIZE; index++)
	{
		roll = rand() % 10 + 1;
		test.push_back(roll);
		cout << roll << " added.";
		cout << "Test.size = " << test.size() << endl;
	}
	cout << "The number:";
	for (unsigned int i = 0; i < test.size(); i++)
	{
		cout << test[i] << " ";
	}



}
