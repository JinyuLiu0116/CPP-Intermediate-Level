#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(NULL));
	vector<int> v1;
	for (int i = 0; i < 5; i++) {
		v1.push_back(rand() % 15 + 1);
	}
	//using at() with bounds checking
	for (rsize_t i = 0; i < v1.size(); i++)
		cout << v1.at(i) << " ";
	cout << endl;

	//vector for 5 elements all initialized to -1;
	vector<int>	v2(5,-1);
	//using operator[]
	for (size_t i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout << endl;

	vector<int> v3 = { 9,11,6,2,15 };

	//copy assignment
	vector<int>v4 = v3;
	//add element after the third element 
	v4.insert(v4.begin() + 3, 10);
	//erase the third element
	v4.erase(v4.begin()+3);
	for (const auto& i : v4)
		cout << i << " ";
	cout << endl;

	//move assigment
	vector<int>v5 = move(v3);

	//iterators to traverse the vector
	for (auto it = v5.begin(); it != v5.end(); it++)
		cout << *it << " ";
	cout << endl;

	//using reverse iterators
	for (auto rit = v5.rbegin(); rit != v5.rend(); rit++)
		cout << *rit << " ";
	cout << endl;
}