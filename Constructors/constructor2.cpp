/*
Constructor rules
->The constructor has the same name as the class
->it has no return type (not even void)
->it is usually declared public 
->it is automatically called when an object is created.

*/

#include <iostream>
using namespace std;

class Car{
public:
    string brand;
    string model; 
    int    year;
    
    Car(string x , string y , int z ){
        brand = x ; 
        model = y ; 
        year  = z ; 
    } 

};

int main (){
    Car myObj("Tayota" , "m5" , 2026);

    cout<< myObj.brand << myObj.model << myObj.year <<"\n";
    return 0 ; 
}
