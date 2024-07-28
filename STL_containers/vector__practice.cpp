#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1 = { 1,2,3,4,5 };
	v1.push_back(6);
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << '\n';
	v1.pop_back();
	//iterator is a point to step through these containers
	for (vector<int>::iterator i = v1.begin();
		i != v1.end(); i++) {
		cout << *i << " ";
	}
	cout << '\n';
	v1.push_back(7);
	//data method can return a pointer to the first element of the vector
	int* pV1 = v1.data();
	for (int i = 0; i < v1.size(); i++) {
		cout << *pV1++ << " ";
	}
	cout << '\n';

	//remove items from the middle, vector will be very slow
	//it need to copy all the items after the one removed and push_back() them 
	v1.erase(v1.begin() + 2);//remove 3

	//constractor
	vector<int> v2(20);
	cout << v2.size() << endl;// size = 20
	cout << v2.capacity() << endl;//capacity = 20

	//when we start add items to the vector, it will create more capacity then the items we added;
	v2.push_back(1);
	cout << v2.size() << endl;// size = 21
	cout << v2.capacity() << endl; //capacity = 30

	v2.shrink_to_fit();//this method can limit capacity to the size of vector
	//however, it will be very costly because vecoter need to fix the capacity everytime when new item added;
	//therefore, only use when you ran out of memory

	// other method:  v2.clear();  v2.empty();



}