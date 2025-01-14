#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int val;
  Node* left;
  Node* right;
  
  Node(int val){
      this->val = val;
      this->left = NULL;
      this->right = NULL;
  }
};

void inorder(Node* root){
    //base case: If no tree exists
    if(root == NULL){
        return;
    }
    
    // inorder:  left --> root --> right
    inorder(root->left); // left
    cout << root->val << " "; // root
    inorder(root->right); // right
}

int main(){
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
    
    inorder(root);
    
}