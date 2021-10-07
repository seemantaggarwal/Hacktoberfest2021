#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Queue {
	// Define the data members
    Node *head,*tail;
    int size;
   public:
    Queue() {
		head = NULL;
        tail = NULL;
        size = 0;
	}
	
	/*----------------- Public Functions of Queue -----------------*/

	int getSize() {
		// Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        return head==NULL;
		// Implement the isEmpty() function
	}

    void enqueue(int data) {
        Node *elem = new Node(data);
        if(head==NULL){
            head = elem;
            tail = elem;
        }else{
            tail->next = elem;
            tail= tail->next;
        }
		// Implement the enqueue() function
	}

    int dequeue() {
        if(isEmpty()) return -1;
        int val = head->data;
        head = head->next;
        return val;
        // Implement the dequeue() function
    }

    int front() {
        if(isEmpty()) return -1;
        return head->data;
        // Implement the front() function
    }
};

int main() {
    Queue q;

    int t;
    cin >> t;

    while (t--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                q.enqueue(input);
                break;
            case 2:
                cout << q.dequeue() << "\n";
                break;
            case 3:
                cout << q.front() << "\n";
                break;
            case 4:
                cout << q.getSize() << "\n";
                break;
            default:
                cout << ((q.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}