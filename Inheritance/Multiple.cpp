/*
Multiple Inheritance

A class can also be derived from more than one base class , using a comma-separated list;


*/
#include <iostream>
using namespace std;

class Myclass{

    public:
     void myfunction(){
        cout << "Some content in the parent class";
     }
};


class MyOtherClass{
   public:
     void myOtherFunction(){
        cout << "Some Content in the another class";
     } 
};

class MyChildClass : Myclass , MyOtherClass {

};

int main(){
    MyChildClass myObj;
    myObj.myfuntion();
    myObj.myOtherFunction();
    return 0  ; 
}