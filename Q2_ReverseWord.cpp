#include <iostream>
using namespace std;

const int MAX = 100;
char stackArr[MAX];
int top = -1;

void push(char c) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Kata terlalu panjang." << endl;
        return;
    }
    stackArr[++top] = c;
}

char pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
        return '\0';
    }
    return stackArr[top--];
}

bool isEmpty() {
    return top == -1;
}

int main() {
    char word[MAX];

    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; word[i] != '\0'; i++) {
        push(word[i]);
    }

    char reversed[MAX];
    int n = 0;
    while (!isEmpty()) {
        reversed[n++] = pop();
    }
    reversed[n] = '\0';

    cout << "\nOriginal word: " << word << endl;
    cout << "Reversed word: " << reversed << endl;

    return 0;
}
