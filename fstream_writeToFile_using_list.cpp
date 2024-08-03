#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <ctime>
using namespace std;


int main() {
	ofstream myFile("Stock_Price.csv");
	if (myFile.is_open())
		cout << "myFile is open.\n";
	else
		cout << "myFile is not open.\n";

	//create columns for stock file
	list<string> columns = { "Open,","High,","Low,","Close," };
	
	//add Date to the front, Volume to the end;
	columns.push_front("Date,");
	string v = "Volume\n";
	columns.push_back(v);
	//write columns to file
	if (myFile.is_open()) {
		for (const auto& it : columns)
			myFile << it;
	}
	//create values for colomns
	list<int> v1 = { 103,120 };
	list<int>v2 = { 99,100 };
	list<string> value = { "2024-7-1," };
	
	//merge two list and assign to the thir
	v1.merge(v2);
	//conver v1 to string and add to columns
	for (auto& it : v1) {
		//use comma to seperate columns
		string temp = to_string(it) + ",";
		value.push_back(temp);
	}
	//create volum, converts to string and add to columns
	int volume = 345012;
	string volu = to_string(volume) + "\n";
	value.push_back(volu);
	
	//write values to file
	if (myFile.is_open()) {
		for (const auto& it : value)
			myFile << it;
	}
	//write the value of the rest of the month
	list<string> stock_data;
	//use random function with tiem function to create true random values
	srand(time(NULL));
	for (int i = 2; i <= 30; i++) {
		//conver i to string to be days and add to Date
		string date = ("2024-7-") + to_string(i) + ",";
		//rand() function assigns random values and convert to string add to list
		int o = rand() % 150 + 50;
		string Open = to_string(o) + ",";

		int h = rand() % 150 + 100;
		string High = to_string(h) + ",";

		int l = rand() % 100 + 90;
		string Low = to_string(l) + ",";

		int c = rand() % 150 + 90;
		string Close = to_string(c) + ",";

		int v = rand() % 300000;
		string Volume = to_string(v) + "\n";
		//push all values to list
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
	//Open my file to read
	fstream file;
	file.open("Stock_Price.csv");
	string line;
	//use fstream to read file
	cout << "columns are: \n";
	while(getline(file,line))
		cout << line<<endl;
	cout << endl;
	file.close();

	

}