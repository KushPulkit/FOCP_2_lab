//Q20. Menu Driven Calculator
#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n--- Simple Calculator Menu ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error! Division by zero." << endl;
                }
                break;
            case 5:
                cout << "Exiting the calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Please select from 1 to 5.\n";
        }
    } while (choice != 5);

    return 0;
}
