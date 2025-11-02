/*
Create a class Dog with method bark() that print "woof!".
then call that method from the main() using an object of the class. 

*/

#include <iostream>
using namespace std; 

class Dog{
  public:
       void bark();

};

void Dog:: bark(){
    cout << "Woof!";
}

int  main(){
    Dog myObj;
    myObj.bark();
    return 0 ; 
}