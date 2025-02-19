#include <iostream>

using namespace std;

int main() {
    int randomNumber, userGuess;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Enter a number for others to guess: ";
    cin >> randomNumber;
    
    cout << "Now, guess the number: ";
    
    while (true) {
        cin >> userGuess;
        
        if (userGuess > randomNumber) {
            cout << "Too high! Try again: ";
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        }
    }
    
    return 0;
}

