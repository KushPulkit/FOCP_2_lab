// Write a recursive function string reverseString(string str) that returns the reverse of a 
// given string. For example, reverseString("hello") should return "olleh".
#include<iostream>
#include<string.h>
using namespace std;
string reverseString(string str){
    int len=sizeof(str)/sizeof(str[0]);
    if(len!=0)
return str[len-1]+reverseString(str.substr(len-2));
}
int main(){
    string s; cout<<"Enter string: "; cin>>s;
    cout<<reverseString(s);
    return 0;
}