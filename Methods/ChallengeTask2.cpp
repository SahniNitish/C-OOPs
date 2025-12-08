/*
Create a class Dog with method bark() that print "woof!".
then call that method from the main() using an object of the class. 

*/
#include <iostream>
using namespace std;

class cat{
  
    public:
  void meaoo();
};

void cat::meaoo(){
    cout << "mao mao"
}


  
   int main(){
    cat myObj;
    cout << myObj.meaoo();
    return 0 ; 
   }