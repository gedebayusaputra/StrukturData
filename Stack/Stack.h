class Node{
	public:
		int value;
		Node *next;
		
		Node(){
			next = NULL;
		}
};
class Stack{
	public:
		Node *top;
		
		void push(int);
		void pop();
		
		void printAll();
		
		Stack(){
			top = NULL;
		}
};
