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

void insert_at_tail(Node* &head,Node* &tail, int val){
    Node* newNode = new Node(val); // creating new Node
    //corner case: if the list is empty then head->next will be NULL
    // which will give errors
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail -> next = newNode;
    tail = tail -> next;
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
    // Before input: As the list is empty so both head and tail will be NULL
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    // will continues inputting until user input -1
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
    insert_at_tail(head, tail, val);
    }
	print_linked_list(head);
	return 0;
}
