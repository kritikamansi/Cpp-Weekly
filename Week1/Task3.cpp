#include <iostream>
using namespace std;

int main() {
    int arr[10], n, temp;

    cout << "Enter how many numbers (max 10): ";
    cin >> n;

    if (n > 10 || n < 1) {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Simple bubble sort
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
