#include <iostream>
#include <string>
using namespace std;

template<typename T>
void print(T value) {
	cout << value << endl;
}

template<typename T>
T add(T a, T b) {
	return a + b;
}
int main() {
	print(5);
	print(6.17);
	print("How are you?");
	print('A');
	print(pow(5, 2));


	cout << add(6, 5)<<endl;
	cout << add(6.6, 5.9)<<endl;
	string a = "Hello";
	string b = " World";
	cout << add(a, b);

}
