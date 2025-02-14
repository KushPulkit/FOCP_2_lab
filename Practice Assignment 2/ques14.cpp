//Q14. Boundary elements 
#include<iostream>
using namespace std;
int main(){
    int x,y; cout<<"Enter dimensions: "; cin>>x>>y;
    int a[x][y];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
       cin>>a[i][j];
    }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Boundary elements are: "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           if(i==0 || i==x-1){
            cout<<a[i][j]<<" ";
           }
           else if(j==0 || j==y-1){
            cout<<a[i][j]<<" ";
           }
        }
    } 
}
