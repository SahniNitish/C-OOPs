//You can also pass values to methods just like regular functions :

#include <iostream>
using namespace std;

class Car {

    public :
       int speed(int maxspeed);
};

int Car::speed(int maxSpeed){
    return;
}

int main(){
    Car myObj;
    cout<<myObj.speed(200);
    return 0 ;
}