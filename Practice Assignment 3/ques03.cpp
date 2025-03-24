//Write a function int reverseNumber(int n) that returns the reversed version of a given number.
#include<iostream>
using namespace std;
int reverseNumber(int n){
    int d,flag=0;
    while(n!=0){
    d=n%10;
    flag=flag*10+d;
    n=n/10;
    }
    return flag;
}
int main(){
    int n; cout<<"Enter number: "; cin>>n;
    cout<<"Reverse is "<<reverseNumber(n);
    return 0;
}
