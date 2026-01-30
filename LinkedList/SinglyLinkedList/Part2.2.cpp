#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int x) : data(x), next(nullptr)  {}

};

void insertAtTail(Node* &head, int value){
    Node* newNode = new Node(value);

    if (head==nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr){
        temp = temp->next;

    }
    temp->next=newNode;
    Node*rev = temp;
}

void printList(Node* head){
    while(head!=nullptr){
       cout<<head->data<<"->";
       head=head->next;
    }
    cout<<"NULL";
}

    Node* temp = head;
    while (temp->next != nullptr){
        temp = temp->next;
    }
    Node*rev = temp;

int main(){
    Node* head = nullptr;

    insertAtTail(head, 10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);

    printList(head);

    return 0;
}