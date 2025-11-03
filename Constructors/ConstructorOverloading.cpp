/*
Constructor overlaoding
In C++ , you can have more than one constructor in the same class
this is called constuctor overoading .


*/

#include <iostream>
using namespace std;

class Car{
    public:
     string brand; 
     string model;


     Car(){
        brand = "unknown";
        model = "unknown";
     }

     Car(string b , string m ){
        brand = b ;
        model = m ;
     }
};

int main(){
    Car car1;
    Car car2("BMW" , "X5");
    Car car3("Ford" , "Mustang"); 

    cout <<"Car 1 is:" << car1.brand <<" " << car1.model << "\n";
    cout <<"Car 1 is:" << car2.brand <<" " << car2.model << "\n";
    cout <<"Car 1 is:" << car3.brand <<" " << car3.model << "\n";

    return 0 ;
}