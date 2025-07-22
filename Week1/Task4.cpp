#include <iostream>
using namespace std;

int main() {
    int num, digit, prevDigit;
    bool increasing = true, decreasing = true;

    cout << "Enter a positive number: ";
    cin >> num;

    if (num < 10) {
        cout << "Not bouncy (single digit)" << endl;
        return 0;
    }

    prevDigit = num % 10;
    num = num / 10;

    while (num > 0) {
        digit = num % 10;

        if (digit < prevDigit) {
            increasing = false;
        }
        if (digit > prevDigit) {
            decreasing = false;
        }

        prevDigit = digit;
        num = num / 10;
    }

    if (increasing || decreasing) {
        cout << "Not bouncy" << endl;
    } else {
        cout << "Bouncy number" << endl;
    }

    return 0;
}

