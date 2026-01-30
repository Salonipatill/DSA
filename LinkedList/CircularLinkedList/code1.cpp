#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* head){
    while (head != nullptr){
        cout<<head->data<<"<->";
        head = head->next;
    }
     
}


int main() {
    Node* head = new Node{1};
    Node* second = new Node{12};
    Node* third = new Node{3};

    head->next = second;
   

    second->next = third;

     third->next = head;
    

     Node* temp = head;
     
      do{
        cout << temp->data << "<->";
        temp = temp->next;
     }while (temp != head);

     cout << "NULL";

     return 0;
}