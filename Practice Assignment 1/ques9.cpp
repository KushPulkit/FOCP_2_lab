// Q9. Create a program that takes three inputs: char,int,float and display in formated table
#include<iostream>
#include<math.h>
using namespace std;
int main(){
char ch; int in; float f;
cout<<"Enter character, integer and float values: ";
cin>>ch>>in>>f;
cout<<"Char\tInt\tFloat\n"<<ch<<"\t"<<in<<"\t"<<f;
return 0;
}
