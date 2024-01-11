#include<iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

//insertion at head
void insertAtHead(Node* &head,int d)
{
    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

//insertion at tail
void insertAtTail(Node* &tail,int d)
{
    //new node create
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

//traversing a linked list
void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
}