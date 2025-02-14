// Q3. Ask the user two numbers and math operator and display result
#include<iostream>
using namespace std;
int main(){
cout<<"Enter two numbers: ";
int a,b; char op;
cin>>a>>b;
cout<<"Enter operator +,-,* or /: ";
cin>>op;
switch(op){
    case '+':
    cout<<"Sum a+b = "<<a+b;
    break;
    case '-':
    cout<<"Subtract a-b = "<<a-b;
    break;
    case '*':
    cout<<"Multiply a*b = "<<a*b;
    break;
    case '/':
    cout<<"Divide a/b = "<<a/b;
    break;
}
}
