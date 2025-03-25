// 27. Implement a function that takes an  array and its size as arguments and returns the 
// second largest element using a reference parameter. 

#include<iostream>
using namespace std;
void findSecondLargest(int arr[],int size,int &sLarge){
int temp;
for(int i=0;i<size;i++){
    for(int j=0;j<size-1;j++){
        if(arr[j+1]<arr[j]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
}
sLarge=arr[size-2];
}
int main(){
    int n; cout<<"Enter size of array: "; cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int sLarge;
    findSecondLargest(arr,n,sLarge);
    cout<<endl<<"Second Largest Element: "<<sLarge;
    return 0;
}