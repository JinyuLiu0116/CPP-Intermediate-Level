#include <iostream>
#include <cmath>

void getDivisors(int num);
int main() {
	int number = 0;
	std::cout << "Please enter a number and press Enter:";
	std::cin >> number;

	std::cout << "The divisors of " << number << " are: ";
	getDivisors(number);
	std::cout << std::endl;

}
void getDivisors(int num) {
	for (int i = 2; i <= num; i++) {
		if (num % i == 0) {
			std::cout << i << " ";
			getDivisors(num / i);
			return;
		}
	}
}
