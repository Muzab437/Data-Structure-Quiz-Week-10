#include <iostream>
using namespace std;

const int MAX = 5;
int queueArr[MAX];
int front = 0;
int rear = -1;
int count = 0;

bool isEmpty() { return count == 0; }
bool isFull()  { return count == MAX; }

void enqueue(int value) {
    if (isFull()) {
        cout << "Queue Overflow! Tidak bisa menambah " << value << "." << endl;
        return;
    }
    rear = (rear + 1) % MAX;
    queueArr[rear] = value;
    count++;
    cout << "Enqueue " << value << " (rear index = " << rear << ")" << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow! Queue kosong." << endl;
        return;
    }
    cout << "Dequeue " << queueArr[front] << " (front index = " << front << ")" << endl;
    front = (front + 1) % MAX;
    count--;
}

void display() {
    cout << "Queue: ";
    if (isEmpty()) {
        cout << "(kosong)" << endl;
        return;
    }
    int idx = front;
    for (int i = 0; i < count; i++) {
        cout << queueArr[idx] << " ";
        idx = (idx + 1) % MAX;
    }
    cout << endl;
}

int main() {
    cout << "=== Mandatory 10-Step Test ===" << endl;

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    dequeue();
    dequeue();

    enqueue(60);
    enqueue(70);

    display();

    return 0;
}
