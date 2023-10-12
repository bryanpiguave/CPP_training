#include <iostream>
using namespace std;
class Dog
{
public:  //these attribute of class are available in other functions and classes
    string name = "lucy";
    string gender  = "female";
    int age = 5;
    int size = 5;
    bool healthy = true;


    void output(); //Declaring output
    void set_name(string new_name);
    string get_name();
private:
    bool good_dog = true;

};

void Dog::set_name(string new_name){
    name = new_name;
}
string Dog::get_name(){
    return  name;
}

void Dog::output(){   //indicates function output is member of Dog class
    cout << "Dog name is: "<<name<<endl;    
    cout << "Dog gender is: "<<gender<<endl;   
    cout << "Dog age is: "<<age<<endl;
    cout << "Dog size is: "<<size<<endl;
    cout << "Is dog healthy: " <<healthy<<endl;
}


int main() {
  Dog dogObj;     //making object of Dog class
  dogObj.output();
  dogObj.set_name("Hola");
  std::cout << dogObj.get_name() << std::endl;
}