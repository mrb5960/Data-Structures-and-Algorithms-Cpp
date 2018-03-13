#include <iostream>
using namespace std;

class Node{
public:
	Node* next;
	int data;

	Node(){
		// this is important, or a garbage value is assigned
		this->next = NULL;
		this->data = -1;
		cout << "Node constructor" << endl;
	}
};

class LinkedList{
public:
	int length;
	Node* head, *tail;

	LinkedList();
	~LinkedList();

	void add(int n);
	void print();
};

LinkedList::LinkedList(){
	this->length = 0;
	this->head = NULL;
	this->tail = NULL;
	cout << "LL constructor" << endl;
}

LinkedList::~LinkedList(){
	cout << "Calling destructer" << endl;
}

void LinkedList::add(int n){
	Node* node = new Node();
	node -> data = n;
	if(this->head == NULL){
		this->head = node;
		this->tail = node;
		length++;
		cout << "first added" << endl;
	}
	else{
/*		tail->next = node;
		tail = node;
		length++;*/
		Node* current = head;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = node;
		cout << "Next added" << endl;
	}
}

void LinkedList::print(){
	Node* current = head;
	while(current){
		cout << current->data << " ";
		current = current -> next;
	}
}

/*int main(){

	LinkedList ll;

	ll.add(1);
	ll.add(2);
	ll.add(3);
	ll.print();
	return 0;
}*/



