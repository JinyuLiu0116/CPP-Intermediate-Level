#include <iostream>
using namespace std;



int main()
{
	int sizeOfArray;
	cout << "Enter the number of size:";
	cin >> sizeOfArray;
	int* pArray = new int[sizeOfArray];
	cout << "Enter number for:\n";
	for (int index = 0; index < sizeOfArray; index++) {
		cout << "Index[" << index << "]:";
		cin >> pArray[index];
	}
	cout << '\n'<<"Your array is:";
	for (int index = 0; index < sizeOfArray; index++) {
		cout << pArray[index] << " ";
	}
	delete[]pArray;
}