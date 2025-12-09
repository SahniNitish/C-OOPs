/*
Multilevel Inheritance

A class can also be derived from one class ,  which is already 
derived from another 
in the following example , MyGrandchild is derived from class MyChild
(which is derived from myClass).

*/
#include <iostream>
using namespace std;

class Myclass{
    public:
      void myFucntion(){
        cout << "Hello everyone im coming from the mutlilevel inheritance";

      }
};

class myChild : public Myclass{

};

class myGrandchild: public myChild{

};

int main(){
    myGrandchild myObj;
    myObj.myFucntion();
    return 0 ; 
}