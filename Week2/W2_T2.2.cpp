#include <iostream>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

float findMax(float a, float b) {
    return (a > b) ? a : b;
}

int findMax(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}

float findMax(int a, float b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 5 and 9: " << findMax(5, 9) << endl;
    cout << "Max of 2.3 and 5.7: " << findMax(2.3f, 5.7f) << endl;
    cout << "Max of 4, 7, and 2: " << findMax(4, 7, 2) << endl;
    cout << "Max of 10 and 8.6: " << findMax(10, 8.6f) << endl;

    return 0;
}
