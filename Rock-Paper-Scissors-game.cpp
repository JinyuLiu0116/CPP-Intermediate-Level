#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
	char player;
	char computer;
	char check;

	
	cout << "Rock Paper Scissors game!\n";
	cout << "*************************\n";
	do
	{
		player = getUserChoice();
		cout << "Your choice is: ";
		showChoice(player);

		computer = getComputerChoice();
		cout << "Computer's choice is:";
		showChoice(computer);

		chooseWinner(player, computer);

		cout << '\n';
	
		cout << "Do you want to continue? (y/n):";
		cin >> check;
		if (check != 'y' && check != 'Y' && check != 'n' && check != 'N')
		{
			cout << "Invalid input charactor.\n";
			cout << "Please enter again:";
			cin >> check;
		}
		
		
	} while (check != 'n' && check != 'N');
	cout << "Thank you for playing!";

}
char getUserChoice() {
	char player;
	do {
		cout << "Choose one of the following: \n";
		cout << "Enter 'r' for 'Rock'\n";
		cout << "Enter 'p' for 'Paper'\n";
		cout << "Enter 's' for 'Scissors'\n";
		cout << "Your choice:";
		cin >> player;
		switch (player) 
		{
		case 'r':
		case 'R':player = 'r'; break;
		case 'p':
		case 'P':player = 'p'; break;
		case 's':
		case 'S':player = 's'; break;
		default:cout << "You entered wrong character.\n";
		}
	} while (player != 'r' && player != 'p' && player != 's');

	return player;
}
char getComputerChoice() {
	srand(time(NULL));
	int num = rand() % 3 + 1;
	switch (num)
	{
	case 1: return 'r';
	case 2: return 'p';
	case 3: return 's';
	}
}
void showChoice(char choice) {
	switch (choice)
	{
	case 'r':cout << "rock\n"; break;
	case 'p':cout << "paper\n"; break;
	case 's':cout << "scissors\n"; break;
	}
}
void chooseWinner(char player, char computer) {
	switch (player)
	{
	case 'r': 
		if (computer == 'r')
			cout << "It's a tie!";
		else if (computer == 'p')
			cout << "Computer win!";
		else
			cout << "You win!";
		break;
	case 'p':
		if (computer == 'r')
			cout << "You win!";
		else if (computer == 'p')
			cout << "It's a tie!";
		else
			cout << "Computer win!";
		break;
	case 's':
		if (computer == 'r')
			cout << "Computer win!";
		else if (computer == 'p')
			cout << "You win!";
		else
			cout << "It's a tie!";
		break;
	}
}
