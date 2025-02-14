//Q19. WAP that calculates grade based on marks using if-else statements
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter the student's marks (0-100): ";
    cin >> marks;

    if (marks > 100 || marks < 0) {
        cout << "Invalid marks! Please enter marks between 0 and 100." << endl;
    } else if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 70) {
        cout << "Grade: B" << endl;
    } else if (marks >= 60) {
        cout << "Grade: C" << endl;
    } else if (marks >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
