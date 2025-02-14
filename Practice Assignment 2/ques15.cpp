//Q15. Saddle point 
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
    bool row,col;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int m=0;m<y;m++){
                if(a[i][j]<=a[i][m])
                row=true;
                else{
                row=false;
                break;
                }
            }
            for(int m=0;m<x;m++){
                if(a[i][j]>=a[m][j])
                col=true;
                else{
                col=false;
                break;
                }
            }
            if(row==true && col==true){
                cout<<"Saddle point "<<a[i][j]<<endl;
            }
        }
    }
    return 0;
}
