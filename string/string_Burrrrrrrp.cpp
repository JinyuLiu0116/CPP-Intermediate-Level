#include <iostream>
#include <string>
using namespace std;

string Burp(int num);
int main() {
  int numberOfR;
  cout << "We have a word: Burp.\nPlease enter a number to detement how many 'r' you want:";
  cin >> numberOfR;
  iwhile (numberOfR < 1) {
    cout<<"The word Brup has at less one 'r'!\nPlease enter a number again:";
    cin>>numberOfR;
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
