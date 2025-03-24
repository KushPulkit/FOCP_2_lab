//Write a function int factorial(int n) that takes a number as input and returns its factorial
#include<iostream>
using namespace std;
int factorial(int n){
    int fac=1;
while(n>0){
fac=fac*n;
n--;
}
return fac;
}
int main(){
    int n; cout<<"Enter your number: "; cin>>n;
    cout<<"Factorial is "<<factorial(n);
    return 0;
}
