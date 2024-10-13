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
  Person(const std::string& name, const std::string& id, const std::string& email, const std::string& address);
  std::string getName() const {return this->name;}
  std::string getID() const {return this->ID;}
  std::string getEmail() const {return this->email;}
  std::string getAddress() const {retrun this->address;}
  void setName(const std::string& name);
  void setID(const std::string& id);
  void setEmail(const std::string& email);
  void setAddress(const std::string& address);
};
class Student: public Person{
  double grade;
public:
  Student(): Person(), grade(0.0){}
  Student(const std::string& name, const std::string& id, const std::string& email, const std::string& address, const double& grade)
    :Person(name, id, email, address) { setGrade(grade);}
  double getGrade() const {return this->grade;}
  void setGrade(const double& grade);
};
class Staff: public Person{
  std::string jobTitle;
public:
  Staff():Person(), jobTitle("staff"){}
  Staff(const std::string& name, const std::string& id, const std::string& email, const std::string& address, const std::string& jobTitle)
    :Person(name, id, email, address) {setJobTitle(jobTitle);}
  std::string getJobTitle() const {return this->jobTitle;}
  void setJobTitle(const std::string& jobTitle);
};
class LAGCC_Student: public Student{};
class CS_Student: public LAGCC_Student{};

int main(){


  
}
void Student::setJobTitle(const std::string& jobTitle){
  if(jobTitle.empty())
    throw invalid_argument("Empty input");
  for(char it:jobTitle){
    if(!isalpha(it))
      throw invalid_argument("Invalid input charactor");
  }
  this->jobTitle = jobTitle;
}
void Student::setGrade(const double& grade){
  if(grade < 0)
    throw invalid_argument("Grade cannot be negative!");
  if(grade > 4)
    throw invalid_argument("Grade cannot greater than 4!");
  else
    this->grade=grade;
}
Person::Person(const std::string& name, const std::string& id, const std::string& email, const std::string& address){
  this->setName(name);
  this->setID(id);
  this->setEmail(email);
  this->setAddress(address);
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
