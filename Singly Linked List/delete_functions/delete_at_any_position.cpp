#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next; // pointing the whole next node, not the node value

    Node(int val){
        this->val = val;
        this->next = NULL;//initially null for all nodes
    }
};

void delete_at_any_position(Node* &head, int idx)
{
    Node* tmp = head;
    for(int i = 0; i < idx-1; i++){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    //linking deleteNode next node with the prev node
    tmp->next = tmp->next->next;
    delete deleteNode;//clear from memory

}


void insert_at_tail(Node* &head, Node* &tail, int val){
    //step-1: create a new node which will be inserted
    Node* newNode = new Node(val); // creating new Node

    //if there no item in list then newNode will be both the head and tail
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;//update tail
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
	int idx;
	cin >> idx;
	delete_at_any_position(head, idx);
	print_linked_list(head);
	return 0;
}

