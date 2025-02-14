//Q6. Implement a program to search for a specific number in an array using linear search.
#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter number of elements: "; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    int t; cout<<"Enter number you want to find: "; cin>>t;
    for(int i=0;i<n;i++){
        if(t==a[i]){
        cout<<"Position of "<<t<<" is "<<i;
        return 0;
        }
    }
    cout<<"Number not present";
    return 0;
}
