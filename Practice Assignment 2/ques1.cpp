//Q1. Print butterfly pattern for a given size n
#include<iostream>
using namespace std;
void butter(int n){
    int t=1;
    for(int i=0;i<n;i++){ //Upper Half
        for(int j=0;j<2*n;j++){
            if(j<t)
            cout<<"*";
            else if(2*n-j<=t)
            cout<<"*";
            else
            cout<<" ";
        }
        t=t+1;
        cout<<endl;
    }
