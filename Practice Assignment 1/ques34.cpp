/* Q34. Create a program that takes input for a 2D array and prints the array in a formatted table,
ensuring proper alignment of all elements. */
#include<iostream>
using namespace std;
int size(int a){
      int s=0;
      while(a!=0){
            a=a/10;
            s++;
            }
      return s;
}
int main(){
      int x,y;
      cout<<"Enter dimensions of matrix: "; cin>>x>>y;
      int a[x][y];
      for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                  cin>>a[i][j];
            }
      }
      int max=a[0][0];
      for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                  if(a[i][j]>max)
                  max=a[i][j];
            }
      }
      int smax=size(max);
      for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                  if(size(a[i][j])<smax){
                        for(int i=0;i<smax-size(a[i][j]);i++)
                        cout<<"0";
                        cout<<a[i][j]<<" ";
                  }
                  else
                  cout<<a[i][j]<<" ";
            }
            cout<<endl;
      }
}
