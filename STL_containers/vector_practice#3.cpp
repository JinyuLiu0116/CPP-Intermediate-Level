#include <iostream>
#include <vector>
#include <ctime>

void fillVector(std::vector<int>& v, size_t size);
void printVector(const int array[], size_t size);
void reassignData(int array[], size_t size);
int main() {
	int size = 0;
	std::cout << "Enter number:";
	std::cin >> size;
	std::vector<int> myVector;
	fillVector(myVector,size);

	int* p_vector = myVector.data();
	for (size_t i = 0; i < myVector.size(); i++)
		std::cout << p_vector[i]<<" ";
	std::cout << std::endl;

	reassignData(myVector.data(), myVector.size());
	std::cout << "Print data:" << std::endl;
	for (auto& i : myVector)
		std::cout << i << " ";

	std::cout << std::endl << "Print data from function:" << std::endl;
	reassignData(myVector.data(), myVector.size());
	printVector(myVector.data(), myVector.size());
}


void fillVector(std::vector<int>& v, size_t size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		v.push_back(rand() % 20);
	}
}
void printVector(const int array[], size_t size) {
	for (int i = 0; i < size; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}
void reassignData(int array[], size_t size) {
	for (int i = 0; i < size; i++)
		array[i] = rand() % 50 + 1;
}


