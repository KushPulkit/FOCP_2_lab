// Overload a function concat() 
// a. One version takes two strings and returns their concatenation. 
// b. Another takes an int and a string, converting the int to a string before 
// concatenation
#include<iostream>
#include<string.h>
using namespace std;
string concat(string a,string b){
string c = a+b;
return c;
}
string concat(string a, int b){
string c = a + to_string(b);
return c;
}
int main(){
    string a,b; int c;
    cout<<"Enter strings: "; cin>>a>>b;
    cout<<"Enter integer value: "; cin>>c;
    cout<<concat(a,b)<<endl;
    cout<<concat(a,c)<<endl;
    return 0;
}