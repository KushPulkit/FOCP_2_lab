// Q2. Input an array of n elements and display it in reverse order.
#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter number of elements: "; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
return 0;
}
