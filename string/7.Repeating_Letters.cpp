#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void setChar(string& character);
string doubleChar(const string& character);
int main() {
	string character;
	try {
		setChar(character);
	}
	catch (const invalid_argument& e) {
		cerr << "Exception:" << e.what() << endl;
	}

}
void setChar(string& character) {
	cout << "Enter charactors:";
	cin >> character;
	for (auto it : character) {
		if (it ==' ') {
			throw invalid_argument("Cannot not contain empty space");
		}
	}
	
	cout << "The each character of (" << character << ") is repected once:" << doubleChar(character) << endl;
}
string doubleChar(const string& character) {
	string result;
	for (auto it : character) {
		result += it;
		result += it;
	}
	return result;
}
