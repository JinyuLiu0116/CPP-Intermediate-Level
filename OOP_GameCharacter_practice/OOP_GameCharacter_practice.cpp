#include <iostream>
using namespace std;

class Player {
	int x, y;
	int speed;
public:
	void setX(int xa)
	{
		x = xa;
	}
	void setY(int ya)
	{
		y = ya;
	}
	void setSpeed(int sp)
	{
		speed = sp;
	}
	void display()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};
//move function ouside the class
//void Move(Player& player, int xa, int ya)
//{
//	player.x += xa * player.speed;
//	player.y += ya * player.speed;
//
//}

int main()
{
	Player player;
	//player.x = 5;
	player.setX(5);
	//player.y = 3;
	player.setY(3);
	//player.speed = 2;
	player.setSpeed(2);
	//Move(player, 1, -1);
	player.Move(1, -1);
	player.display();
}