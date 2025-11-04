/*

REAL LIFE EXAMPLE

Think of an employee's salary

->The salary is private - the emplpoyee can't change it directly 
->Only their manager can update it or share it when appropriate

Encapsulation work the same way . The Data is hidden , and only trusted methods can access or modify it. 

*/


#include<iostream>
using namespace std;

class Employee{
    private:
       //Private attributes
       int salary;


    public:
       void setSalary(int s ){
         salary = s;
       }   

       int getSalary(){
        return salary;
       }

};

int main(){
    Employee myObj;
    myObj.setSalary(59000);
    cout<< myObj.getSalary();
    return 0 ;
}