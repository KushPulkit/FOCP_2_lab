#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter your number: "; cin>>n;
    int c=0;bool t=false;
    for(int i=1;i<=n;i++){
        if(n%i==0)
        c++;
    }
    if(c==2){
    t=true;
    cout<<n<<" is Prime"<<endl;
    }
    else
    cout<<n<<" is not Prime"<<endl;
    if(t==true){
        while(1){
            c=0;++n;
            for(int i=1;i<=n;i++){
            if(n%i==0)
            c++;
            }
            if(c==2){
            cout<<n<<" is the next prime number";
            break;
            }
            else
            continue;
        }
    }
    else{
        cout<<"Factors are: ";
        for(int i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<", ";
    }
}
return 0;
}