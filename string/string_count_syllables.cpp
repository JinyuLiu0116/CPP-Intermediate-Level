#include <iostream>
#include <string>
using namespace std;

int CountSyllables(string& word);
int main() {
	string word;
	cout << "Enter a world with syllables separated by dashes(-): ";
	cin >> word;

	int numOfSylla = CountSyllables(word);
	cout << "The word: " << word << " has " << numOfSylla << " syllables." << endl;

}
int CountSyllables(string& word) {
	int count=1;
	for (auto it = word.begin();it!=word.end();it++) {
		if (*it == '-'){
			word.erase(it);
			count++;
		}
	}
	return count;
}
