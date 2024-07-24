#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
	fstream myFile;
	int rows = 0;
	myFile.open("COVID Vaccine Data by Manufacturer.csv");

	int coutMOD = 0, countPFR = 0, countJSN = 0, countNVX = 0, countASZ = 0;
	string endMOD, endPFR, endJSN, endNVX, endASZ, date, brand, dailycount;

	while (getline(myFile, date, ',') && getline(myFile, brand, ',') && getline(myFile, dailycount, '\n')) {
		try
		{
			int count = stoi(dailycount);
			if (brand == "MOD") {
				coutMOD += count;
				endMOD = date;
			}
			else if (brand == "PFR") {
				countPFR += count;
				endPFR = date;
			}
			else if (brand == "JSN") {
				countJSN += count;
				endJSN = date;
			}
			else if (brand == "NVX") {
				countNVX += count;
				endNVX = date;
			}
			else if (brand == "ASZ") {
				countASZ += count;
				endASZ = date;
			}
		}
		catch (const invalid_argument& e) {
			cerr << "Invalid argument" << endl;
		}
		catch (const out_of_range& e) {
			cerr << "The string out of range" << endl;
		}

	}
	myFile.close();
	cout << "MOD: " << coutMOD << " end date: " << endMOD << endl;
	cout << "PFR: " << countPFR << " end date: " << endPFR << endl;
	cout << "JSN: " << countJSN << " end date: " << endJSN << endl;
	cout << "NVX: " << countNVX << " end date: " << endNVX << endl;
	cout << "ASZ: " << countASZ << " end date: " << endASZ << endl;


}
