#include <iostream>
using namespace std;

class Circle {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }

    float getArea() {
        return 3.14 * radius * radius;
    }

    friend void compareTwoCircles(Circle c1, Circle c2);
};

void compareTwoCircles(Circle c1, Circle c2) {
    if (c1.getArea() > c2.getArea())
        cout << "First circle has a larger area." << endl;
    else if (c1.getArea() < c2.getArea())
        cout << "Second circle has a larger area." << endl;
    else
        cout << "Both circles have equal area." << endl;
}

int main() {
    Circle c1(5.0), c2(7.0);
    compareTwoCircles(c1, c2);
    return 0;
}
