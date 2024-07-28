#include <iostream>
#include <list>
using namespace std;

int main() {
	list<double> l1 = { 1,2,3,4,5 };
	l1.push_back(6);
	//list can push_front(), must faster to add new item than vector
	l1.push_front(0);// list dosen't need to reallocate whole list when add new item

	cout << l1.front() << endl;
	cout << l1.back() << endl;
	l1.pop_back();
	l1.pop_front();

	cout << l1.size() << endl;
	//we can use iterator, but we can't use the way as array to access index or use pointer
	for (list<double>::iterator i = l1.begin(); i != l1.end(); i++) {
		cout << *i << " ";// 1 2 3 4 5
	}
	//because list is double linkd list, we can use backward iterator
	for (list<double>::reverse_iterator i = l1.rbegin(); i != l1.rend(); i++) {
		cout << *i << " ";// 5 4 3 2 1
	}

	//use iterator to change the value in the middle of list
	list<double>::iterator i = l1.begin();
	i++; // access index position [1]
	*i = 100; // change value 2 to 100

	for (list<double>::iterator i = l1.begin(); i != l1.end(); i++) {
		cout << *i << " ";// 1 100 3 4 5
	}
}