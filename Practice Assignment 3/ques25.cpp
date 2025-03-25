// 25. Write a function that takes an array of integers and its size as arguments and returns 
// the sum of all elements in the array
#include<iostream>
using namespace std;
int sumArray(int arr[], int size){
    int sum=0;
for(int i=0;i<size;i++){
sum=sum+arr[i];
}
return sum;
}
int main(){
    int n; cout<<"Enter size of array: "; cin>>n;
    int a[n]; cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Sum of elements: "<<sumArray(a,n);
    return 0;
}