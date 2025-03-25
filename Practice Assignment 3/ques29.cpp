// Define a structure Student with fields name and marks. Pass an array of students to a 
// function that displays all student details.
#include<iostream>
#include<string>
using namespace std;
struct Student { 
    string name; 
    int marks; 
}; 
void displayStudents(Student arr[], int size){
    cout<<"Students Details:"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Name: "<<arr[i].name<<" , Marks: "<<arr[i].marks<<endl;
    }
}
int main(){
    int n; cout<<"Enter number of students: "; cin>>n;
    Student ar[n];
    for(int i=0;i<n;i++){
        cout<<"Enter details for student number "<<i+1<<endl;
        cin>>ar[i].name;
        cin>>ar[i].marks;
    }
    displayStudents(ar,n);
}