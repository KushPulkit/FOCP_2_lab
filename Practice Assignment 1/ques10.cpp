// Q10. WAP to enter two numbers and check if first is multiple of second using
// relational and logical operators
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(b!=0 && a%b==0)
    cout<<a<<" is a multiple of "<<b;
    return 0;
}
