#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        head = newNode;
    else {
        Node* temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }
}

void insertAtStart(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(int pos, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) return;

    newNode->next = temp->next;
    temp->next = newNode;
}

void displayList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverseInGroups(Node* node, int k) {
    Node* prev = NULL;
    Node* curr = node;
    Node* next = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL)
        node->next = reverseInGroups(next, k);

    return prev;
}

int nthFromEnd(int n) {
    Node* mainPtr = head;
    Node* refPtr = head;

    for (int i = 0; i < n; i++) {
        if (refPtr == NULL) return -1;
        refPtr = refPtr->next;
    }

    while (refPtr != NULL) {
        refPtr = refPtr->next;
        mainPtr = mainPtr->next;
    }

    return mainPtr->data;
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);
    displayList();

    insertAtStart(5);
    insertAtPosition(3, 15);
    displayList();

    cout << "3rd node from end: " << nthFromEnd(3) << endl;

    head = reverseInGroups(head, 2);
    cout << "List after reversing in groups of 2: ";
    displayList();

    return 0;
}
