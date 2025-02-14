//Q23. Create a program that determines whether a given number is prime using a while loop.
#include<iostream>
using namespace std;
int main(){
      int n;cout<<"Enter your number: "; cin>>n;
      int t=1,c=0;
      while(t<=n){
      if(n%t==0)
      c++;
      t++;
      }
      if(c==2)
      cout<<"Prime";
      else
      cout<<"Not Prime";
      return 0;
}
