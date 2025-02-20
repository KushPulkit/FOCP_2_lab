//Q6. Function to Find the nth Fibonacci Number.
#include<iostream>
using namespace std;
int main(){
int a=0,b=1;int c;int n;
cout<<"Enter nth number: "; cin>>n;
for(int i=0;i<n-2;i++){
    c=a+b;
    a=b;
    b=c;
}
cout<<"nth Fibo is "<<c;
return 0;
}