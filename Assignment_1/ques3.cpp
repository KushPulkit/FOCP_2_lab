#include<iostream>
#include<string.h>
using namespace std;

string a;

string input(){
cout<<"Enter your string"<<endl;
getline(cin,a);
return a;
}


void palin(){
    string wrd="",check="";
for(int i=0;i<sizeof(a);i++){
    char x = a[i];
    char k = a[sizeof(a)-1-i];
    if(x==' ')
    continue;
    else{
    wrd+=tolower(x);
    check+=tolower(k);
    }
}
cout<<"Word without space and case insensitive: "<<wrd<<endl;
if(check==wrd)
cout<<"Palindrome"<<endl;
else
cout<<"Not Palindrome"<<endl;
}


void freq(){
int n = sizeof(a);
int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[j]==a[i]){
            count++;
        }
    }
    cout<<"frequency of character "<<a[i]<<" in string is "<<count<<endl;
    count=0;
}
}


void vowel(){
    cout<<"Enter specific character to replace the vowel: "; char c;cin>>c;
    string wrd="";
for(int i=0;i<sizeof(a);i++){
    char x = a[i];
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'|| x=='I'||x=='O'||x=='U')
        wrd+=c;
    else
        wrd+=x;
}
cout<<wrd<<endl;
}


int main(){
string a=input();
palin();
freq();
vowel();
}
