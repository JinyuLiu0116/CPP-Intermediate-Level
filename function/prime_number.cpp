#include <iostream>
#include <cmath>

bool checkPrime(const int& num);
int main() {
  int num = 0;

  while (true) {
    std::cout << "Enter number (0 = exit) and press Enter: ";
    std::cin >> num;
    if (num == 0)
      break;
    if (checkPrime(num))
      std::cout << num << " is prime" << std::endl;
    else
      std::cout << num << " is not prime" << std::endl;
  }
}
bool checkPrime(const int& num) {
  if (num <= 1)
    return false;
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0)
      return false;
  }
  return true;
}
