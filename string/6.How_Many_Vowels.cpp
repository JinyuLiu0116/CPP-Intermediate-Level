#include<iostream>
#include<string>
#include<stdexcept>
#include<cctype>
using namespace std;
void setWord(string& word);
int countVowels(const string& word);
int main() {
	string word;
	try {
		setWord(word);
	}
	catch (const invalid_argument& e) {
		cerr << "Execption:" << e.what() << endl;
	}
	cout << "The word:(" << word << ") has " << countVowels(word) << " vowels." << endl;

}
void setWord(string& word) {
	cout << "Enter a word:";
	getline(cin, word);
	for (auto it : word) {
		if (isalpha(it)==0)
			throw invalid_argument("Word can only contain alphabets");
	}
}
int countVowels(const string& word) {
	return word.size();
}

