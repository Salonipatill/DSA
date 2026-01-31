#include<iostream>
using namespace std;

struct Node{
   int data;
   Node* prev;
   Node* next;
};

void printList(Node* head){
    if ( head == nullptr) return;

    Node* temp = head;
   do{
        cout << temp->data << "<->" ;
        temp = temp->next;
    } while(temp!= head);
    cout << endl;
}

void reverseList(Node*& head){
    if (head == nullptr) return;

    Node* curr = head;
    Node* temp = nullptr;

do{
      temp=curr->prev;
      curr->prev = curr->next;
      curr->next = temp;

      curr = curr->prev;
}while(curr != head);

head = head->next;
}

int main(){

    Node* head = new Node{2, nullptr, nullptr};
    Node* first = new Node{3, nullptr, nullptr};
    Node* second = new Node{4, nullptr, nullptr};

    head->prev = second;
    head->next = first;
    first->prev = head;
    first->next = second;
    second->prev = first;
    second->next = head;

    printList(head);
    reverseList(head);
    printList(head);

    return 0;
}