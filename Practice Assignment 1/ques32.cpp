//Q32. Write a program that takes an integer array from the user and finds the second largest element
#include<iostream>
using namespace std;
int main(){
      int n;cout<<"Enter number of elements: ";cin>>n;
      int a[n];
      cout<<"Enter elements: "<<endl;
      for(int i=0;i<n;i++){
            cin>>a[i];
      }
      for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
      }
      int temp;
      for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                  temp=a[j+1];
                  a[j+1]=a[j];
                  a[j]=temp;
            }
            }
      }
      cout<<endl<<"Second largest element is: "<<a[n-2];
      return 0;
}
