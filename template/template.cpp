/*
Templates let you write a function or class that works with different data types
they help you avoid repeating code and make programs more flexible.

You can create function template by using the template keyword;

template <typename T>

return_type function_name(T parameter){
  //code
}

*/
#include <iostream>
using namespace std;

template <typename A , typename B>

class pair{
    public:
     A first;
     B Second;

     pair(A a , B b ){
        first = a ;
        second = b ; 
     }

     void display(){
        cout << "first:" << first << "second:" <<second <<"\n";

     }
};

int main(){
    
    pair<string , int> person("Nitish Sahni" , 34);
    pair<string , int> person("Kashish verma" , 36);

    person.display();
    
}