#include <iostream>
#include <cmath>

void getDivisors(const int& num);
int triangleNumber(const int& num, const int& sum);
int main() {
	int number = 0;
	std::cout << "Please enter a number and press Enter:";
	std::cin >> number;

	std::cout << "The divisors of " << number << " are: ";
	getDivisors(number);
	std::cout << std::endl;

	int num, sum=0;
	std::cout << "Please enter a number to caclulate triangle number:";
	std::cin >> num;
	while(num <= 0){
		std::cout<<"Number cannot be 0 or negative.\n";
		std::cout<<"Please enter number again:";
		std::cin>>num;
	}
	int triangleNum = triangleNumber(num, sum);
	std::cout<<"The triangle number of "<< num <<" is: "<< triangelNum << std::endl;
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
int triangleNumber(int num, int sum){
	sum+=num;
	if(num != 0)
		triangleNumber(num-1, sum);
	else
		return sum;
}
