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

Node* input_tree(){
    // step-1: input  val
    int val;
    cin >> val;
    // initializing root node
    Node* root;
    // if input val is -1 then there is no node means node will be null
    if(val == -1){
        root = NULL;
    }else{
        root = new Node(val);
    }
    
    queue<Node *>q;
    // if root is not NULL the push it to the queue
    if(root) q.push(root);
    
    while(!q.empty()){
        //step-1: save the node the pop it from queue , p as parent node
        Node* p = q.front();
        q.pop();
        
        //step-2: input the left and right children nodes
        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        
        // if the l is -1 so there is not left child node
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        // if the r is -1 so there is not right child node
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        
        //connection of the child nodes with the parent node p
        p->left = myLeft;
        p->right = myRight;
        
        //step-3: now pusht the child(if exists) to the queue
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        
    }
    
    return root;
} 

int count_nodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    
    return l+r+1;
}

int main() {
	Node* root = input_tree();
	levelorder(root);
	
	cout << "Total Nodes: " << count_nodes(root) << endl;

}