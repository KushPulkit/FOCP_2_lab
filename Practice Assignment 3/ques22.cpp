// Write a recursive function int sumOfNaturalNumbers(int n) that returns the sum of 
// the first n natural numbers. For example, sumOfNaturalNumbers(5) should return 1 + 
// 2 + 3 + 4 + 5 = 15
#include<iostream>
using namespace std;
int sumOfNaturalNumbers(int n){
if(n!=0)
return n+sumOfNaturalNumbers(n-1);
}
int main(){
    int n; cout<<"Enter your number: "; cin>>n;
    cout<<"Sum is "<<sumOfNaturalNumbers(n);
    return 0;
}