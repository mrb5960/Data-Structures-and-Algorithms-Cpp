#include <iostream>
using namespace std;

class Stack{
	int capacity = 10;
	int arr[10];
	int size = 0;
	int top = -1;

public:
	bool isFull(){
		return size == capacity;
	}

	bool isEmpty(){
		return top == -1;
	}

	bool push(int n){
		if(isFull())
			return false;
		else{
			arr[++top] = n;
			size++;
		}
		return true;
	}

	int pop(){
		if(isEmpty())
			return -1;
		else{
			size--;
			return arr[top--];
		}
	}

	void printStack(){
		for(int i = 0; i < size; i++){
			cout << arr[i] << " ";
		}
	}
};

/*int main(){
	Stack st;
	for(int i = 0; i < 10; i++)
		st.push(i);
	cout << st.pop() << endl;
	cout << st.pop() << endl;
	st.printStack();
	return 0;
}*/
