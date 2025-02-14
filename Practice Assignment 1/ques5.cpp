/*Q5. Write a program that calculates compound interest for a given principal amount,
rate of interest, and time period using constants and user input for variables
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float p,r,t,ci;
cout<<"Enter principal amount: ";
cin>>p;
cout<<"Enter rate: ";
cin>>r;
cout<<"Enter time period: ";
cin>>t;
ci=p*pow((1+(r/100)),t)-p;
cout<<"Compound Interest is "<<ci;
return 0;
}
