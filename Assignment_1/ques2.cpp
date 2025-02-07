#include<iostream>
using namespace std;

void rev(int a[],int n){
int flag=0;
for(int i=0;i<n/2;i++){
    flag=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=flag;
}
cout<<endl<<"Reversed Array is: ";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
void great(int a[],int n){
    int flag=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            flag=a[j];
            a[j]=a[j+1];
            a[j+1]=flag;
        }
    }
}
    cout<<endl<<"Second Greatest Number: "<<a[n-2]<<endl;
    cout<<"Second Smallest Number: "<<a[1]<<endl;
}
int  main(){
int n; cout<<"Enter Size of Array: "; cin>>n;
int a[n];
cout<<"Enter elements of array: ";
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"Array is: ";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
rev(a,n);
great(a,n);
return 0;
}