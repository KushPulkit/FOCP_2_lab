//Q3. Input an array of n numbers and find the maximum and minimum elements.
#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter number of elements: "; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];int min = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    cout<<"Max is "<<max<<endl<<"Min is "<<min;
    return 0;
}
