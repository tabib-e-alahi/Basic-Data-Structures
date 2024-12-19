#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;// pointing the whole next node not the node value
    
    Node(int val){
        this->val = val;
        this->next = NULL;//initially null for all nodes
    }
};

void insert_at_tail(Node* head, int val){
    //step-1: create a new node which will be inserted
    Node* newNode = new Node(val); // creating new Node
    
    //corner case: if the list is empty then head->next will be NULL
    // which will give errors
    if(head == NULL){
        head = newNode;
        return;
    }
    
    //step-2: stores the head into tmp
    Node *tmp = head;
    
    //step-3: loop through the head to last Node
    while(tmp->next != NULL){
        tmp = tmp -> next;
    }
    // after this loop the tmp will be in last node next which is NULL
    //step-4: now store the new node in place of NULL
    tmp -> next = newNode;
}

void print_linked_list(Node* head){
    // creating a tmp for storing the head
	Node* tmp = head;
	while(tmp != NULL){
	    cout << tmp -> val <<" ";
	    tmp = tmp -> next;
	}
	cout << endl;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
	
	head->next = a;
	a->next = b;
	b->next = c;
	insert_at_tail(head, 100);
	
	print_linked_list(head);
	return 0;
}
