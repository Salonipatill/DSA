//Some basic and important Information
//head-> address of  first node
//Node* head->copy of address
//Node* &head-> original address variable


//Node*& head is used to pass the head pointer by reference so tha changes made to head inside the function reflect in the calling function


//Rule to remember 

//If a function modifies head , use:
//Node* &head

//lf a function only reads/traverses , use:
//Node* head

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=nullptr;
    }
};
//Node Structure


void insertAtTail(Node* &head, int value){
    Node* newNode = new Node(value);

    if (head==nullptr){
    head=newNode;
    return;
    }  

    Node* temp = head;
    while (temp->next!=nullptr){
       temp=temp->next;

    }
    temp->next=newNode;

}
//Creates a new node
//if list is empty-> new node becomes head
//Othewise:
//Traverse till last node
//Attach new node at the end


void printList(Node* head){
    while (head != nullptr){
        cout<<head->data<<"->";
        head=head->next;  
    }
    cout<<"NULL";
}
//Traverses the list
//Print each node's data 


int main() {
    Node*head=nullptr;

    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);

    printList(head);

    return 0;
}