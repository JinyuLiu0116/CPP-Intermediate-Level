#include <iostream>
#include <list>
#include <sstream>
using namespace std;

class Point{
    double X,Y;
public:
    Point():X(0),Y(0){}
    Point(double x, double y):X(x),Y(y){}
    //Point(Point p):this->X(p.getX()),this->Y(p.getY()){}
    double getX(){return this->X;}
    double getY(){return this->Y;}
    void setX(double x){this->X=x;}
    void setY(double y){this->Y=y;}
    string toString();
    bool operator==(const Point& p);
};


int main(){
    Point p1;
    cout<<"p1: "<<p1.toString()<<endl;
    Point p2(3.75,-5.78);
    cout<<"p2: "<<p2.toString()<<endl;
    if(p2==p1){
        cout<<"p2 equals p1."<<endl;
    }else{
        cout<<"p2 not equals p1."<<endl;
    }
}
string Point::toString(){
    stringstream ss;
    ss<<"X: "<<this->getX()<<",Y: "<<this->getY()<<endl;
    return ss.str();
}
bool Point::operator==(const Point& p){
    return (X==p.X&&Y==p.Y);
}
