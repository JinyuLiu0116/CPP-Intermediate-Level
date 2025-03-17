#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int row, colum;
	cout << "Enter the number of rows:";
	cin >> row;
	cout << "Enter the number of colum:";
	cin >> colum;

	
	int** ptopTable = new int*[row];
	for (int index = 0; index < row; index++)
	{	//assign the address of dynamic arrays with colum number of elements to pointer
		ptopTable[index] = new int[colum];//array is address of its first index member, so it can directly signt to pointer
	}
	//assign a value to row 1, colum 2
	ptopTable[1][2] = 88;
	
	for (int rows = 0; rows < row; rows++)
	{
		for (int cols = 0; cols < colum; cols++)
		{
			ptopTable[rows][cols] = rand() % 20 + 1;
		}
	}
	for (int rows = 0; rows < row; rows++)
	{
		for (int cols = 0; cols < colum; cols++)
		{
			cout << ptopTable[rows][cols] << " ";
		}
		cout << '\n';
	}
	//every time we use 'new' to create a memory, we need to use 'delete' when we don't need the memory
	//for mult-dynamic arrays, we need to delete upsit way: from the end to the begining.
	for (int index = 0; index < row; index++)
	{
		delete[] ptopTable[index];//delete three dynamic arrays
	}
	delete[] ptopTable;//delete the dynamic array that holds three address, after that ptopTable point to a unused memory.
	ptopTable = NULL;//point to NULL
	



}
