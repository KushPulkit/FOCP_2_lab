//Q29. Create a program to find the first number greater than 50 that is divisible by 7.
#include<iostream>
using namespace std;
int main(){
      int a=50;
      while(1){
            if(a%7==0){
                  cout<<"Number is "<<a<<endl;
                  break;
            }
            else
            a++;
      }
}
