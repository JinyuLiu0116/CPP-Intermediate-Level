#include <iostream>
#include <string>
#include <vector>
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
	Item(const int& id, const string& newName, const int& newQuantity, const double& newPrice) {
		setID(id);
		setName(newName);
		setQuantity(newQuantity);
		setPrice(newPrice);
	}
	int getID();
	void setID(int);
	string getName();
	void setName(string);
	int getQuantity();
	void setQuantity(int);
	double getPrice();
	void setPrice(double);
	void display();
	
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
int Item::getID() {
	return itemID;
}
void Item::setID(int id) {
	itemID = id;
}
string Item::getName() {
	return name;
}
void Item::setName(string name) {
	this->name = name;
}
int Item::getQuantity() {
	return quantity;
}
void Item::setQuantity(int quantity) {
	this->quantity = quantity;
}
double Item::getPrice() {
	return price;
}
void Item::setPrice(double price) {
	this->price = price;
}
void Item::display() {
	cout << "Item ID:" << itemID << endl;
	cout << "Item name:" << name << endl;
	cout << "Item quantity:" << quantity << endl;
	cout << "Item price:" << price << endl;
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


