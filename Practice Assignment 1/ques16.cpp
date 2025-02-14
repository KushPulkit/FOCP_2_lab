//Q16. WAP that determines whether two ints are opposite in sign using XOR
#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter two numbers: ";
cin>>a>>b;
if((a^b)<0)
cout<<"Opposite signs";
else
cout<<"Same Sign";
return 0;
}
