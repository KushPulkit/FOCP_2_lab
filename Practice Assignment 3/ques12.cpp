// Overload a function area() 
// a. One version calculates the area of a square (takes one int). 
// b. Another calculates the area of a rectangle (takes two ints). 
// c. Another calculates the area of a circle (takes a double radius).
#include<iostream>
#include<math.h>
using namespace std;
float area(float s){
return s*s;
}
float area(float l,float b){
return l*b;
}
float area(int r){
return 3.14*r*r;
}
int main(){
    float s,l,b;int r;
    cout<<"Enter side of square: "; cin>>s;
    cout<<"Enter lenth and breath: "; cin>>l>>b;
    cout<<"Enter radius: "; cin>>r;
    cout<<"Area of Square: "<<area(s)<<endl;
    cout<<"Area of Rectangle: "<<"area(l,b)"<<endl;
    cout<<"Area of Circle: "<<area(r)<<endl;
    return 0;    
}