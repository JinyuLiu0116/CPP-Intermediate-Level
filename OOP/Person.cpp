#include <iostream>
#include <string>
#include <cctype>

class Person{
  std::string name;
  std::string ID;
  std::string email;
  std::string address;
public:
  Person():name("N\A"),ID("N\A"),email("N\A"),address("N\A") {}
  Person(std::string name, std::string id, std::string email, std::string address);
  std::string getName() const {return this->name;}
  std::string getID() const {return this->ID;}
  std::string getEmail() const {return this->email;}
  std::string getAddress() const {retrun this->address;}
  void setName(const std::string& name);
  void setID(const std::string& id);
  void setEmail(const std::string& email);
  void setAddress(const std::string& address);
};
class Student: Person{};
class Staff: Person{};
class LAGCC_Student: Student{};
class CS_Student: LAGCC_Student{};

int main(){


  
}
Person::Person(std::string name, std::string id, std::string email, std::string address){
  
}
void Person::setName(const std::string& name){
  if(name.empty())
    throw invalid_argument("Name cannot be empty!");
  for(char it: name){
    if(!isalpha(it) && it !=' ')
      throw invalid_argument("Name can only cantain letters!");
  }
  this->name = name;
}
void Person::setID(const std::string& id){
  if(id.empty())
    throw invalid_argument("ID cannot be empty!");
  for(char it: id){
    if(!isdigit(it))
      throw invalid_argument("ID can only cantain digital number!");
  }
  this->ID = id;
}
void Person::setEmail(const std::string& email){
  if(email.empty())
    throw invalid_argument("email cannot be empty!");
  if(email.find('@')==std::string::npos || email.find('.')==std::string::npos)
    throw invalid_argument("Invalid email form, please follow this form (name@email.com)");
  }
  this->email = email;
}
void Person::setAddress(const std::string& address){
  if(address.empty())
    throw invalid_argument("address cannot be empty!");
  //I can create a address class and use the address object
  this->address = address;
}
