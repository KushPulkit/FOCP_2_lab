// 30. Write a function that modifies all elements of an array by multiplying them by 2 using 
// pass-by-reference. 
// void doubleArray(int (&arr)[6]); 
#include<iostream>
using namespace std;
void doubleArray(int (&arr)[6]){
for(int i=0;i<6;i++){
arr[i]=arr[i]*2;
}
cout<<endl;
}
int main(){
    int a[6];
    cout<<"Enter elements: ";
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    doubleArray(a);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
}