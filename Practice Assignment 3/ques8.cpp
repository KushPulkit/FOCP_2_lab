// Create an overloaded print() function: 
// a. One takes a string as an argument 
// b. Another takes an integer 
// c. The third takes both a string and an integer
#include<iostream>
#include<string.h>
using namespace std;
void print(string s){
    cout<<"String overloaded runs: "<<s<<endl;
}
void print(int a){
    cout<<"Integer overloaded runs: "<<a<<endl;
}
void print(string s, int a){
    cout<<"String and integer overloaded runs: "<<s<<" "<<a;
}
int main(){
string s = "test";
int a = 5;
print(s);
print(a);
print(s,a);
}