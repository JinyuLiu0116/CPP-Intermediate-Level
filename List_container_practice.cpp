#include <iostream>
#include <list>
using namespace std;

int main() {
	
	list<int> myList;
	myList.push_back(10);
	myList.push_back(20);
	myList.push_front(30);
	myList.erase(myList.begin());
	//use iterator
	for (list<int>::iterator it = myList.begin(); it != myList.end(); it++) {
		//iterator is point to a adress to the list, we need put * infront of it
		cout << *it << " ";
	}
}