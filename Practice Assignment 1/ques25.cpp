/* Create a program that continuously accepts user input of integers until the user types “exit”. 
At the end, display: 
• The sum of all entered numbers. 
• The count of valid integers entered. 
• The maximum and minimum numbers. */
#include<iostream>
using namespace std;
int main(){
int n;int f=0; int i;
    cout <<"Enter the number of prime numbers you want: ";
    cin>>n;
    int arr[n];  
    int count=0;  
    while(count<n){  
        f=0;  
        for(int j=2;j*j<=i;j++) {  
            if (i%j==0) {
                f=1;
                break;
            }
        }
        if(f==0){  
            arr[count++] = i;
        }
        i++; 
    }
    cout <<"First "<<n<<" prime numbers are: ";
    for (int j = 0; j < n; j++){
        cout<<arr[j]<<" ";
   } 
  }
