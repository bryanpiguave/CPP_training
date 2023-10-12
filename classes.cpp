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
};


int main() {
  Dog dogObj;     //making object of Dog class
  cout << "Dog name is: "<<dogObj.name<<endl;     //by using . operator we can access the member of class
  cout << "Dog gender is: "<<dogObj.gender<<endl;    //accessing the public members of class Dog in main()
  cout << "Dog age is: "<<dogObj.age<<endl;
  cout << "Dog size is: "<<dogObj.size<<endl;
  cout << "Is dog healthy: " <<dogObj.healthy<<endl;
}