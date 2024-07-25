#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//Only display the following county BRONX and QUEENS of the Cumulative Number of
//Positives from 03 / 01 / 2020 to 07 / 28 / 2023.
//• After you have created the program to simplify the information it should be displayed in
//the console output.
//• The Output should be reflected in three columns.
//(County | Positive Covid Test | Date Range)


int main() {
	fstream myFile;
	myFile.open("New_York_State_Statewide_COVID-19_Testing(1).csv");
	if (myFile.is_open())
		cout << "File is opened.\n";
	else
		cout << "File is not opened.\n";
	/*string line;
	while(getline(myFile, line)) {
		cout << line << endl;
	}*/
	
	int count_Bronx = 0, count_Queens = 0;
	string start_date_Bronx, start_date_Queens, end_date_Bronx, end_date_Queens;
	string date, country, NewPostive, CNOP, TNOTP, CNOTP, TP, Geography;
	while (getline(myFile, date, ',')&&getline(myFile, country, ',')&&getline(myFile, NewPostive, ',')&&getline(myFile, CNOP, ',')&&getline(myFile, TNOTP, ',')&&getline(myFile, CNOTP, ',')&&getline(myFile, TP, ',')&&getline(myFile, Geography, '\n')) {
		string endB, endQ;
		try {
			if (date == "03/01/2020" && country == "Bronx"&& start_date_Bronx.empty())
				start_date_Bronx = date;

			if (date == "03/01/2020" && country == "Queens"&& start_date_Queens.empty())
				start_date_Queens = date;
			if (country == "Bronx") {
				endB = date;
				int num = stoi(CNOP);
				count_Bronx += num;
				
			}
			if (country == "Queens") {
				endQ = date;
				int num = stoi(CNOP);
				count_Queens += num;
			}
		}
		catch (const invalid_argument& e) {
			cerr << "Invalid argument" << endl;
		}
		catch (const out_of_range& e) {
			cerr << "The string out of range" << endl;
		}
		if (endB =="07/28/2023"){
			end_date_Bronx = endB;
		}
		if (endQ == "07/28/2023") {
			end_date_Queens = endQ;
		}
	}
	
	myFile.close();
	cout << "(County | Positive Covid Test | Date Range               )\n";
	cout << "(Bronx  | "<<count_Bronx << "           | " <<start_date_Bronx<<" to "<< end_date_Bronx <<" )"<<endl;
	cout << "(Queens | "<<count_Queens << "           | " <<start_date_Queens<<" to "<< end_date_Queens << " )" << endl;
}