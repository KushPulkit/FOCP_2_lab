// Create an overloaded function greet() 
// a. One version takes no parameters and prints "Hello!". 
// b. Another takes a string name and prints "Hello, [name]!". 
// c. Another takes a string name and an int age, printing "Hello, [name]! You are 
// [age] years old.".
#include<iostream>
#include<string.h>
using namespace std;
void greet(){
cout<<"Hello!"<<endl;
}
void greet(string name){
cout<<"Hello, "<<name<<"!"<<endl;
}
void greet(string name, int age){
cout<<"Hello, "<<name<<"! You are "<<age<<" years old.";
}
int main(){
    string s; int a;
    cout<<"Enter name: "; cin>>s;
    cout<<"Enter age: "; cin>>a;
    greet();
    greet(s);
    greet(s,a);
    return 0;
}