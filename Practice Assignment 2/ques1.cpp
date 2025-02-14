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

    for(int i=n;i>=1;i--) {
        for(int j=1;j<=i;j++){ //left stars
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){ //spaces
            cout<<" ";
        }
        for(int j=1;j<=i;j++){ //right stars
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n; cout<<"Enter value of n: "; cin>>n;
    butter(n);
}
