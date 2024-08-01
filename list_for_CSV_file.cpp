#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

//a1="2024-7-"
//a2="1"


int main() {
	srand(time(NULL));
	ofstream myFile("stock_price.csv");
	list<string> header;
	header.push_back("Date,");
	header.push_back("Open,");
	header.push_back("High,");
	header.push_back("Low,");
	header.push_back("Close,");
	header.push_back("Volume\n");

	if(myFile.is_open()){
		for (const string& it : header)
			myFile << it;
	}
	// list of data
	list<string> stock_data;
	for (int i = 1; i <= 30; i++) {
		string date = ("2024-7-")+ to_string(i) + ",";

		int o = rand() % 150 + 50;
		string Open = to_string(o) + ",";

		int h = rand() % 150+ 100;
		string High = to_string(h) + ",";

		int l = rand() % 100 + 90;
		string Low = to_string(l) + ",";

		int c = rand() % 150 + 90;
		string Close = to_string(c) + ",";

		int v = rand() % 300000;
		string Volume = to_string(v) + "\n";

		stock_data.push_back(date);
		stock_data.push_back(Open);
		stock_data.push_back(High);
		stock_data.push_back(Low);
		stock_data.push_back(Close);
		stock_data.push_back(Volume);
	}
	if (myFile.is_open()) {
		for (const string& it : stock_data)
			myFile << it;
	}

	myFile.close();
}