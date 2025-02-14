//Q5. Sorting
#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter number of elements: "; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
    }
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
