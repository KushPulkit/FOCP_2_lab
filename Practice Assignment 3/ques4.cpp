//Q4. Write a function int sumOfDigits(int n) that calculates and returns the sum of digits of a given number.
#include<iostream>
using namespace std;
int sumOfDigits(int n){
    int sum=0,d;
    while(n!=0){
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    return sum;
}
int main(){
    int n; cout<<"Enter number: "; cin>>n;
    cout<<"Sum of number is "<<sumOfDigits(n);
}