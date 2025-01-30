//Q14. WAP to check if triangle is valid and is scalene, isoceles or equilateral
#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter sides of triangle: ";
cin>>a>>b>>c;
if(((a+b)>c)&&((b+c)>a)&&((c+a)>b)){
    cout<<"Triangle is valid"<<endl;
}
else{
    cout<<"Triangle cannot exist";
    return 0;
}
if(a==b && b==c && c==a)
cout<<"Equilateral Triangle";
else if(a!=b && b!=c && c!=a)
cout<<"Scalene Triangle";
else
cout<<"Isoceles Triangle";
return 0;
}
