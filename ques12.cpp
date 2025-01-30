//Q12. WAP to solve quadratic equations
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c;
    cout<<"For quad. eqn., ax^2 + bx + c = 0, enter a,b,c: ";
    cin>>a>>b>>c;
    float D = b*b - 4*a*c;
    if(D>=0){
        if(D==0)
        cout<<"Real and equal roots!"<<endl;
        else
        cout<<"Real roots!"<<endl;
        cout<<(-b+pow(D,0.5))/(2*a)<<" and "<<(-b-pow(D,0.5))/(2*a);
    }
    else{
    cout<<"Complex Roots!"<<endl;
    cout<<-b<<" + "<<fabs(D)<<"i"<<"/"<<(2*a)<<" and "<<-b<<" + "<<-fabs(D)<<"/"<<(2*a);
    }
}
