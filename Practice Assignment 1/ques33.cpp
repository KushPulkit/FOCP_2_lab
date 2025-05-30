/*Q33. Create a program that determines whether a given floating-point number can be represented 
exactly  in  binary  format  and  explains  why  (hint:  binary  representation  of  floating-point 
      numbers). */
#include <iostream>
using namespace std;

int main() {
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;

    double fraction = num - (int)num; 

    while (fraction > 0) {
        fraction *= 2; 
        if (fraction >= 1) {
            fraction -= 1; 
        }
        if (fraction == 0) {
            cout << "The number can be exactly represented in binary.\n";
            return 0;
        }
    }

    cout << "The number cannot be exactly represented in binary.\n";
    return 0;
}
