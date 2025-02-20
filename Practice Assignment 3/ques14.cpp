// Create an overloaded function power() 
// a. One version takes two int (base and exponent). 
// b. Another takes one double and one int
#include<iostream>
#include<math.h>
using namespace std;
double power(int a,int b){
return pow(a,b);
}
double power(int a,double b){
return pow(a,b);
}
int main(){
    int a,b; double c;
    cout<<"Enter two integers: "; cin>>a>>b;
    cout<<"Enter double value: "; cin>>c;
    cout<<"Function1: "<<power(a,b)<<endl;
    cout<<"Function2: "<<power(a,c);
    return 0;
}