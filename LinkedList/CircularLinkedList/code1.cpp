#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* head){
     if (head==nullptr) return;
//return; means exit the function immediately
    Node* temp = head;
    do{
        cout << temp->data << "<->";
        temp = temp->next;
     }while (temp != head);
     cout<< "(back to head)";  
}

int main() {
    Node* head = new Node{1, nullptr};
    Node* second = new Node{12, nullptr};
    Node* third = new Node{3, nullptr};

    head->next = second;
    second->next = third;
    third->next = head;

    printList(head);   
     return 0;
}