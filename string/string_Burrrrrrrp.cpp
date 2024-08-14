#include <iostream>
#include <string>
using namespace std;

string Burp(int num);
int main() {
  int numberOfR;
  cout << "We have a word: Burp.\nPlease enter a number to detement how many 'r' you want:";
  cin >> numberOfR;
  if (numberOfR < 1) {
    throw invalid_argument("The word Burp has at least one 'r'!\n");
  }
  string burp = Burp(numberOfR);
  cout << "Here is your " << burp << endl;
}
string Burp(int num) {
  string burp = "Bu";
  burp.append(num, 'r');
  burp += 'p';
  return burp;
  
}
