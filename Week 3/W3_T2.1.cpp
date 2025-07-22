#include <iostream>
#include <fstream>
using namespace std;

class Vehicle {
public:
    string regNo;
    string color;

    void input() {
        cout << "Enter Registration Number: ";
        cin >> regNo;
        cout << "Enter Color: ";
        cin >> color;
    }
};

class Car : public Vehicle {
public:
    int seats;

    void inputCar() {
        input();
        cout << "Enter Number of Seats: ";
        cin >> seats;
    }

    void writeToFile() {
        ofstream fout("car.txt", ios::app);
        fout << "RegNo: " << regNo << ", Color: " << color << ", Seats: " << seats << endl;
        fout.close();
    }
};

class Bike : public Vehicle {
public:
    int engine;

    void inputBike() {
        input();
        cout << "Enter Engine Capacity: ";
        cin >> engine;
    }

    void writeToFile() {
        ofstream fout("bike.txt", ios::app);
        fout << "RegNo: " << regNo << ", Color: " << color << ", Engine: " << engine << endl;
        fout.close();
    }
};

int main() {
    Car c;
    Bike b;

    cout << "--- Enter Car Details ---" << endl;
    c.inputCar();
    c.writeToFile();

    cout << "\n--- Enter Bike Details ---" << endl;
    b.inputBike();
    b.writeToFile();

    cout << "\nVehicle details saved to files." << endl;
    return 0;
}
