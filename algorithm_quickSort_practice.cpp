#include <iostream>
#include <string>
using namespace std;

void quickSort(int[], int, int);
int partition(int[], int, int);
int main()
{
	int array[] = { 8,2,5,3,9,4,7,6,1 };
	int size = sizeof(array) / sizeof(array[0]);

	quickSort(array, 0, size - 1);

	for (int index = 0; index <size; index++)
	{
		cout << array[index] << " ";
	}
}
void quickSort(int array[], int start, int end)
{
	if (end <= start)
		return;
	int pivot = partition(array, start, end);
	quickSort(array, start, pivot - 1);
	quickSort(array, pivot + 1, end);

}
int partition(int array[], int start, int end)
{
	int pivot = array[end];
	int i = start - 1;
	for (int j = start; j <= end - 1; j++)
	{
		if (array[j] < pivot){
			i++;
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	i++;
	int temp = array[i];
	array[i] = array[end];
	array[end] = temp;
	return i;
}