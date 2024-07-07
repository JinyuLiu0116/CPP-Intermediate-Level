#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
	char player, computer;
	char checkCondition;

	cout << "Rock Paper Scissors Game!\n";
	cout << "*************************\n";
	do {
		player = getUserChoice();
		cout << "You choose:";
		showChoice(player);
		computer = getComputerChoice();
		cout << "Computer chooses:";
		showChoice(computer);

		chooseWinner(player, computer);
		cout << "*************************\n";
		cout << "Do you want to play again?(y/n):";
		cin >> checkCondition;
		
		while (checkCondition != 'y' && checkCondition != 'Y' && checkCondition != 'n' && checkCondition != 'N')
		{
			cout << "Invalid input charactor, please enter again:";
			cin >> checkCondition;
		}
		checkCondition = tolower(checkCondition);

	} while (checkCondition != 'n');
	cout << '\n' << "Thank you for play.\n";


}
char getUserChoice() {
	char playerInput;

	cout << "Choose one of following.\n";
	cout << "Enter 'r' for Rock.\n";
	cout << "Enter 'p' for Paper.\n";
	cout << "Enter 's' for Scissors.\n";
	cin >> playerInput;
	playerInput = tolower(playerInput);
	while (playerInput != 'r' && playerInput != 'p' && playerInput != 's')
	{
		cout << "Invalid input charactor, please enter again.\n";
		cin >> playerInput;
		playerInput = tolower(playerInput);
	}
	return playerInput;
	
}
char getComputerChoice() {
	srand(time(NULL));
	int roll;
	roll = rand() % 3 + 1;
	switch (roll) {
	case 1: return 'r';
		break;
	case 2: return 'p';
		break;
	case 3: return 's';
		break;
	}
}
void showChoice(char choice) {
	switch (choice)
	{
	case 'r': cout << "Rock!\n";
		break;
	case 'p': cout << "Paper!\n";
		break;
	case 's': cout << "Scissors!\n";
		break;
	}
}
void chooseWinner(char player, char computer) {
	switch (player)
	{
	case 'r': 
		if (computer == 'r')
			cout << "It's a tie!\n";
		else if (computer == 'p')
			cout << "Computer win!\n";
		else
			cout << "You win!\n";
		break;
	case 'p':
		if (computer == 'r')
			cout << "You win!\n";
		else if (computer == 'p')
			cout << "It's a tie!\n";
		else
			cout << "Computer win!\n";
		break;
	case 's':
		if (computer == 'r')
			cout << "Computer win!\n";
		else if (computer == 'p')
			cout << "You win!\n";
		else
			cout << "It's a tie!\n";
		break;
	}
}