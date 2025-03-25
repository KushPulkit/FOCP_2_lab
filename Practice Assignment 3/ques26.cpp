// 26. Write a function that takes an array and its size as arguments and returns the 
// maximum element. 
// int findMax(int arr[], int size);
#include<iostream>
using namespace std;
int findMax(int arr[], int size){
    int max=arr[0];
for(int i=0;i<size;i++){
if(max<arr[i])
max=arr[i];
}
return max;
}
int main(){
    int n; cout<<"Enter size of array: "; cin>>n;
    int a[n]; cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Maximum Element: "<<findMax(a,n);
    return 0;
}