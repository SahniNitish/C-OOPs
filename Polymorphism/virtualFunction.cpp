/*
A virtual fucntion is a member function in the base class that can be overridden in derived classes

virtual fucntion are a key part of polymorphism in C++ they let 
different objects respond diferently to same fucntion call 


WHY USE VIRTUAL FUCNTION ???
 without virtual , c++ decides which funtion to call based on the pointer 
 type


*/

#include <iostream>
using namespace std;

class Animal{
    public:
      virtual void sound(){
        cout<< "Animal make sound" <<endl;
      }
};

class Dog : public Animal{
    public:
       void sound( ) override{
        cout<< "Bark Bark" << endl;
       }
};

int main(){
    Animal* a = new Dog();
    a->sound();
}