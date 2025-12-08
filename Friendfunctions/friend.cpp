//C++ Friend functions

/*
Normally , private members of class can only accesses using public methods
like getter and setters.btu in some cases , you use a speacial fucntion called a friend\
function to access them directly.

A Friend function is not a member of the class , but it is allowed to access the class's private data.
*/

//This is not coming in the final exam 

#include <iostream>
using namespace std;

class Employee{
    private:
       int salary; 



    public:
       Employee(int s ){
        salary = s;
       }   

       //Declare friend function

       friend void displaySalary(Employee emp);
};

void displaysalary(Employee emp){
    cout << "Salary:" <<emp.salary;

}

int main (){
    Employee myEmp(50000);
    displaySalary(myEmp);
    return 0 ; 
}