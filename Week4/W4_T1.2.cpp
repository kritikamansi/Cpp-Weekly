#include <iostream>
using namespace std;

const int MAX = 10;
int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1)
        cout << "Stack Overflow" << endl;
    else
        stack[++top] = value;
}

void pop() {
    if (top == -1)
        cout << "Stack Underflow" << endl;
    else
        top--;
}

void display() {
    for (int i = 0; i <= top; i++)
        cout << stack[i] << " ";
    cout << endl;
}

void findMiddle() {
    if (top == -1)
        cout << "Stack is empty" << endl;
    else
        cout << "Middle element: " << stack[top / 2] << endl;
}

void reverseBottomHalf() {
    int mid = (top + 1) / 2;
    for (int i = 0; i < mid / 2; i++) {
        int temp = stack[i];
        stack[i] = stack[mid - 1 - i];
        stack[mid - 1 - i] = temp;
    }
}

int main() {
    for (int i = 1; i <= 10; i++) push(i);
    display();

    findMiddle();

    reverseBottomHalf();
    cout << "After reversing bottom half:" << endl;
    display();

    return 0;
}
