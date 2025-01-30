/*Q8. WAP that takes user's full name and age input displays a greeting with name and 
      and the number of days they have lived */
#include<iostream>
#include<string>
using namespace std;
int main(){
string name; int age;
cout<<"Enter Name: ";
getline(cin,name);
cout<<"Enter Age: ";
cin>>age;
cout<<"Hello "<<name<<"! How are you doing?"<<"\nYou have lived "<<age*365<<" days!";
return 0;
}
