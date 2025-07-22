#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    char name[50];
    int marks;
};

int main() {
    Student s;
    char filename[] = "students.txt";
    int choice;

    cout << "1. Read student records\n";
    cout << "2. Add new student record\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        ifstream fin(filename);
        if (!fin) {
            cout << "File not found!" << endl;
            return 0;
        }

        while (fin >> s.roll >> s.name >> s.marks) {
            if (s.marks < 0 || s.marks > 100) {
                cout << "Error: Invalid marks for student roll " << s.roll << endl;
                continue;
            }
            cout << "Roll: " << s.roll << ", Name: " << s.name << ", Marks: " << s.marks << endl;
        }
        fin.close();
    }
    else if (choice == 2) {
        ofstream fout(filename, ios::app);
        if (!fout) {
            cout << "Unable to open file for writing!" << endl;
            return 0;
        }

        cout << "Enter roll number: ";
        cin >> s.roll;
        cout << "Enter name: ";
        cin >> s.name;
        cout << "Enter marks: ";
        cin >> s.marks;

        if (s.marks < 0 || s.marks > 100) {
            cout << "Exception: Marks must be between 0 and 100!" << endl;
            return 0;
        }

        fout << s.roll << " " << s.name << " " << s.marks << endl;
        fout.close();
        cout << "Record added successfully." << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
