// Q27. WAP to print armstrong numbers within a given range
#include<iostream>
#include<math.h>
using namespace std;
void arms(int r1,int r2){
      int c=0;int temp,d,check=0;
for(int i=r1;i<=r2;i++){
      temp=i;
      while(temp!=0){
            temp=temp/10;
            c++;
      }
      temp=i;
      while(temp!=0){
            d=temp%10;
            check=check+pow(d,c);
            temp=temp/10;
      }
      if(check==i){
            cout<<i<<" ";
            c=0;
            check=0;
      }
}
}
int main(){
      int r1,r2; cout<<"Enter range of numbers: ";
      cin>>r1>>r2;
      arms(r1,r2);
   return 0;
}
