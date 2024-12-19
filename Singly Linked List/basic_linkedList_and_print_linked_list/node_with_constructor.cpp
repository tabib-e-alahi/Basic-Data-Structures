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
	// create 3 node object
	Node a(10), b(20), c(40);
	
	a.next = &b;
	b.next = &c;
	
	//printing val of node b from node a
	cout << a.next->val <<endl;
	//printing val of node from node a;
	cout << a.next->next->val << endl;
	return 0;
}
