//Q9. Transpose of a matrix
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
    cout<<"Transpose: "<<endl;
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
           cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
