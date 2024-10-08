#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int num);
int main() {
  int num = 0;

  while (true) {
    cout << "Enter number (0 = exit) and press Enter: ";
    cin >> num;
    if (num == 0)
      break;
    if (checkPrime(num))
      cout << num << " is prime" << endl;
    else
      cout << num << " is not prime" << endl;
  }
}
bool checkPrime(int num) {
  if (num <= 1)
    return false;
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0)
      return false;
  }
  return true;
}
