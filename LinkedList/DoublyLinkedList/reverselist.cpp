#include <iostream>
using namespace std;

class Node{
public :
    int data;
    Node *next, *prev;

    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;

    }
};

Node* reverse(Node *curr){

    if(curr==nullptr)
      return nullptr;

    swap(curr->prev, curr->next);

    if(curr->prev==nullptr)
       return curr;

    return reverse(curr->prev);
}


void printList(Node *node){
    while(node != nullptr){
        cout << node -> data;
        if(node->next != nullptr){
            cout << " <->";

        }
        node = node->next;


    }
}

int main() {
    Node *head = new Node(1);
    Node *first = new Node(2);
    Node *second = new Node(3);

    head->prev = nullptr;
    head->next = first;
 
    first->prev = head;
    first->next = second;
    
    second->prev = first;
    second->next = nullptr; 

    head = reverse(head);
    printList(head);

    return 0;
}


 

 

    
