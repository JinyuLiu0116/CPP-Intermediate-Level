#include <iostream>
#include <list>
#include <string>
#include <ctime>
using namespace std;


int main() {
	list<string> skills = { "run","jump" };

	skills.push_back("super_jump");
	string temp = skills.front();
	skills.pop_front();
	skills.push_front("quick_move");
	skills.push_front(temp);

	for (list<string>::iterator i = skills.begin(); i != skills.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;

	list<int> num;
	for (int i = 0; i < 10; i++) {
		num.push_back(rand() % 20 + 1);
	}

	for (list<int>::iterator i = num.begin(); i != num.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	num.sort();
	for (list<int>::iterator i = num.begin(); i != num.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	list<int>num2;
	for (int i = 0; i < 10; i++) {
		num2.push_back(rand() % 20 + 1);
	}
	for (list<int>::iterator i = num2.begin(); i != num2.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	//num.merge(num2); //has error of merge() method that I don't know
	//for (list<int>::iterator i = num.begin(); i != num.end(); i++) {
	//	cout << *i << " ";
	//}
	//cout << endl;
	//num.sort();
	//for (list<int>::iterator i = num.begin(); i != num.end(); i++) {
	//	cout << *i << " ";
	//}
	//cout << endl;

}