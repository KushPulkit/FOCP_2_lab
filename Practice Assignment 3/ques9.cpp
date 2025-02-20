// Write a C++ program with a class Calculator that overloads a sum() function to add: 
// a. Two integers 
// b. Three doubles 
// c. One integer and one float
#include<iostream>
using namespace std;
int sum(int a, int b){
return a+b;
}
double sum(double a, double b, double c){
return a+b+c;
}
float sum(int a,float b){
return a+b;
}
int main(){
    int a,b;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;
    double x,y,z;
    cout<<"Enter three doubles: "<<endl;
    cin>>x>>y>>z;
    int p; float q;
    cout<<"Enter integer and float: "<<endl;
    cin>>p>>q;
    cout<<sum(a,b)<<endl;
    cout<<sum(x,y,z)<<endl;
    cout<<sum(p,q)<<endl;
}