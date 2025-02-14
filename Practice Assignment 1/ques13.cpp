// Q13. Create an ATM machine using switch statement.
#include<iostream>
using namespace std;
int main(){
int amt,ch,t=1;
cout<<"Welcome to Bank!\nEnter initial amount: ";
cin>>amt;
while(t==1){
cout<<"Enter Choice:\n1. Withdraw\n2. Deposit\n3. Balance Inquiry\n4. Exit Window";
cin>>ch;
switch(ch){
    case 1:
    cout<<"Enter withdrawl amount: ";
    int with; cin>>with;
    if(with>amt){
        cout<<"Insufficient balance";
    }
    else{
    amt=amt-with;
    cout<<"Withdrawl of Rs."<<with<<" amount successfull";
    }
    break;
    case 2:
    cout<<"Enter deposit amount";
    int dep; cin>>dep;
    amt=amt+dep;
    cout<<"Deposit of Rs."<<with<<" amount successfull";
    break;
    case 3:
    cout<<"Current Balance: Rs."<<amt;
    break;
    case 4:
    cout<<"Thank you for using our bank service!";
    t=0;
    break;
    default:
    cout<<"Invalid Entry";
}
}
return 0;
}
