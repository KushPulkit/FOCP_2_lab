// Q11. Calculate the sum of elements on the primary and secondary diagonals of a square matrix.
#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter dimensions: "; cin>>n;
    int a[n][n];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cin>>a[i][j];
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int pri=0; int sec=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                pri = pri + a[i][j];
                sec = sec + a[i][n-1-i];
            }
        }
        }
        cout<<"Primary Diagonal: "<<pri<<endl<<"Secondary Diagonal: "<<sec;
}
