class Node{
	public:
		int value;
		Node *next;
		
		Node(){
			next=NULL;
		}
};
class Queue{
	public:
	Node *rear;
	Node *front;
	
	void enqueue(int);
	void dequeue();
	
	void printAll();
	
	Queue(){
		rear=front=NULL;
	}
};
