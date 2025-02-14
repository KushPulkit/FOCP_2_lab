// Q11. Create a program to count the number of 1 bits in an integer input by the user
#include<iostream>
#include<string>
using namespace std;
int main(){
int n,d,c=0;string flag="";
cout<<"Enter your number: ";
cin>>n;
while(n!=0){
 d=n%2;
 flag=to_string(d)+flag;
 n=n/2;
}
cout<<"Binary is "<<flag<<endl;
for(int i=0;i<sizeof(flag);i++){
    if(flag[i]=='1'){
    c++;
    }
}
cout<<c<<" number of 1 bits";
return 0;
}
