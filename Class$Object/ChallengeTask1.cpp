//Challenge Task - 1 
/*Create a class Called a Bookk with the Following attributes:

Title(string)
author(string)
year(int)

Then create two object of the class and print their attributes values.

*/

#include <iostream>
using namespace std;

class Book{

    public:
          string title;
          string author;
          int    year;
};

int main (){
    Book myObj;

    myObj.title  = "Matilda";
    myObj.author = "Roald Dahl";
    myObj.year   =  1988;


    Book myObj2;
    myObj2.title = "The Giving Tree";
    myObj2.author = "shel";
    myObj2.year   =  1964;


    cout<< myObj.title << ", "<< myObj.auhtor << ", "<<myObj.year <<"\n"; 
    cout<< myObj2.title << ", "<< myObj2.auhtor << ", "<<myObj2.year <<"\n"; 

    return  0; 
     
}