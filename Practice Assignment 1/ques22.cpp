//Q22. WAP to generate the first n Fibonacci numbers using a for loop
#include<iostream>
using namespace std;
int main(){
int n; cout<<"Enter value of 'n': "; cin>>n;
int a=0,b=1;int c;
cout<<"0 1 ";
for(int i=0;i<n-2;i++){
c=a+b;
cout<<c<<" ";
a=b;
b=c;
}
return 0;
}
