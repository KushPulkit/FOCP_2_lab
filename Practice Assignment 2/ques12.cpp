//Q12. Write a program to find the row in a 2D matrix that has the maximum sum of its elements.
#include<iostream>
using namespace std;
int main(){
    int x,y; cout<<"Enter dimensions: "; cin>>x>>y;
    int a[x][y];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
       cin>>a[i][j];
    }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int maxSum=0,maxRow;int rsum=0;int row;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
        rsum=rsum+a[i][j];
        row=i;
        }
        if(rsum>maxSum){
        maxSum=rsum;
        maxRow=row;
        }
        rsum=0;
    }
    cout<<"Row with maximum sum is row number "<<maxRow+1<<" with sum "<<maxSum;
    return 0;
}
