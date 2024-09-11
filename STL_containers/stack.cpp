#include <iostream>
#include <stack>

int main() {
	std::stack<int>numbersStack;

	if (numbersStack.empty())
		std::cout << "Stack is empty" << std::endl;
	else
		std::cout << "Stack is not empty" << std::endl;

	std::cout << "Size of the Stack is:" << numbersStack.size() << std::endl;
}