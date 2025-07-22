#include <iostream>
using namespace std;

class Time {
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        if (h > 24 || m > 60) {
            throw "Invalid time input!";
        }
        hours = h;
        minutes = m;
    }

    Time operator+(Time t) {
        Time temp;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;

        if (temp.minutes >= 60) {
            temp.hours += temp.minutes / 60;
            temp.minutes = temp.minutes % 60;
        }

        if (temp.hours > 24) {
            throw "Time exceeds 24 hours!";
        }

        return temp;
    }

    bool operator>(Time t) {
        if (hours > t.hours) return true;
        else if (hours == t.hours && minutes > t.minutes) return true;
        else return false;
    }

    void display() {
        cout << hours << "h " << minutes << "m" << endl;
    }
};

int main() {
    try {
        Time t1(5, 45);
        Time t2(3, 30);
        Time t3 = t1 + t2;

        cout << "t1 + t2 = ";
        t3.display();

        if (t1 > t2)
            cout << "t1 is greater than t2" << endl;
        else
            cout << "t2 is greater than or equal to t1" << endl;

    } catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
