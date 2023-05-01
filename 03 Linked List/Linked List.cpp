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

	
	
	int choicef;
	do {
    cout << "1) Queue\n";
    cout << "2) Stack\n";
    cout << "Enter your choice: ";
    cin >> choicef;



    switch (choicef){
    
        case 1:{
			
            int max_size;
            cout<<"\n------ Queue Program ------\n";
            cout << "Enter the size of the queue: ";
            cin >> max_size;

            int *queue = new int[max_size];
            int head = -1, tail = -1;

            int choice1, val;
            do {
                cout << "\n1) Insert to queue\n";
                cout << "2) Delete from queue\n";
                cout << "3) Display\n";
                cout << "4) Exit\n";
                cout << "Enter your choice: ";
                cin >> choice1;
                switch (choice1) {
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
            } while (choice1 != 4);
            break;
        }
        case 2:{
			
            int size;
            cout<<"\n------ Stack Program ------\n";
            cout << "Enter the size of the stack: ";
            cin >> size;

            int stack[size];
            int top = -1;

            int choice2, value;
            do {
                cout << "\n1) Push\n";
                cout << "2) Pop\n";
                cout << "3) Display\n";
                cout << "4) Exit\n";
                cout << "Enter choice: ";
                cin >> choice2;

                switch (choice2) {
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
           	 } while (choice2 != 4);
            break;

    		}
    
    	default:
    		cout << "\nInvalid choice\n\n";
		}
		
	} while (choicef != 1 && choicef != 2);
	
    return 0;
}

