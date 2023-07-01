#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
	
	int vals = 0;
	Queue queue1;
	
	queue1.enqueue(1);
	queue1.enqueue(2);
	queue1.enqueue(3);
	queue1.enqueue(4);
	queue1.dequeue();
	queue1.enqueue(5);
	
	cout <<"rear: " <<queue1.rear->value<<endl;
	cout <<"front: " <<queue1.front->value<<endl;
	
	queue1.printAll();
	
	Queue userqueue1;
	
	while (vals != 4) {
		
		cout << "\n----------Queue----------\n";
		cout << "1. Enqueue\n";
		cout << "2. Dequeue\n";
		cout << "3. Print All\n";
		cout << "4. Exit\n";
		
		cout << "Input: ";
		cin >> vals;
			
		switch (vals) {
			
			case 1: {
				int val;
				cout << "Enqueue: ";
				cin >> val;
				userqueue1.enqueue(val);
				userqueue1.printAll();
				break;
			}
					
			case 2: {
				Node* tmp = userqueue1.front;
				if (tmp != NULL) {
					cout << "Dequeued Value: " << tmp->value << std::endl;
					userqueue1.dequeue();
				} 
				
				else {
					cout << "Queue is empty. Cannot dequeue." << std::endl;
				}
				
				userqueue1.printAll();
				break;
			}
					
			case 3:
				userqueue1.printAll();
				break;
					
			case 4:
				cout << "Exiting Program..." << std::endl;
				break;

			default:
				cout << "Please input 1-4!" << std::endl;
				break;
					
		}		
	}

	
	return 0;
}
