#include <iostream>
using namespace std;

class Entity {
public:
	virtual string getName() { return "Entity"; }
};

class Player : public Entity {
	string m_Name;
public:
	Player(const string& name) : m_Name(name){}
	// override can check the if the name of function exsits in parent class
	// and if it is virtual function
	string getName() override { return m_Name; }

};

void printName(Entity* entity) {
	cout << entity->getName() << endl;
}
int main() {
	Entity* e = new Entity();
	printName(e);

	Player* p = new Player("Jinyu");
	printName(p); //player is entity
}