//Q35. WAP to calculate the Least Common Multiple (LCM) and Greatest Common Divisor (GCD) of two integers.
#include<iostream>
using namespace std;
int lcm(int a,int b){
int lcm = (a<b)?a:b;
while(true){
      if(lcm%a==0 && lcm%b==0){
            cout<<"LCM is "<<lcm;
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
