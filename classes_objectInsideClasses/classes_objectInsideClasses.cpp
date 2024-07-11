#include <iostream>
using namespace std;

class MaxMin {
	Prime max, min;
public:
	MaxMin() {
		max.setPrime(2);
		min.setPrime(2);
	}
	MaxMin(int num) {
		setMax(num);
		setMin(num);
	}
	MaxMin(int a, int b);
	int getMax() {
		return max.getPrime();
	}
	int getMin() {
		return min.getPrime();
	}
	void setMax(int num);
	void setMin(int num);
	void setMaxMin(int a, int b);
	MaxMin add(int a);
	MaxMin add(MaxMin obj);
};
class Prime {
	int prime;
	bool isPrime(int num);
public:
	Prime() {
		this->prime = 2;
	}
	Prime(int num) {
		setPrime(num);
	}
	int getPrime();
	void setPrime(int num);
	Prime add(int num);
	Prime add(Prime obj);

};

int main()
{



}
bool Prime::isPrime(int num) {
	if (num <= 1)
		return false;
	if (num == 2)
		return true;
	for (int i = 3; i <= sqrt(num); i++) {
		if (num % i == 0){
			return false;
			break;
		}
		return true;
	}
}
int Prime::getPrime() {
	return prime;
}
void Prime::setPrime(int num) {
	while (!isPrime(num)) {
		num++;
	}
}
Prime Prime::add(int num) {
	Prime p(this->prime + num);
	return p;
}
Prime Prime::add(Prime obj) {
	Prime p(this->prime + obj.getPrime());
	return p;
}
MaxMin::MaxMin(int a, int b) {
	setMaxMin(a, b);
}
void MaxMin::setMax(int num) {
	if (num < min.getPrime()) {
		max.setPrime(min.getPrime());
		min.setPrime(num);
	}
	else
		max.setPrime(num);
}
void MaxMin::setMin(int num) {
	if (num > max.getPrime()) {
		min.setPrime(max.getPrime());
		max.setPrime(num);
	}
	else
		min.setPrime(num);
}
void MaxMin::setMaxMin(int a, int b) {
	if (a > b) {
		max.setPrime(a);
		min.setPrime(b);
	}
	else {
		max.setPrime(b);
		min.setPrime(a);
	}
}
MaxMin MaxMin::add(int a) {
	MaxMin mm(this->max.getPrime() + a, this->min.getPrime() + a);
	return mm;
}
MaxMin MaxMin::add(MaxMin obj) {
	MaxMin mm(this->max.getPrime() + obj.max.getPrime(), this->min.getPrime() + obj.min.getPrime());
	return mm;
}
