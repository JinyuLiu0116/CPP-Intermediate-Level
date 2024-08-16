#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Funiture {
	string Wood;
	int Years;
protected:
	double Height;
	int Drawers, Legs;
public:
	Funiture() : Wood("N/A"), Height(0.0), Years(1), Drawers(0), Legs(0){}
	Funiture(string wood, double height, int years, int drawers, int legs);
	string getWood() { return this->Wood; }
	double getHight() { return this->Height; }
	int getYears() { return this->Years; }
	int getDrawers() { return this->Drawers; }
	int getLegs() { return this->Legs; }
	void setWood(string w) { this->Wood = w; }
	virtual void setHeight(double h);
	virtual void setDrawers(int d);
	virtual void setLegs(int l);
	void setYears(int y);
	string toString();
};
class Desk :public Funiture {
	double Length, Width;
public:
	Desk() :Funiture("N/A", 28, 1, 1, 4) { this->Length = 24; this->Width = 16; }
	Desk(string wood, double height, int years, int drawers, int legs, double length, double width);
	void setDrawers(int d) override=0;
	void setHeight(double h) override=0;
	void setLength(int l) override=0;
	void setWidth(int w);
	void setLegs(int l);
	int getLength() { return this->Length; }
	int getWidth() { return this->Width; }
	string toString();
};

int main() {


}
Desk::Desk(string wood, double height, int years, int drawers, int legs, double length, double width) {
	this->setWood(wood);
	this->setHeight(height);
	this->setYears(years);
	this->setDrawers(drawers);
	this->setLegs(legs);
	this->setLength(length);
	this->setWidth(width);
}
void Desk::setDrawers(int d) {
	if (d < 1) {
		throw invalid_argument("A desk must has at less one drawers!");
	}
	else {
		this->Drawers = d;
	}
}
void Desk::setHeight(double h) {
	if (h < 28||h>32) {
		throw invalid_argument("Height only between 28 and 32 inches!");
	}
	else {
		this->Height = h;
	}
}
void Desk::setLength(int l) {
	if (l < 24 || l>60) {
		throw invalid_argument("Length can only between 24 and 60 inches!");
	}
	else {
		this->Length = l;
	}
}
void Desk::setWidth(int w) {
	if (w < 16 || w>30) {
		throw invalid_argument("Width can only between 28 and 32 inches!");
	}
	else {
		this->Width = w;
	}
}
void Desk::setLegs(int l) {
	if (l!=4) {
		throw invalid_argument("Desks can only have four legs!");
	}
	else {
		this->Legs = l;
	}
}
string Desk::toString(){
	stringstream ss;
	ss<<Funiture::toString()
		<<" Desk (Length: " << this->getLength()
		<<", Width: " << this->getWidth()
		<<")"<<endl;
	return ss.str();
}
Funiture::Funiture(string wood, double height, int years, int drawers, int legs) {
	this->setWood(wood);
	this->setHeight(height);
	this->setYears(years);
	this->setDrawers(drawers);
	this->setLegs(legs);
}
string Funiture::toString(){
	stringstream ss;
	ss<<"Funiture:(Wood: " << this->getWood()
		<< ", Years: " << this->getYears()
		<< ", Height: "<< this->getHeight()
		<< ", Drawers: "<< this->getDrawers()
		<< ", Legs: "<< this->getLegs() << ")"<<endl;
	
	return ss.str();
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
