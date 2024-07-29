#include <iostream>
#include <string>
#include <ctime>
using namespace std;

template<typename T,int N>
class Array {
	T m_Array[N];
public:
	int getSize() const {
		return N;
	}
	void fillM_Array() {
		for (int i = 0; i < N; i++) {
			cout << "Enter a value for index position: " << i;
			cin >> m_Array[i];//in this case, I cannot get input string type value.
		}
	}
	void getM_Array() {
		for (int i = 0; i < N; i++) {
			cout << m_Array[i] << " ";
		}
	}
};
int main() {
	Array<string, 10> sArray;
	cout << sArray.getSize() << endl;
}