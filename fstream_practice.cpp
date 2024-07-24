#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
	fstream myFile;
	int rows = 0;
	myFile.open("COVID Vaccine Data by Manufacturer.csv");
	//counters for count the amount
	int countMOD = 0, countPFR = 0, countJSN = 0, countNVX = 0, countASZ = 0;
	// to store the start date
	string  startMOD, stratPFR, startJSN, startNVX, startASZ;
	// to store the end date
	string endMOD, endPFR, endJSN, endNVX, endASZ, date, brand, dailycount;
	//while loop to read each value that separate by comma and new line character
	while (getline(myFile, date, ',')&& getline(myFile, brand, ',')&& getline(myFile, dailycount, '\n')) {
		//try and catch is used to solve the errors when cast string to integer
		try
		{	
			int count = stoi(dailycount);// stoi()function to convert string to integer
			if (brand == "MOD") {
				//use empty()function for condition to ensure only store the first date
				if (startMOD.empty()) {
					startMOD = date;
				}
				countMOD += count;// adding numbers
				endMOD = date;// keep flash end date untill the last date
			}
			else if (brand == "PFR") {
				if (stratPFR.empty()) {
					stratPFR = date;
				}
				countPFR += count;
				endPFR = date;
			}
			else if (brand == "JSN") {
				if (startJSN.empty()) {
					startJSN = date;
				}
				countJSN += count;
				endJSN = date;
			}
			else if (brand == "NVX") {
				if (startNVX.empty()) {
					startNVX = date;
				}
				countNVX += count;
				endNVX = date;
			}
			else if (brand == "ASZ") {
				if (startASZ.empty()) {
					startASZ = date;
				}
				countASZ += count;
				endASZ = date;
			}
		}//catch to check errors and 'cerr' output statement is for output error
		catch (const invalid_argument& e) {
			cerr << "Invalid argument" << endl;
		}
		catch (const out_of_range& e) {
			cerr << "The string out of range" << endl;
		}

	}
	myFile.close();
	//format output
	cout << "COVID Manufacturer | Total Vaccines | Date Range	\n";
	cout << "Moderna            | " << countMOD << "         | " << startMOD <<" to " << endMOD << endl;
	cout << "Pfizer             | " << countPFR << "         | " << stratPFR << " to " << endPFR << endl;
	cout << "Johnson & Johnson  | " << countJSN << "          | " << startJSN << " to " << endJSN << endl;
	cout << "Novanax            | " << countNVX << "            | " << startNVX << " to " << endNVX << endl;
	cout << "AstraZeneca        | " << countASZ << "             | " << startASZ << " to " << endASZ << endl;


}
