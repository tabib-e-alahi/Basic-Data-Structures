#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int val;
	Node* left;
	Node* right;

	Node(int val) {
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}
};

void levelorder(Node* root) {
	//base case: If no tree exists
	if(root == NULL) {
		cout << "No Tree\n";
		return;
	}

	queue<Node *> q; // initializing empty queue
	q.push(root);

	while(!q.empty()) {
		//step-1: pop the Node after saving it in node f to work with it
		Node* f = q.front();
		q.pop();

		// step-2: work with the node (here printing)
		cout << f->val << " ";

		// step-3: push the childres of that node into the queue
		// for this first check if the children exusts or not
		if(f->left) q.push(f->left);
		if(f->right) q.push(f->right);
	}
}

int main() {
	Node* root = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	Node* e = new Node(60);

	//root node connection with its two child nodes a(left child) and b(right child)
	root->left = a;
	root->right = b;

	// node a connection with its only child node c(left child)
	a->left = c;

	//node b connection with its two child nodes d(left child) and e(right child)
	b->left = d;
	b->right = e;

	levelorder(root);

}