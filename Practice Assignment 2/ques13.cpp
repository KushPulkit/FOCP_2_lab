//Q13. Search in matrix
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
int find; cout<<"Enter number you want to find: "; cin>>find;

for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
       if(a[i][j]==find){
       cout<<"Found at ("<<i<<","<<j<<")";
       return 0;
       }
    }
}
cout<<"Number not present";
return 0;
}
