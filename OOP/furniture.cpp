#include <iostream>

using namespace std;

class Funiture {
	string Wood;
	double Height;
	int Years, Drawers, Legs;
public:
	Funiture() : Wood("N/A"), Height(0.0), Years(1), Drawers(0), Legs(0){}
	Funiture(string wood, double height, int years, int drawers, int legs);
	string getWood() { return this->Wood; }
	double getHight() { return this->Height; }
	int getYears() { return this->Years; }
	int getDrawers() { return this->Drawers; }
	int getLegs() { return this->Legs; }
	void setWood(string w) { this->Wood = w; }
	void setHeight(double h);
	void setYears(int y);
	void setDrawers(int d);
	void setLegs(int l);
};

int main() {


}
Funiture::Funiture(string wood, double height, int years, int drawers, int legs) {
	this->setWood(wood);
	this->setHeight(height);
	this->setYears(years);
	this->setDrawers(drawers);
	this->setLegs(legs);
}
void Funiture::setHeight(double h) {
	if (h <= 0) {
		throw invalid_argument("Height cannot less then 1!");
	}
	else {
		this->Height = h;
	}
}
void Funiture::setYears(int y) {
	if (y <= 0) {
		throw invalid_argument("Years cannot less then 1!");
	}else{
		this->Years = y;
	}
}
void Funiture::setDrawers(int d) {
	if (d < 0) {
		throw invalid_argument("Numbers of Drawers cannot be negative!");
	}
	else {
		this->Drawers = d;
	}
}
void Funiture::setLegs(int l) {
	if (l < 0) {
		throw invalid_argument("Numbers of legs cannot be negative1");
	}
	else {
		this->Legs = l;
	}
}