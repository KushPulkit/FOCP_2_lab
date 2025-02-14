/*Q28.  Develop a program to simulate a number-guessing game where the user has limited attempts 
to guess a randomly generated number. Provide feedback for each guess (too high, too low) 
and terminate the game when the number is guessed or attempts are exhausted */ 
// #include <iostream>
#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    srand(time(0));  
    int randomNumber = rand() % 100 + 1; 

    int attempts = 3;  
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "You have " << attempts << " attempts to guess it correctly.\n" << endl;

    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == randomNumber) {
            cout << "\nCongratulations! You guessed the number correctly!" << endl;
            break;
        } else if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Too low! Try again." << endl;
        }

        attempts--;

        if (attempts > 0) {
            cout << "Attempts left: " << attempts << "\n" << endl;
        } else {
            cout << "\nSorry! You've run out of attempts. The correct number was: " << randomNumber << endl;
        }
    }

    return 0;
}
