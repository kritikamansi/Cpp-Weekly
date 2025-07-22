#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char titles[10][150];

    // Getting titles
    for (int i = 0; i < 10; i++) {
        cout << "Enter title " << (i + 1) << ": ";
        cin.ignore();
        cin.getline(titles[i], 150);
    }

    // Writing to binary file
    ofstream outFile("books.dat", ios::binary);
    for (int i = 0; i < 10; i++) {
        outFile.write((char*)&titles[i], sizeof(titles[i]));
    }
    outFile.close();
    cout << "All titles written to file." << endl;

    // Search for a title
    char search[150];
    cout << "Enter title to search: ";
    cin.ignore();
    cin.getline(search, 150);

    ifstream inFile("books.dat", ios::binary);
    bool found = false;
    char temp[150];

    while (inFile.read((char*)&temp, sizeof(temp))) {
        if (strcmp(temp, search) == 0) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Title found in file!" << endl;
    else
        cout << "Title not found." << endl;

    inFile.close();
    return 0;
}
