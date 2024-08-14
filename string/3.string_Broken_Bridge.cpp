#include <iostream>
#include <string>
using namespace std;

bool checkInput(const string& bridge);
int main() {
	string bridge;
	cout << "Pleas enter some '#' to build a bridge.\n";
	cout << "You can enter a ' ' in midle of your bridge.\n";
	getline(cin, bridge);
	try{
		if (checkInput(bridge)){
			cout << "Your bridge is safe.\n";
		}
		else{
			cout << "Your bridge is not safe.\n";
		}
	}
	catch (const invalid_argument& e) {
		cerr<<"Exception: " << e.what();
	}
}
bool checkInput(const string& bridge) {
	for(char it:bridge)
	{
		if (it != '#' && it != ' ') 
			throw invalid_argument("Please only use '#' for bridge and ' ' for empty space!\n");
	}
	if (bridge.front() == ' ' || bridge.back() == ' ')
		throw invalid_argument("Cannot have empty space in front or end or the bridge!\n");

	for (char it : bridge) {
		if (it == ' ')
			return false;
	}
	return true;
}
