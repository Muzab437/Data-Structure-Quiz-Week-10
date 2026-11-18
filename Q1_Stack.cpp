#include <iostream>
using namespace std;

const int MAX = 5;
int stackArr[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Tidak bisa menambah " << value << "." << endl;
        return;
    }
    top++;
    stackArr[top] = value;
    cout << value << " inserted successfully." << endl;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Stack kosong." << endl;
        return;
    }
    cout << stackArr[top] << " removed successfully." << endl;
    top--;
}

void peek() {
    if (top == -1) {
        cout << "Stack kosong." << endl;
        return;
    }
    cout << "Top element: " << stackArr[top] << endl;
}

void display() {
    if (top == -1) {
        cout << "Stack kosong." << endl;
        return;
    }
    cout << "Stack (top -> bottom): ";
    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n===== STACK MENU =====" << endl;
        cout << "1. Push  2. Pop  3. Peek" << endl;
        cout << "4. Display  5. Exit" << endl;
        cout << "\nChoose operation: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
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
