//Q4. Calculate the sum and average of n numbers stored in an array.
#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter number of elements: "; cin>>n;
    int a[n];int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"Sum is "<<sum<<endl<<"Average is "<<(float)sum/n;
    return 0;
}
