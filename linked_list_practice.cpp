#include <iostream>
using namespace std;

class Node {
public:
	int Value;
	Node* Next;
};

void printList(Node* n) {
	while (n!=NULL) {
		cout << n->Value << endl;
		n = n->Next;
	}
}
int main() {
	Node* head = new Node();//the first element of linked list
	Node* second = new Node();
	Node* third = new Node();

	//assign values to the elements and link elements
	head->Value = 100;
	head->Next = second;
	second->Value = 200;
	second->Next = third;
	third->Value = 300;
	third->Next = NULL;

	printList(head);
}