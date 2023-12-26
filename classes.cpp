#include <iostream>
using namespace std;
class Dog
{
public:  //these attribute of class are available in other functions and classes
    Dog(string new_name, int new_age){ //class name and constructor name are same
  name = new_name;
  age = new_age;}
    string gender  = "female";
    int age = 5;
    int size = 5;
    bool healthy = true;
    string name = "lucy";
    void output(); //Declaring output
    void set_name(string new_name);
    string get_name();
private:
    bool good_dog = true;

};

class German_dog : public Dog{
    public:
        German_dog(string new_name, int new_age) : Dog(new_name, new_age){}
        void output(){
        cout << "Dog name is: "<<name<<endl;    
        cout << "Dog gender is: "<<gender<<endl;   
        cout << "Dog age is: "<<age<<endl;
        cout << "Dog size is: "<<size<<endl;
        cout << "Is dog healthy: " <<healthy<<endl;
        cout << "But this is german" << endl;}
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
  Dog dogObj("Como vas",4);     //making object of Dog class
  dogObj.output();
  std::cout <<"\n Changing name "<< std::endl;
  dogObj.set_name("Buen dato");
  dogObj.output();

  German_dog como_vas("Como vas", 3);
  como_vas.output();
}