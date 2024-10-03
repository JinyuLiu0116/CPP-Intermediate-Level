#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <sstream>
using namespace std;
/*Create a simple inventory management system using classes. 
The system should handle items with attributes like item ID, name, 
quantity, and price. Implement the following functionality:

*/

class Item {
	string itemID;
	string name;
	int quantity;
	double price;
public:
	Item(): itemID("Unknown"), name("Unknown"), quantity(0), price(0.0) {}
	Item(const int& id, const string& newName, const int& newQuantity, const double& newPrice) {
		setID(id);
		setName(newName);
		setQuantity(newQuantity);
		setPrice(newPrice);
	}
	string getID() const {return this->itemID;}
	string getName() const {return this->name;}
	int getQuantity() const {return this->quantity;}
	double getPrice() const {return this->price;}
	void setID(const int);
	void setName(const string);
	void setQuantity(const int);
	void setPrice(const double);
	string toString();
};
class Inventory {
	vector<Item> items;

public:
	void addItem(Item& item) {
		items.push_back(item);
	}
	void removeItem(int itemID);
	void updateItem(int itemID, string& name, int quantity, double price);
	void displayAllItems();
};
int main() {
	Inventory inventory;

	//Adding items, I don't know why have error, but I will figure it out later.
	inventory.addItem(Item(1, "Laptop", 10, 999.9));
	inventory.addItem(Item(2, "Smartphone", 20, 499.99));
	inventory.addItem(Item(3, "Tablet", 15, 299.99));

	// Displaying all items
	std::cout << "All Items:" << std::endl;
	inventory.displayAllItems();

	//remove Items
	std::cout << "\nRemoving Item ID 3:" << std::endl;
	inventory.removeItem(3);



}

void Item::setID(const int& id) {
	if(id<0)
		throw invalid_argument("Negative value");
	string itemID = to_string(id);
	if(itemID.empty())
		throw invalid_argument("Empty value");
	this->itemID = itemID;
}

void Item::setName(const string name) {
	if(name.empty()){
		throw invalid_argument("Empty input");
	}
	for(string::iterator it = name.begin(); it != name.end(); it++){
		if(!isalpha(*it))
			throw invalid_argument("Speical character");
	}
	this->name = name;
}

void Item::setQuantity(const int& quantity) {
	if(quantity < 0)
		throw invalid_argument("Negative value");
	this->quantity = quantity;
}

void Item::setPrice(const double& price) {
	this->price = price;
}
string Item::toStringy() {
	stringstream ss;
	ss <<"Item ID:" << this->getID() << endl 
		<< "Item name:" << this->getName() << endl 
		<< "Item quantity:" << this->getQuantity() << endl 
		<< "Item price:" << this->getPrice() << endl;
	return ss;
}
void Inventory::removeItem(int itemID) {
	//need to study more about vector to understand the code below;
	auto it = remove_if(items.begin(), items.end(), [itemID](Item& item) {
		return item.getID() == itemID;
		});
	if (it != items.end()) {
		items.erase(it, items.end());
		cout << "Item removed successfully." << endl;
	}
	else {
		cout << "Item not found." << endl;
	}
}
void Inventory::updateItem(int itemID, string& name, int quantity, double price) {
	
	for (auto& item : items) {
		if (item.getID() == itemID) {
			item.setName(name);
			item.setQuantity(quantity);
			item.setPrice(price);
			cout << "Item updated successfully." << endl;
			return;
		}
	}
	cout << "Item not found." << endl;
}
void Inventory::displayAllItems() {
	for (auto& item : items) {
		item.display();
		cout << "****************************" << endl;
	}

}


