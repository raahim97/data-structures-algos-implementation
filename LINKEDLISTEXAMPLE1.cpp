#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};
//Node *head = new Node;
//head = NULL;
// only for the 1st Node
void initNode(Node *head,int n){
	head->data = n;
	head->next =NULL;
}

// apending
void addNode(Node *head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;

	Node *cur = head;
	while(cur) {
		if(cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}

void display(Node *head) {
	Node *list = head;
	while(list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
	cout << endl;
}

int main() 
{
	 Node *newHead;
	 Node *head = new Node;
	 //head = NULL;
	
	initNode(head,10);
	display(head);

	addNode(head,20);
	display(head);

	addNode(head,30);
	display(head);
	
}
