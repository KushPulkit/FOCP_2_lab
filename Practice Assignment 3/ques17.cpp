// Write a function void concatStrings(int count, ...) that takes a variable number of 
// string arguments and concatenates them into one single string. The first argument 
// count will specify how many strings are passed.
#include<iostream>
#include<cstdarg>
#include<string.h>
using namespace std;
string concatStrings(int count, ...){
    va_list args;
    va_start(args, count);
    string sum="";
    for(int i=0;i<count;i++){
        sum = sum + va_arg(args,char*);
    }
    va_end(args);
    return sum;
}
int main(){
    cout<<concatStrings(2,"hello","bruh")<<endl;
    cout<<concatStrings(3,"bruh","hello","real")<<endl;
    return 0;
}  