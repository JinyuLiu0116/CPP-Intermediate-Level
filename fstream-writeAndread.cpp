#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
	fstream myFile;
	myFile.open("myfile.txt", ios::out);//write
	if (myFile.is_open()) {
		cout << "File is opened.\n";
		myFile << "Hello.\n";
		myFile << "This is second line.\n";
		myFile.close();
	}
	else {
		cout << "File is not opened.\n";
	}

	myFile.open("myfile.txt", ios::app);//append
	if (myFile.is_open()) {
		cout << "File is opened.\n";
		myFile << "I have added more contain to the file.\n";
		myFile << "By using append method.\n";
		myFile.close();
	}
	else {
		cout << "File is not opened.\n";
	}
	myFile.open("myfile.txt", ios::in);//read
	if (myFile.is_open()) {
		string line;
		while (getline(myFile, line))
			cout << line << endl;
	}

	

}