#include <iostream>
#include <ctime>
using namespace std;
const int testSize = 1000;

double average(double x, double y);
void testAverage();
void fillArray(double []);
int main() {
	double array[testSize];
	fillArray(array);
	testAverage();
}
double average(double x, double y) {
	return (x + y) / 2;
}
void fillArray(double array[]) {
	for (int i = 0; i < testSize; i++) {
		array[i] = (testSize+i)/2;
	}
}

void testAverage() {
	srand(time(NULL));

	for (double i = 0; i < testSize; i++) {
		double y = rand() % testSize;
		double ave = average(y, testSize);
		cout << "Tester " << i + 1 << ", the average of ("<<y<<", "<<testSize<<") is: " << average << endl;
		if(ave)
	}
}

