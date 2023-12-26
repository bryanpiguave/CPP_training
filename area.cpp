#include <iostream>
using namespace std;

//define your class here
// name your class Triangle
class Triangle{
    public:
        Triangle(float l,float h){
            length=l;
            height =h;
        }
        float length;
        float height;
        float area();

};

float Triangle::area(){
    float area = length*height/2;
    return area;
}

float test(float length, float height) {
  
  // make the class object here 
  //set the length and height of the object here 
  Triangle tri(length,height);
  float answer = tri.area(); //stores value of the object area
  
  cout <<"Area: "<<endl; //call area function for the object here

  return answer;
}