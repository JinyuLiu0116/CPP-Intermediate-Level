#include <iostream>
#include <list>
#include <string>
using namespace std;

class Position {
	string Ticker, Type;
	int Shares;
	double Price;
public:
	Position() : Ticker("N\A"), Type("N\A"), Shares(0), Price(0.0) {}
	Position(string,string,int,double);
	string getTicker();
	string getType();
	int getShares();
	double getPrice();
	void setTicker(string);
	void setType(string);
	void setShares(int);
	void setPrice(double);
	void display();
};
class Broker {
	list<Position> holdings;
public:
	Broker() { }
	list<Position> getHoldings() const { return this->holdings;}
	virtual void buy(string ticker, string type, int shares, double price)=0;
	virtual double sell(string ticker, string type, int shares, double price)=0;

};
class Oanda : public Broker {
public:
	void buy(string ticker, string type, int shares, double price)override {};
	double sell(string ticker, string type, int shares, double price)override {};
};



int main() {

}



void Oanda::buy(string ticker, string type, int shares, double price) {
	if (type != "CUR") {
		throw invalid_argument("Only can buy CUR type stock!");
	}
	for (list<Position>::iterator ip = Broker::getHoldings().begin(); ip != Broker::getHoldings().end(); ip++) {
		if (ip->getTicker() == ticker) {
			ip->setPrice((ip->getPrice() * ip->getShares() + price * shares) / (ip->getShares() + shares));
			ip->setShares(ip->getShares() + shares);
		}
		else {
			Position p1(ticker, type, shares, price);
			Broker::getHoldings().push_back(p1);
		}
	}
}
double Oanda::sell(string ticker, string type, int shares, double price) {
	if (type != "CUR") {
		throw invalid_argument("Only can sell CUR type stock!");
	}
	for (list<Position>::iterator ip = Broker::getHoldings().begin(); ip != Broker::getHoldings().end(); ip++) {
		if (ip->getTicker() == ticker) {
			if (ip->getShares() < shares) {
				throw invalid_argument("Not enough shares to sell!");
				double amount = ip->getShares() * price;
				Broker::getHoldings().erase(ip);
				return amount;
			}
			else if (ip->getShares() == shares) {
				double amount = ip->getShares() * price;
				Broker::getHoldings().erase(ip);
				return amount;
			}else{
				ip->setPrice((ip->getShares() * ip->getPrice() + shares * price) / (ip->getShares() + shares));
				ip->setShares(ip->getShares() + shares);
				return shares * price;
			}
		}
		else {
			Position p1(ticker, type, shares, price);
			Broker::getHoldings().push_back(p1);
		}
	}
}
Position::Position(string ticker, string type, int shares, double price) {
	this->Ticker = ticker;
	this->Type = type;
	this->Shares = shares;
	this->Price = price;
}
string Position::getTicker() {
	return this->Ticker;
}
string Position::getType() {
	return this->Type;
}
int Position::getShares() {
	return this->Shares;
}
double Position::getPrice() {
	return this->Price;
}
void Position::setTicker(string ticker) {
	this->Ticker = ticker;
}
void Position::setType(string type) {
	this->Type = type;
}
void Position::setShares(int shares) {
	this->Shares = shares;
}
void Position::setPrice(double price) {
	this->Price = price;
}
void Position::display() {
	cout << "(Ticker: " << this->getTicker() << ", type: " << this->getType() << ", shares: " << this->getShares() << ", price: " << this->getPrice() << ")\n";
}