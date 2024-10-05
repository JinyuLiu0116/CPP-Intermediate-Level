#include <iostream>


class MaxMin {
	int Max, Min;
public:
	MaxMin() : Max(0),Min(0){}
	MaxMin(const int& a) : Max(a),Min(a){}
	MaxMin(const int& a, const int& b);
	MaxMin(const MaxMin& mm) { this->setMax(mm.Max); this->setMin(mm.Min); }
	int getMax() { return this->Max; }
	int getMin() { return this->Min; }
	void setMax(int max);
	void setMin(int min);
	void display() { cout << "Max: " << this->getMax() << ", Min: " << this->getMin() << endl; }
};
int main() {
	MaxMin mm1;
	mm1.setMax(15);
	mm1.setMin(21);
	std::cout << "mm1:" << std::endl;
	mm1.display();

	MaxMin mm2(mm1);
	std::cout << "mm2:" << std::endl;
	mm2.display();

	MaxMin mm3(mm2.getMax() - 10, mm1.getMin() + 20);
	std::cout << "mm3:" << std::endl;
	mm3.display();
	

}
MaxMin::MaxMin(int a, int b) {
	if (a >= b) {
		this->setMax(a);
		this->setMin(b);
	}
	else {
		this->setMax(b);
		this->setMin(a);
	}
}
void MaxMin::setMax(int max) {
	if (max < this->getMin()) {
		this->Max = this->Min;
		this->Min = max;
	}
	else {
		this->Max = max;
	}
}
void MaxMin::setMin(int min) {
	if (min > this->getMax()) {
		this->Min = this->Max;
		this->Max = min;
	}
	else {
		this->Min = min;
	}
}
