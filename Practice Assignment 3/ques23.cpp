// Write a recursive function int power(int base, int exp) that returns base raised to the 
// power of exp. For example, power(2, 3) should return 8. 
#include<iostream>
using namespace std;
int power(int base,int exp){
if(exp==0)
return 1;
else
return base*power(base,exp-1);
}
int main(){
    int a,b;
    cout<<"Enter two numbers: "; cin>>a>>b;
    cout<<"Result: "<<power(a,b);
    return 0;
}