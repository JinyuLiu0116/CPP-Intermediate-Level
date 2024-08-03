/*The type Point is a fairly simple data type, but under another name (the template class 
pair) this data type is defined and used in the C++ Standard Template Library, although 
you need not know anything about the Standard template Library to do this exercise. Write 
a definition of a class named Point that might be used to store and manipulate the location 
of a point in the plane. You will need to declare and implement the following member 
functions:
 a. a member function set that sets the private data after an object of this class is created.
 b. a member function to move the point by an amount along the vertical and horizontal 
directions specified by the first and second arguments.
 c. a member function to rotate the point by 90 degrees clockwise around the origin.
 d. two const inspector functions to retrieve the current coordinates of the point. 
Document these functions with appropriate comments. Embed your class in a test program 
that requests data for several points from the user, creates the points, then exercises the 
member functions.*/

#include <iostream>
using namespace std;

class Point 
{
	double X,Y;
public:
	void setData();
	void pointMovement(double y, double x);
	void rotateClockwise();
	 const void getData();

};
int main()
{
	Point plane1;
	plane1.setData();
	plane1.getData();
	plane1.pointMovement(3, 2);
	plane1.getData();
	plane1.rotateClockwise();
	plane1.getData();

}
void Point::setData()
{
	int x, y;
	cout << "Enter the x point on X-axis: ";
	cin >> x;
	cout << "Enter the y point on Y-axis:";
	cin >> y;
	X = x;
	Y = y;
}
void Point::pointMovement(double y, double x)
{
	Y += y;
	X += x;
	cout << "After the Y point moved " << y << " unites and X point moved " << x << " unites.\n";
}
void Point::rotateClockwise()
{
	double temp;
	temp = Y;
	Y = 0 - X;
	X = temp;
	cout << "After 90 degree rotate clockwise." << endl;
}
const void Point::getData()
{
	cout << "The points located on: (" << Y << "," << X << ")" << endl;

}
