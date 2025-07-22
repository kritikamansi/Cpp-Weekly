#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string> names;
map<string, int> ages;

void addPerson(string name, int age) {
    names.push_back(name);
    ages[name] = age;
}

void findAboveAge(int ageLimit) {
    cout << "People above age " << ageLimit << ":" << endl;
    for (int i = 0; i < names.size(); i++) {
        if (ages[names[i]] > ageLimit) {
            cout << names[i] << " - " << ages[names[i]] << endl;
        }
    }
}

void displaySortedNames() {
    vector<string> sortedNames = names;
    sort(sortedNames.begin(), sortedNames.end());
    cout << "Names in alphabetical order:" << endl;
    for (int i = 0; i < sortedNames.size(); i++) {
        cout << sortedNames[i] << endl;
    }
}

int main() {
    addPerson("Ram", 22);
    addPerson("Shyam", 19);
    addPerson("Hari", 30);
    addPerson("Gita", 25);
    addPerson("Sita", 18);

    findAboveAge(20);
    displaySortedNames();

    return 0;
}
