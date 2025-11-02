//Create a an object "myObj" and acccess the attributes:
#include <iostream>
using namespace std;

class Myclass{       //The class
    public:          //Access specifier
    int myNum;       //Attribute (int variable)
    string myString; //Attribute (string variable)
};

int main (){
    Myclass myObj; //create an object of Myclass

    //Accessing the attributes and set values 
    myObj.myNum = 14; 
    myObj.myString = "Some Context Here..";

    //Printing the attributes values
    cout << myObj.myNum <<"\n";
    cout << myObj.myString <<"\n";

    return 0 ; 
}