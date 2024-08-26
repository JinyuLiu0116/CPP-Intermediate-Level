#include <iostream>
#include <string>
using namespace std;

string maskify(const string& card);
int main() {
	string credit_card;
	cout << "Please enter your cridit card number: ";
	getline(cin, credit_card);
	cin.ignore();
	while(credit_card.empty()){
		cout<<"Credit card number cannot be empty\n";
		cout<<"Please enter your cridit card number: ";
		getline(cin, credit_card);
		cin.ignore();
	}
	string card_number=maskify(credit_card);
	cout << "Your card number is:" << card_number << endl;
}
string maskify(const string& card){
	if(card.length()<=4)
		return card;
	string m_string(card.length()-4,'#');
	m_string+=card.substr(card.length()-4);
	return m_string;
}
