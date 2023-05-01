#include <iostream>

using namespace std;

void push(int stack[], int& top, int value, int size) {
    if (top == size - 1) {
        cout << "\nStack Overflow\n";
    } else {
        top++;
        stack[top] = value;
    }
}

void pop(int stack[], int& top) {
    if (top <= -1) {
        cout << "\nStack Underflow\n\n";
    } else {
        cout << "\nThe popped element is " << stack[top] << endl;
        top--;
    }
}

void display(int stack[], int top) {
    if (top >= 0) {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    } else {
        cout << "\nStack is empty\n";
    }
}

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    int stack[size];
    int top = -1;

    int choice, value;
    do {
        cout << "\n1) Push\n";
        cout << "2) Pop\n";
        cout << "3) Display\n";
        cout << "4) Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "\nEnter value to be pushed: ";
                cin >> value;
                push(stack, top, value, size);
                break;
            case 2:
                pop(stack, top);
                break;
            case 3:
                display(stack, top);
                break;
            case 4:
                cout << "Exiting program\n";
                break;
            default:
                cout << "\nInvalid choice\n";
        }
    } while (choice != 4);

    return 0;
}
