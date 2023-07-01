#include <iostream>
#include "Stack.h"
using namespace std;

void Stack::push(int val){
	Node* temp = new Node;
    temp->value = val;
    temp->next = top;
    top = temp;
}
void Stack::pop(){
	if (top == NULL) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
} 
void Stack::printAll(){
	Node *tmp = top;
	while(tmp!=NULL){
		cout<<tmp->value<<"\n";
		tmp = tmp->next;
	}
	cout<<endl;
}
