/*Write a function int maxNumber(int a, int b) that takes two integers as parameters 
and returns the larger one. */
#include<iostream>
using namespace std;
int maxNumber(int a,int b){
  if(a>b)
  return a;
  return b;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: "; cin>>a>>b;
    cout<<"Greater number is "<<maxNumber(a,b);
    return 0;
}