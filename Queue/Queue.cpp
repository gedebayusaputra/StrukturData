#include <iostream>
#include "Queue.h"
using namespace std;

void Queue::enqueue(int input){
	Node* temp = new Node;
        temp->value = input;
        temp->next = NULL;
        if (front == NULL) {
            front = temp;
        } 
		
		else {
            rear->next = temp;
        }
        rear = temp;
}
void Queue::dequeue(){
	if (front == NULL) {
            cout << "Queue is empty." << endl;
            return;
        }
        else{
        Node* temp = front;
        front = front->next;
        delete temp;
        }
}
void Queue::printAll(){
	Node *tmp = front;
	while(tmp!=NULL){
		cout<<tmp->value<<"<-";
		tmp = tmp->next;
	}
	cout<<endl;
}
