//Q5. Write a function bool isPalindrome(int n) that checks if the given number is a palindrome.
#include<iostream>
using namespace std;
bool isPalindrome(int n){
int temp=n; int flag=0; int d;
while(temp!=0){
    d=temp%10;
    flag=flag*10+d;
    temp=temp/10;
}
if(flag==n)
return true;
else
return false;
}

int main(){
    int n; cout<<"Enter number: "; cin>>n;
    if(isPalindrome(n)==true)
    cout<<"Palindrome number";
    else
    cout<<"Not Palindrome";
}