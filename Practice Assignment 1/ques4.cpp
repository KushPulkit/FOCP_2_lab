// Q4. Take two float numbers and display their division with two decimal results
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float a,b,div;
cout<<"Enter two decimal numbers: ";
cin>>a>>b;
div=(a/b);
cout<<fixed<<setprecision(2)<<div;
return 0;
}
