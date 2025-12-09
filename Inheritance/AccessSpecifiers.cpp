/*
Acccess Specifiers 

You Learned from the Access Specifier chapter that three specifier available in C++

until now , we have only used public (member of class are accessible from outside the class ) and 
private (member can only accessed within the class).

The third Specifier , protected , is similar to private , but it can also be accessed in the inherited class:
*/

// Base class
#include <iostream>
using namespace sdt;

class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}