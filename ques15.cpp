//Q15. Write a program to evaluate (a^b + c&d), where a,b,c,d are user inputs
#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cout<<"Enter 4 inputs: ";
cin>>a>>b>>c>>d;
cout<<(a^b) + (c&d);
return 0;
}
