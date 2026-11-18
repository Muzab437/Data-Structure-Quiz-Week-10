#include <iostream>
using namespace std;

const int MAX = 5;
int queueArr[MAX];
int front = 0;
int rear = -1;

bool isEmpty() { return front > rear; }
bool isFull()  { return rear == MAX - 1; }

void enqueue(int value) {
    if (isFull()) {
        cout << "Queue Overflow! Tidak bisa menambah " << value << "." << endl;
        return;
    }
    rear++;
    queueArr[rear] = value;
    cout << value << " inserted successfully." << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow! Queue kosong." << endl;
        return;
    }
    cout << queueArr[front] << " removed successfully." << endl;
    front++;
}

void frontElement() {
    if (isEmpty()) {
        cout << "Queue kosong." << endl;
        return;
    }
    cout << "Front element: " << queueArr[front] << endl;
}

void display() {
    cout << "Queue: ";
    if (isEmpty()) {
        cout << "(kosong)" << endl;
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n===== QUEUE MENU =====" << endl;
        cout << "1. Enqueue  2. Dequeue" << endl;
        cout << "3. Front  4. Display  5. Exit" << endl;
        cout << endl;
        display();
        cout << "Choose operation: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                frontElement();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid (1-5)." << endl;
        }
    } while (choice != 5);

    return 0;
}
