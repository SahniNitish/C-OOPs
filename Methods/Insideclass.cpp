//we define a function inside the class , and we named it "myMethod".
#include <iostream>
using namespace std;

class Myclass{
    public:

    void myMethod(){
        cout << "hello world" ; 
    }
};

int main(){
    Myclass myObj; //Create an object of myclass
    myObj.myMethod(); //call the method
    return 0 ; 
}