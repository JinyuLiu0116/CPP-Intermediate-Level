#include <iostream>
#include <cmath>
using namespace std;

class Circle {
	double Radius;
	double PI = 3.1415926;
public:
	Circle():Radius(0.0){}
	Circle(double radius):Radius(radius){}
	double getRadius() const { return this->Radius; }
	double getPI() const { return this->PI; }
	void setRadius(double radius) { this->Radius = radius; }
	double getArea() const;
	double getPerimeter() const;
};
int main() {
	Circle c1(11);
	cout << "The area of c1:" << c1.getArea() << endl;

	Circle c2(4.44);
	cout << "The perimeter of c2:" << c2.getPerimeter() << endl;

}
double Circle::getArea() const {
	return this->getPI() * pow(this->getRadius(), 2);
}
double Circle::getPerimeter() const {
	return 2 * this->getRadius() * this->getPI();
}