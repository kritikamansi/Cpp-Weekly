#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int mark1, mark2, mark3;

        void input() {
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter marks for 3 subjects: ";
            cin >> mark1 >> mark2 >> mark3;

            // Validation
            if (mark1 < 0 || mark1 > 100 || mark2 < 0 || mark2 > 100 || mark3 < 0 || mark3 > 100) {
                cout << "Invalid marks entered. Marks should be between 0 and 100." << endl;
                return;
            }

            int total = mark1 + mark2 + mark3;
            float average = total / 3.0;

            cout << "Total Marks: " << total << endl;
            cout << "Average Marks: " << average << endl;

            if (average >= 90)
                cout << "Grade: A" << endl;
            else if (average >= 80)
                cout << "Grade: B" << endl;
            else if (average >= 70)
                cout << "Grade: C" << endl;
            else if (average >= 60)
                cout << "Grade: D" << endl;
            else
                cout << "Grade: F" << endl;
        }
};

int main() {
    Student s;
    s.input();
    return 0;
}
