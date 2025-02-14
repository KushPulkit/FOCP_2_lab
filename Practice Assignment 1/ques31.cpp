/*Q31.  Develop a program to reverse the digits of a given number and terminate early if the reversed
number becomes a palindrome */
#include<iostream>
using namespace std;
int main(){
      int a;cout<<"Enter a number: ";cin>>a;
      int temp=a,flag=0,d;
      while(temp!=0){
      d=temp%10;
      flag=flag*10+d;
      temp=temp/10;
      }
      if(flag==a)
      cout<<"Palindrome";
      else
      cout<<"Reverse is "<<flag;
      return 0;
}
