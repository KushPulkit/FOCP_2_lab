//Q7. WAP to swap two numbers using temporary variable and then without it.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a=5,b=10;
cout<<"a is "<<a<<", b is "<<b;
int c=a;
a=b;
b=c;
cout<<"\nAfter changes: a is "<<a<<", b is "<<b;
a=a+b;
b=a-b;
a=a-b;
cout<<"\nAfter changes (no third variable): a is "<<a<<", b is "<<b;
}
