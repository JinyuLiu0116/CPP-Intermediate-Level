#include <iostream>
using namespace std;

class Even {
	int num;
public:
	//inistialize num to 2
	Even();
	//if a is odd, num increat one
	Even(int a);
	//return num
	int getter();
	//set num to be a, if a is odd, a ++
	void setter(int a);
	//retun sum of num and a, if sum is odd, sum ++
	int sum(int a);
};
int main()
{
	int num;
	Even test;
	cout << "Test:"<<test.getter() << endl;
	Even test1(5);
	cout << "Test1:"<<test1.getter() << endl;
	cout << "Set a number to test:";
	cin >> num;
	test.setter(num);
	cout << "Test is:" << test.getter() << endl;
	cout << "Enter a number to add to test1:";
	cin >> num;
	cout << "The sum of input number and test1 is:" << test1.sum(num) << endl;



}
Even::Even()
{
	num = 2;
}
Even::Even(int num)
{
	setter(num);
}
int Even::getter()
{
	return num;
}
void Even::setter(int a)
{
	if (a % 2 != 0)
		num = a + 1;
	else
		num = a;
}
int Even::sum(int a)
{
	int sum;
	sum = num + a;
	if (sum % 2 != 0)
	{
		sum++;
		return sum;
	}
	else
		return sum;
	
}
