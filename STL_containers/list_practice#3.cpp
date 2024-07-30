#include <iostream>
#include <list>
#include <ctime>
using namespace std;


int main() {
	list<string> skills = { "dodge","Jump","acctack" };
	skills.push_front("focus");
	for (list<string>::iterator i = skills.begin(); i != skills.end(); i++)
		cout << *i << " ";
	cout << endl;

	for (auto& i : skills)
		cout << i << " ";
	cout << endl;

	for (string i : skills)
		cout << i << " ";
	cout << endl;

	skills.pop_back();
	skills.push_back("quick_acctack");
	for (string i : skills)
		cout << i << " ";
	cout << endl;

	skills.pop_front();
	skills.push_back("tunderbolt");
	for (string i : skills)
		cout << i << " ";
	cout << endl;

	list<string>::iterator i = skills.begin();
	advance(i, 3);
	skills.insert(i, "iron_tiel");
	for (string i : skills)
		cout << i << " ";
	cout << endl;

	list<int> num1 = { 1,2,3 };
	list<int> num2 = { 4,5,6 };
	num1.merge(num2);
	for (int i : num1)
		cout << i << " ";



}