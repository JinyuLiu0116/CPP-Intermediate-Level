#include <iostream>
using namespace std;

class MaxMin {
	int Max;
	int Min;
public:
	MaxMin();
	MaxMin(int a);
	MaxMin(int a, int b);
	int getMax();
	int getMin();
	void setter(int a, int b);
	int add(int a);
	MaxMin sumOfObj(MaxMin sum);
	void display();
};
int main()
{
	MaxMin test1;
	MaxMin test2(3);
	MaxMin test3(12, 22);
	cout << "Test1:";
	test1.display();
	cout << "Test2:";
	test2.display();
	cout << "Test3:";
	test3.display();

	test1.setter(5, 7);
	test1.display();

	int sumOfMax_Min = test2.add(5);
	cout << "After add 5 to both Max:" << test2.getMax()<<" and Min:"<<test2.getMin() << " the result is:" << sumOfMax_Min;

	MaxMin test4 = test2.sumOfObj(test3);
	cout << '\n';
	test2.display();
	test3.display();
	cout << "Add test3 to test2, the result is:";
	test4.display();




}
MaxMin::MaxMin()
{
	Max = 0;
	Min = 0;
}
MaxMin::MaxMin(int a) {
	Max = a;
	Min = a;
}
MaxMin::MaxMin(int a, int b) {
	setter(a, b);
}
int MaxMin::getMax()
{
	return Max;
}
int MaxMin::getMin()
{
	return Min;
}
void MaxMin::setter(int a, int b)
{
	if (a > b)
	{
		Max = a;
		Min = b;
	}
	else
	{
		Max = b;
		Min = a;
	}
}
int MaxMin::add(int a)
{
	MaxMin sum((Max + a), (Min + a));
	int add = sum.Max + sum.Min;
	return add;
}
MaxMin MaxMin::sumOfObj(MaxMin sum)
{
	MaxMin add((Max + sum.Max), (Min + sum.Min));
	return add;
}
void MaxMin::display()
{
	cout << "(" << Max << ", " << Min << ")\n";
}