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
	
	head->next = a;
	a->next = b;
	
	//printing val of head
	cout << head->val <<endl;
	//printing val of node a from head;
	cout << head->next->val << endl;
	return 0;
}
