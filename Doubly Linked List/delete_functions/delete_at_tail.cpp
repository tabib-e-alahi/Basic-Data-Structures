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

void delete_at_tail(Node* &head, Node* &tail)
{
    if(head == NULL)
    {
        cout << "List is already empty\n";
        return;
    }
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    // if there were only one node
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(40);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    print_doubly(head);
    delete_at_tail(head, tail);
    print_doubly(head);

}

