// Q1. WAP that reads user's name and age:
#include<iostream>
using namespace std;
int main(){
    char name[15];int age;
    cout<<"What is your name? ";
    cin>>name;
    cout<<"What is your age? ";
    cin>>age;
    cout<<"Hello "<<name<<", you are "<<age<<" years old!";
}
