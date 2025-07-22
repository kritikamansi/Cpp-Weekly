#include <iostream>
using namespace std;

const int SIZE = 10;
int queue[SIZE];
int front = 0, rear = -1;

void enqueue(int value) {
    if (rear >= SIZE - 1)
        cout << "Queue Overflow" << endl;
    else
        queue[++rear] = value;
}

void dequeue() {
    if (front > rear)
        cout << "Queue Underflow" << endl;
    else
        front++;
}

void displayQueue() {
    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";
    cout << endl;
}

void reverseFirstK(int k) {
    if (k > rear - front + 1) {
        cout << "Not enough elements" << endl;
        return;
    }
    for (int i = 0; i < k / 2; i++) {
        int temp = queue[front + i];
        queue[front + i] = queue[front + k - 1 - i];
        queue[front + k - 1 - i] = temp;
    }
}

void interleaveQueue() {
    int mid = (rear - front + 1) / 2;
    int temp[SIZE];
    int i = 0;
    for (int j = 0; j < mid; j++) {
        temp[i++] = queue[front + j];
        temp[i++] = queue[front + mid + j];
    }
    for (int j = 0; j < i; j++)
        queue[front + j] = temp[j];
}

int main() {
    for (int i = 1; i <= 10; i++) enqueue(i);
    displayQueue();

    reverseFirstK(5);
    cout << "After reversing first 5:" << endl;
    displayQueue();

    interleaveQueue();
    cout << "After interleaving halves:" << endl;
    displayQueue();

    return 0;
}
