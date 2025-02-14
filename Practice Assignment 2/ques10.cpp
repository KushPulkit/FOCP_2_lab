//Q10. Matrix multiplication
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

    int p,q; cout<<"Enter dimensions: "; cin>>p>>q;
    int b[p][q];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
       cin>>b[i][j];
    }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
           cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    if(y!=p){
        cout<<"Multiplication not possible";
        return 0;
    }
    int c[x][q];
    for(int i=0;i<x;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<y;k++){
                c[i][j]= a[i][k]+b[k][j]; 
            }
        }
    }
    cout<<"Resultant Matrix: "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<q;j++){
           cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
