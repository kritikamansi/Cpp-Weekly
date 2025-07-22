#include <iostream>
using namespace std;

int main() {
    char seats[5][5];
    int row, col;
    char choice;

    // Initialize all seats to 'O'
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            seats[i][j] = 'O';
        }
    }

    do {
        // Display seating arrangement
        cout << "Seating Arrangement:\n";
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << seats[i][j] << " ";
            }
            cout << endl;
        }

        // Ask for input
        cout << "Enter row (1-5): ";
        cin >> row;
        cout << "Enter column (1-5): ";
        cin >> col;

        // Validate input
        if (row < 1 || row > 5 || col < 1 || col > 5) {
            cout << "Invalid row or column number!" << endl;
        } else if (seats[row-1][col-1] == 'X') {
            cout << "Seat already booked!" << endl;
        } else {
            seats[row-1][col-1] = 'X';
            cout << "Seat booked successfully." << endl;
        }

        cout << "Do you want to book another seat? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
