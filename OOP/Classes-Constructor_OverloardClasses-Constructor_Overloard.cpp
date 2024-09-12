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
public:
	Practice();
	Practice(int a);
	Practice(int a, int b);
	Practice(int a, int b, int c);
	Practice(int a, int b, int c, int d);
	void display();


};

void assignValue(int& a, int& b, int& c, int& d)
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
	assignValue(a, b, c, d);
	

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
	this->Max = 0;
	this->Min = 0;
	this->Odd = 0;
	this->Even = 0;
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
	for(int in=0; i<size; i++){
		if(array[i]>array[i+1]){
			this.Max = array[i];
			this.Min = array[i+1];
		}
		if(array[i]%2==0)
			this.Even=array[i];
		else
			this.Odd=array[i];
	}
}
void Practice::display() {
	cout << "Max: " << this->Max << endl;
	cout << "Min: " << this->Min << endl;
	cout << "Even: " << this->Even << endl;
	cout << "Odd: " << this->Odd << endl;
}
