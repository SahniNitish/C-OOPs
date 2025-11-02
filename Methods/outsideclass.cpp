//sometimes it is better to declare the method in the class and define it later 

//This is done by specifiying the name of the class , followed the scope resolution :: operatopr , followed by the name 
//of the function 

#include <iostream>
using namespace std;

class Myclass{
    public:
    void myMethod();
};

//method / function defintion outiside the class
void Myclass ::myMethod(){
    cout << "hello world";
}

int main (){
    Myclass myObj;
    myObj.myMethod();
    return 0 ; 
}