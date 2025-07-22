#include <iostream>
using namespace std;

int main() {
    float temp, converted;
    char choice;

    cout << "Enter the temperature: ";
    cin >> temp;

    cout << "Convert to (C/F): ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        converted = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << converted << endl;
    } else if (choice == 'F' || choice == 'f') {
        converted = (temp * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << converted << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
