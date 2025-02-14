//Q26. WAP to generate and display the first n prime numbers
#include<iostream>
using namespace std;
      void prime(int n){
            int t=1;int c=0;
            while(n>0){
                  while(t>=1){
                  for(int i=1;i<=t;i++){
                  if(t%i==0)
                  c++;
                        }
                  if(c==2){
                        cout<<t<<" ";
                        n--;
                        c=0;
                        t++;
                        break;
                  }
                  else{
                        c=0;
                        t++;
                        break;
                  }
                  }
            }
      }
int main(){
      int n;cout<<"Enter value of n: ";cin>>n;
      prime(n);
      return 0;
}
