#include <iostream>
using namespace std;

void insert(int *queue, int &head, int &tail, int max_size, int val) {
    if (tail == max_size - 1) {
        cout << "\nQueue Overflow\n";
    } else {
        if (head == -1) {
            head = 0;
        }
        tail++;
        queue[tail] = val;
    }
}

void remove(int *queue, int &head, int &tail) {
    if (head == -1 || head > tail) {
        cout << "\nQueue Underflow\n";
    } else {
        cout << "\nElement deleted from queue is: " << queue[head] << endl;
        head++;
    }
}

void display(int *queue, int head, int tail) {
    if (head == -1 || head > tail) {
        cout << "\nQueue is empty\n";
        return;
    }
    cout << "\nQueue elements are: ";
    for (int i = head; i <= tail; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    int max_size;
    cout << "Enter the size of the queue: ";
    cin >> max_size;

    int *queue = new int[max_size];
    int head = -1, tail = -1;

    int choice, val;
    do {
        cout << "\n1) Insert to queue\n";
        cout << "2) Delete from queue\n";
        cout << "3) Display\n";
        cout << "4) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\nInsert the element in queue: ";
                cin >> val;
                insert(queue, head, tail, max_size, val);
                break;
            case 2:
                remove(queue, head, tail);
                break;
            case 3:
                display(queue, head, tail);
                break;
            case 4:
                cout << "\nExit\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 4);

    delete[] queue;

    return 0;
}
