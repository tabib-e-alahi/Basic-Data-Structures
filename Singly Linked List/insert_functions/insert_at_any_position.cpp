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

void insert_at_any_position(Node* &head, int idx, int val){
    //step-1: create a new node which will be inserted
    Node* newNode = new Node(val); // creating new Node
    
     //if there no item in list then new node will be both the head and tail
    // if(head == NULL){
    //     head = newNode;
    //     tail = newNode;
    //     return;
    // }
    
    // step-2
    Node* tmp = head;
    // if we use index start i = 0 then range will be idex-1 
    for(int i = 1; i < idx; i++)
    {
        tmp = tmp -> next;
    }
    
    newNode->next = tmp->next;
    tmp->next = newNode;
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
    Node* tail = new Node(40);
	
	head->next = a;
	a->next = b;
	b->next = tail;
	insert_at_any_position(head, 2, 100);
	
	print_linked_list(head);
	return 0;
}
