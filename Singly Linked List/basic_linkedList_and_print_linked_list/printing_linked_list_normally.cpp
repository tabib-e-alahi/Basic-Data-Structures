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

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
	
	head->next = a;
	a->next = b;
	b->next = c;
	
	// creating a tmp for storing the head
	Node* tmp = head;
	while(tmp != NULL){
	    cout << tmp -> val <<endl;
	    tmp = tmp -> next;
	}
	
	return 0;
}