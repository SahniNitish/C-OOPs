/*
Members declared as Private connot be acccessed from outside the class . 

In the following example , we demonstrate the differences
between Public and private memebrs

*/

#include <iostream>
using namespace std;

class MyClass{
    public:
      int x ; //Access by the anyone 
    private:   //Private Access specifier 
      int y ; //Private attribute
};

int main(){
    MyClass myObj;
    myObj.x = 25; //Allowed (public)
    myObj.y = 27; //Not Allowed (private)

    return 0 ; 
}

//when you run this code you will recieve => error: y is private
