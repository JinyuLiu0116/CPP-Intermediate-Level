#include <iostream>
#include <stack>

void printStackElements(std::stack<int> stack);

int main() {
	std::stack<int>numbersStack;

	if (numbersStack.empty())
		std::cout << "Stack is empty" << std::endl;
	else
		std::cout << "Stack is not empty" << std::endl;

	std::cout << "Size of the Stack is:" << numbersStack.size() << std::endl;

	numbersStack.push(15);
	numbersStack.push(7);
	numbersStack.push(0);

	printStackElements(numbersStack);
}

void printStackElements(std::stack<int> stack){
	while(!stack.empty()){
		std::cout<<stack.top()<<" "<<std::endl;
		stack.pop();
	}
}
