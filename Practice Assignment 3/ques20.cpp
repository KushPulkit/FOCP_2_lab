// Write a function int fibonacci(int n) that returns the nth Fibonacci number using 
// recursion.
#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==1)
    return 1;
    else if(n==0)
    return 0;
    else 
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
cout<<"Enter nth number: ";
int n; cin>>n;
cout<<n<<"th fibonacci number is "<<fibonacci(n-1);
return 0;
}