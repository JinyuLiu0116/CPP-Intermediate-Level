#include <iostream>
#include <list>
using namespace std;
//past value to the function to save the resources
//use const to ensure this function not change the value
//use const_iterator to replace iterator 
void displayRating(const list<int>& rating) {
	for (list<int>::const_iterator it = rating.begin(); it != rating.end(); it++) {
		cout << "Player rating: " << *it << endl;
	}
}
int main() {
	// Ranking for players
	list<int> allPlayers = { 2,9,6,7,3,1,4,8,3,2,9 };

	list<int> beginners;// rating 1-5
	list<int> pros;//ranting 6-10
	//create a matchmaking system

	//iterate through the allPlayers list
	for (list<int>::iterator it = allPlayers.begin(); it != allPlayers.end(); it++) {
		// access each iterater
		int rating = *it;
		if (rating >= 1 && rating <= 5) {
			beginners.push_back(rating);
		}
		else if (rating >= 6 && rating <= 10) {
			pros.push_back(rating);
		}
	}
	cout << "beginner: " << endl;
	displayRating(beginners);
	cout << "pros: " << endl;
	displayRating(pros);


}