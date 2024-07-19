#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;

class LaGuardiaStudent
{
public:
    string name;
    string email;
    string student = "LaGuardia";
    int fistTHreeIndex;
    int secondTheeIndex;
    int lastFourIndex;
    LaGuardiaStudent() {
        this->student = "LaGuardia";
        this->name = "";
        this->email = "";
        this->fistTHreeIndex = 0;
        this->secondTheeIndex = 0;
        this->lastFourIndex = 0;
    }
    //after created array of object, use this function to set valuses
    void setInformation(string, string, int, int, int);
    void display();
    //geters
    string getName();
    string getEmail();
    string getStudent();
    int getFirst();
    int getSecond();
    int getLast();
};
class ResidentStudent : public LaGuardiaStudent
{
public:
    //inheric from parent class and hardcode student variable
    ResidentStudent() : LaGuardiaStudent() {
        this->student = "Resident";
    };
    //polymorphism function
    void display();
};

class InternationalStudent : public LaGuardiaStudent
{
public:
    InternationalStudent() : LaGuardiaStudent() {
        this->student = "International";
    };
    void display();
};
//return the number of digits of the number
int getDigit(int num) {
    int digit = 0;
    while (num > 0) {
        num /= 10;
        digit++;
    }
    return digit;
}
//overload functions to take user input
void fillFullInfor(ResidentStudent[]);
void fillFullInfor(InternationalStudent[]);
int main() {
    ResidentStudent Rstudent[SIZE];
    InternationalStudent Istudent[SIZE];

    cout << "Welcom to use Information System\n";
    cout << "Please fill the information for LaGuardia college student:\n";
    cout << "-----------------------------------------------------------------\n";
    cout << "|    Student    | Full name |    PhoneNumber   |     Email      |\n";
    cout << "-----------------------------------------------------------------\n";
    //call function to get user input and assign to object
    fillFullInfor(Rstudent);
    
    fillFullInfor(Istudent);

    cout << "-----------------------------------------------------------------\n";
    cout << "|    Student    | Full name |    PhoneNumber   |     Email      |\n";
    cout << "-----------------------------------------------------------------\n";
    //display information
    for (int i = 0; i < SIZE; i++)
        Rstudent[i].display();
    for (int i = 0; i < SIZE; i++)
        Istudent[i].display();
}
void LaGuardiaStudent::setInformation(string name, string email, int first, int second, int last) {
    this->name = name;
    this->email = email;
    this->fistTHreeIndex = first;
    this->secondTheeIndex = second;
    this->lastFourIndex = last;
}
string LaGuardiaStudent::getStudent() {
    return this->student;
}
string LaGuardiaStudent::getName() {
    return this->name;
}
string LaGuardiaStudent::getEmail() {
    return this->email;
}
int LaGuardiaStudent::getFirst() {
    return this->fistTHreeIndex;
}
int LaGuardiaStudent::getSecond() {
    return this->secondTheeIndex;
}
int LaGuardiaStudent::getLast() {
    return this->lastFourIndex;
}
void ResidentStudent::display() {
    cout << "|   " << getStudent() << "    | " << getName() << " |  (" << getFirst() << ")" << getSecond() << "-" << getLast() << "   |" << getEmail() << " |\n";
    cout << "---------------------------------------------------\n";
}
void InternationalStudent::display() {
    cout << "| " << getStudent() << " | " << getName() << " |  (" << getFirst() << ")" << getSecond() << "-" << getLast() << "  |" << getEmail() << " |\n";
    cout << "---------------------------------------------------\n";
}
void LaGuardiaStudent::display() {
    cout << "|   " << getStudent() << "   | " << getName() << " |  (" << getFirst() << ")" << getSecond() << "-" << getLast() << "   |" << getEmail() << " |\n";
    cout << "---------------------------------------------------\n";
}
void fillFullInfor(ResidentStudent student[]) {
    int index = 0;//index use to concal do while loop
    do {
        string fullName, emailAdress;
        int fistNumber, secondNumber, lastNumber;
        cout << "Enter your full name:";
        getline(cin, fullName);
        cin.ignore();
        cin.clear();
        cout << "Enter your email adress:";
        getline(cin, emailAdress);

        cout << "Enter your phone number in the form(xxx xxx xxxx) \n";
        cout << "Please enter first three digit:";
        cin >> fistNumber;
        //use returned number of index to limit user input digit
        while (getDigit(fistNumber) != 3) {
            cout << "Invalid input number, plese input(xxx):";
            cin >> fistNumber;
        }
        cout << "Pleas enter second three digit:";
        cin >> secondNumber;
        while (getDigit(secondNumber) != 3) {
            cout << "Invalid input number, plese input(xxx):";
            cin >> secondNumber;
        }
        cout << "Pleasse enter last four digit:";
        cin >> lastNumber;
        while (getDigit(lastNumber) != 4) {
            cout << "Invalid input number, plese input(xxxx):";
            cin >> lastNumber;
        }
        cin.ignore();
        cin.clear();

        student[index].setInformation(fullName, emailAdress, fistNumber, secondNumber, lastNumber);
        index++;
    } while (index < SIZE);
}
void fillFullInfor(InternationalStudent student[]) {
    int index = 0;
    do {
        string fullName, emailAdress;
        int fistNumber, secondNumber, lastNumber;
        cout << "Enter your full name:";
        getline(cin, fullName);
        cin.ignore();
        cin.clear();
        cout << "Enter your email adress:";
        getline(cin, emailAdress);

        cout << "Enter your phone number in the form(xxxx xxx xxxx) \n";
        cout << "Please enter first three digit:";
        cin >> fistNumber;
        while (getDigit(fistNumber) != 4) {
            cout << "Invalid input number, plese input(xxxx):";
            cin >> fistNumber;
        }
        cout << "Pleas enter second three digit:";
        cin >> secondNumber;
        while (getDigit(secondNumber) != 3) {
            cout << "Invalid input number, plese input(xxx):";
            cin >> secondNumber;
        }
        cout << "Pleasse enter last four digit:";
        cin >> lastNumber;

        while (getDigit(lastNumber) != 4) {
            cout << "Invalid input number, plese input(xxxx):";
            cin >> lastNumber;
        }
        cin.ignore();
        cin.clear();

        student[index].setInformation(fullName, emailAdress, fistNumber, secondNumber, lastNumber);
        index++;
    } while (index < SIZE);

}
