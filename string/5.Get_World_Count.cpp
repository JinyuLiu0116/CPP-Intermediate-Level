#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void setSentence(string& sentence);
int countWolds(const string& sentence);
int main() {
	string sentence;
	try {
		setSentence(sentence);
	}
	catch (const invalid_argument& e) {
		cerr << "Exception: " << e.what() << endl;
	}
	cout << "The sentence: (" << sentence << ") has " << countWolds(sentence) << " worlds." << endl;

}
void setSentence(string& sentence) {
	cout << "Enter a sentence:";
	getline(cin, sentence);
	if (sentence.empty()||sentence.at(0)==' ')
		throw invalid_argument("Sentence cannot be empty!");
}
int countWolds(const string& sentence) {
	int count=1;
	for (auto it = sentence.begin(); it != sentence.end(); it++) {
		if (*it == ' ')
			count ++;
	}
	return count;
}
