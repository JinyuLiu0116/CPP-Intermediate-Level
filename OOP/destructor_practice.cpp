#include <iostream>
#include <ctime>
using namespace std;

class Book {
	string Tital, Author;
	int* Rate;
	int RateCounter;
public:
	Book():Tital("N/A"),Author("N/A"),RateCounter(0){
		Rate = new int[RateCounter];
	}
	Book(string tital, string author)
		:Tital(tital),Author(author){
		RateCounter = 2;
		Rate = new int[RateCounter];
		setRate();
	}
	~Book() {
		delete[] Rate;
		Rate = nullptr;
	}
	int getRateCounter() { return RateCounter; }
	void setRate() {
		srand(time(NULL));
		for (int i = 0; i < getRateCounter(); i++) {
			Rate[i] = rand() % 4 + 1;
		}
	}
};

int main() {
	Book book1("Absolute C++", "Savitch");
	Book book2("The Apothecary", "Natsu");

}