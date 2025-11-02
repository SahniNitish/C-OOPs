//Costructor Defined outside of the class 
/*
You can also define the constructor outside the class 
using the scope resolution operator ::

*/

#include <iostream>
using namespace std;

class Car{
    public:
      string brand;
      string model; 
      int year; 
      
      Car(string x , string y , int Z );
    
    };

    Car::Car(string x , string y , int z ){
      brand = x;
      model = y; 
      year  = z;
    }

    int main(){
        
        Car myObj("bmw" , "m5" , 2001);

        cout << myObj.brand <<"" <<myObj.model <<""<<myObj.year;
        return 0 ; 
    }