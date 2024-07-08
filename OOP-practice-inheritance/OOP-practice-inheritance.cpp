#include <iostream>
using namespace std;

class Character {
	string name;
	double atteck_power;
	double defense_power;
	
	void setAttackPower();
	void setDefensePower();
protected:
	string profession = "Adventurer";
	int strength;
	int dexterity;
	int intelligence;
	int constitution;
public:
	Character(string name)
	{
		this->name = name;
		strength = 10;
		dexterity = 10;
		intelligence = 10;
		constitution = 10;
		setAttackPower();
		setDefensePower();
	}
	void display();

};
class Warrior :public Character {

	void fixStrength();
	void fixConstitution();
public:
	Warrior(string name) :Character(name) {
		profession = "Warrior";
		fixStrength();
		fixConstitution();
	}
	
};
int main()
{
	Warrior warrior("StoneHolder");
	warrior.display();



}
void Character::setAttackPower()
{
	atteck_power = (strength * 1.5 + constitution * 0.5) * 1.1;
}
void Character::setDefensePower()
{
	defense_power = (constitution * 1.5 + strength * 0.5) * 1.1;
}
void Character::display()
{
	cout << "Character name:" << name << endl;
	cout << "Profession:" << profession << endl;
	cout << "strength:" << strength << endl;
	cout << "dexterity:" << dexterity << endl;
	cout << "intelligence:" << intelligence << endl;
	cout << "constitution" << constitution << endl;
	cout << "atteck power:" << atteck_power << endl;
	cout << "defense power:" << defense_power << endl;
}
void Warrior::fixStrength()
{
	strength += 5;
}
void Warrior::fixConstitution()
{
	constitution += 5;
}
