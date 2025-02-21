// Write a function int sum(int count, ...) that takes a variable number of integer 
// arguments and returns their sum. The first argument count will specify how many 
// numbers are passed
#include<iostream>
#include<cstdarg>
using namespace std;
int sum(int count, ...){
    va_list args;
    va_start(args, count);

    int sum = 0;
    for(int i=0;i<count;i++){
        sum = sum+ va_arg(args,int);
    }

    va_end(args);
    return sum;
}
int main(){
    cout<<"Sum of 1,2,3,4,5: "<<sum(5,1,2,3,4,5,6,7,8)<<endl;
    cout<<"Sum of 1,2,3: "<<sum(3,1,2,3)<<endl;
    return 0;
}