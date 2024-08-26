#include <iostream>
#include <string>
using namespace std;

int main() {
	string credit_card;
	cout << "Please enter your cridit card number: ";
	getline(cin, credit_card);
	int index = 0;
	string card_number;
	if (credit_card.length() <= 4)
		card_number = credit_card;
	else{
		for (int i = 0; i < credit_card.length();i++) {
			if (i<credit_card.length()-4)
				card_number.append("#");
			else{
				char x = credit_card[i];
				card_number.push_back(x);
			}
		}
	}
	cout << "Your card number is:" << card_number << endl;
}
