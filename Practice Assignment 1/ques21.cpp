//Q21. Develop a program to check if whether a year is a leap year 
#include<iostream>
using namespace std;
int main(){
      int y; cout<<"Enter year: "; cin>>y;
      if(y%100==0 && y%400==0)
      cout<<"Leap Year";
      else if(y%4==0 && y%400!=0)
      cout<<"Leap Year";
      else
      cout<<"Not Leap Year";
}
