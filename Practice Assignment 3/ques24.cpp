// 24. Write a function void swapNumbers(int &a, int &b) that swaps two numbers using 
// pass-by-reference.
#include<iostream>
using namespace std;
void swapNumbers(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}
int main(){
    int a,b;
cout<<"Enter two numbers: "; cin>>a>>b;
cout<<"Before swap: a = "<<a<<" , b = "<<b<<endl;
swapNumbers(a,b);
cout<<"After swap: a = "<<a<<" , b = "<<b;
return 0;
}