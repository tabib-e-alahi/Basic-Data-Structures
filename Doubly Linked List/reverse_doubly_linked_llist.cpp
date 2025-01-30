#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void reverse_doubly(Node* head, Node* tail)
{
    for(Node* i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        swap(i->val, j->val);
    }
}

void  insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL){
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_doubly(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    print_doubly(head);
    reverse_doubly(head, tail);
    print_doubly(head);

}
