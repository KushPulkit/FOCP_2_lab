// Q24. WAP to calculate factorial of a number using do-while loop
#include<iostream>
using namespace std;
int fac(int n){
      int flag=1;
if(n==1 || n==0)
return 1;
else{
      do{
      flag=flag*n;
      n--;
      }while(n>0);
      return flag;
}
}
int main(){
int n;
cout<<"Enter your number: "; cin>>n;
int fc=fac(n);
cout<<"Factorial: "<<fc;
return 0;
}
