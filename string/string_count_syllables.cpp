#include <iostream>
#include <string>
using namespace std;

int CountSyllables(const string& word);
int main() {
	string word;
	cout << "Enter a world with syllables separated by dashes(-): ";
	cin >> word;

	int numOfSylla = CountSyllables(word);
	cout << "The word: " << word << " has " << numOfSylla << " syllables." << endl;

}
int CountSyllables(const string& word) {
	int count=1;
	for (char it : word) {
		if (it == '-')
			count++;
	}
	return count;
}
