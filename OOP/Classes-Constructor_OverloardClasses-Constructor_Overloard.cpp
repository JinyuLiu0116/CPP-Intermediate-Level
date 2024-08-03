#include <iostream>
#include <ctime>
using namespace std;

class Practice
{
	int Max, Min, Odd, Even;


	void setter(int a);
	void setter(int a, int b);
	void setter(int a, int b, int c);
	void setter(int a, int b, int c, int d);
	int checkMax(int[], int);
	int checkMin(int[], int);
	int checkEven(int[], int);
	int checkOdd(int[], int);
public:
	Practice();
	Practice(int a);
	Practice(int a, int b);
	Practice(int a, int b, int c);
	Practice(int a, int b, int c, int d);
	void display();


};

void rand(int& a, int& b, int& c, int& d)
{
	a = rand() % 20 + 1;
	b = rand() % 20 + 1;
	c = rand() % 20 + 1;
	d = rand() % 20 + 1;
}
int main()
{
	srand(time(NULL));
	int a, b, c, d;
	rand(a, b, c, d);
	

	Practice test1;
	cout << "Test1:\n";
	test1.display();
	
	rand(a, b, c, d);
	Practice test2(a, b);
	cout << a << " " << b << " " << c << " " << d << " \n";
	cout << "Test2:\n";
	test2.display();

	rand(a, b, c, d);
	cout << a << " " << b << " " << c << " " << d << " \n";
	Practice test3(a, b, c);
	cout << "Test3:\n";
	test3.display();

	rand(a, b, c, d);
	cout << a << " " << b << " " << c << " " << d << " \n";
	Practice test4(a, b, c, d);
	cout << "Test4:\n";
	test4.display();

}
Practice::Practice() {
	Max = 0;
	Min = 0;
	Odd = 0;
	Even = 0;
}
Practice::Practice(int a) {

	setter(a);
}
Practice::Practice(int a, int b) {

	setter(a, b);
}
Practice::Practice(int a, int b, int c) {
	setter(a, b, c);
}
Practice::Practice(int a, int b, int c, int d) {
	setter(a, b, c, d);

}
void Practice::setter(int a)
{
	int array[] = {a};
	int size = sizeof(array)/sizeof(array[0]);
	Max = checkMax(array, size);
	Min = checkMin(array, size);
	Even = checkEven(array, size);
	Odd = checkOdd(array, size);
}
void Practice::setter(int a, int b)
{
	int array[] = { a,b };
	int size = sizeof(array)/sizeof(array[0]);
	Max = checkMax(array, size);
	Min = checkMin(array, size);
	Even = checkEven(array, size);
	Odd = checkOdd(array, size);
}
void Practice::setter(int a, int b, int c)
{
	int array[] = { a,b,c };
	int size = sizeof(array)/ sizeof(array[0]);
	Max = checkMax(array, size);
	Min = checkMin(array, size);
	Even = checkEven(array, size);
	Odd = checkOdd(array, size);


}
void Practice::setter(int a, int b, int c, int d)
{
	int array[] = { a,b,c,d };
	int size = sizeof(array)/ sizeof(array[0]);
	Max = checkMax(array, size);
	Min = checkMin(array, size);
	Even = checkEven(array, size);
	Odd = checkOdd(array, size);
}
int Practice::checkMax(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1])
		{
			return array[i];
		}
		return array[i + 1];
	}



}
int Practice::checkMin(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] < array[i+1])
		{
			return array[i];
		}
		return array[i + 1];
	}

}
int Practice::checkEven(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0)
		{
			return array[i];
		}
	}
	return 0;
}
int Practice::checkOdd(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 != 0)
		{
			return array[i];
		}
	}
	return 0;
}
void Practice::display() {
	cout << "Max: " << Max << endl;
	cout << "Min: " << Min << endl;
	cout << "Even: " << Even << endl;
	cout << "Odd: " << Odd << endl;
}
