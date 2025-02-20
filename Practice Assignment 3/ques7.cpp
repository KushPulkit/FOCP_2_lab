//Write a function int gcd(int a, int b) that calculates the greatest common divisor of two numbers
#include<iostream>
using namespace std;
int lcm(int a,int b){
int lcm = (a<b)?a:b;
while(true){
      if(lcm%a==0 && lcm%b==0){
            return lcm;
      }
      else
      lcm++;
}
}
void gcd(int a,int b,int lcm){
cout<<endl<<"GCD is "<<(a*b)/lcm;
}
int main(){
int a,b; cout<<"Enter two numbers: "; cin>>a>>b;
int l=lcm(a,b); gcd(a,b,l);      
return 0;
}