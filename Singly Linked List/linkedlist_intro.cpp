#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;// pointing the whole next node not the node value
};

int main() {
	// create 3 node object
	Node a, b, c;
	a.val = 10;
	b.val = 20;
	c.val = 30;
	
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	
	//printing val of node b from node a
	cout << (*a.next).val <<endl;
	//OR
	cout << a.next->val <<endl;
	//printing val of node from node a;
	cout << a.next->next->val << endl;
	return 0;
}
