#include <iostream>
#include <ctime>
using namespace std;
const int SIZE = 5;


void fillArray(int array[]);
void readArray(int array[]);
int getMin(int array[]);
int getMax(int array[]);
void getMinAndMax(int array[], int* max, int* min);
int main()
{
	srand(time(NULL));
	int arrayOfNum[5];
	int minNumber, maxNumber;

	fillArray(arrayOfNum);
	readArray(arrayOfNum);

	minNumber = getMin(arrayOfNum);
	cout << "The smallest number in the array is:" << minNumber << endl;
	maxNumber = getMax(arrayOfNum);
	cout << "The largest number in the array is:" << maxNumber << endl;

	int max = arrayOfNum[0];
	int min = arrayOfNum[0];
	getMinAndMax(arrayOfNum, &max, &min);
	cout << "The max number in the array is:" << max << endl;
	cout << "The min number in the array is:" << min << endl;




}
void fillArray(int array[])
{
	for (int index = 0; index < SIZE; index++) {
		array[index] = rand() % 20;
	}
}
void readArray(int array[]) {
	for (int index = 0; index < SIZE; index++) {
		cout << array[index] << " ";
	}
	cout << '\n';
}

int getMin(int array[]) {
	int min = array[0];
	for (int index = 1; index < SIZE; index++) {
		if (array[index] < min) {
			min = array[index];
		}
	}
	return min;
}
int getMax(int array[]) {
	int max = array[0];
	for (int index = 1; index < SIZE; index++) {
		if (array[index] > max) {
			max = array[index];
		}
	}
	return max;
}
void getMinAndMax(int array[], int* max, int* min) {
	for (int index = 1; index < SIZE; index++) {
		if (array[index] < *min) {
			*min = array[index];
		}
		if (array[index] > *max) {
			*max = array[index];
		}
	}
}
