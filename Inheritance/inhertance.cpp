/*
Inheritance
it allows one class to reuse attributes and methods from another class
. it helps you write cleaner , more effient coe by avoiding duplication.


we group the "inheritance concept " into two categories:

->derived class (child) - the child that inherits from another class
->base    class (parent) - the class being inherited from 

To inherits from a class , use the : symbol.


*/

#include <iostream>
using namespace std; 

class vehicle{
    public:
    string brand = " Ford";
    void honk(){
        cout << "tooot ooo to o ";
    }
};

//derived class
class Car:public vehicle{
    public:
    string model = " mustang";

};

int main(){
    Car myCar;
    myCar.honk();
    cout <<myCar.brand + " " + myCar.model;
    return  0 ; 
}