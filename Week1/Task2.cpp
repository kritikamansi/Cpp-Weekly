#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int level, guess, number;

    cout << "Choose difficulty level (1-Easy, 2-Medium, 3-Hard): ";
    cin >> level;

    if (level == 1) {
        number = rand() % 8 + 1;
    } else if (level == 2) {
        number = rand() % 30 + 1;
    } else if (level == 3) {
        number = rand() % 50 + 1;
    } else {
        cout << "Invalid level!" << endl;
        return 0;
    }

    cout << "Guess the number: ";
    cin >> guess;

    if (guess == number) {
        cout << "Correct! You guessed the number." << endl;
    } else {
        cout << "Wrong! The number was " << number << endl;
    }

    return 0;
}
