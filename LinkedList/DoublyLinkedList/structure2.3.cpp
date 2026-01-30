#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void reverseList(Node*& head){
    Node* temp = nullptr;
    Node* curr = head;

    while (curr != nullptr){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        curr = curr->prev;
    }

    if(temp != nullptr){
        head = temp->prev;
    }
}

void printList(Node* head){
    while (head != nullptr){
        cout<<head->data<<"<->";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* first = new Node{10, nullptr, nullptr};
    Node* second = new Node{20, nullptr, nullptr};
    Node* third = new Node{30, nullptr, nullptr};

    first->next = second = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    cout << "original list: ";
    printList(first);

    reverseList(first);

    cout << "Reversed list: ";
    printList(first);

    return 0;
}



// temp = curr->prev;     Store the address of the previous node of curr into temp.
//void reverseList(Node*& head){
//head is the starting pointer of the linked list
//& = permission to change the original address
//Node*& head allows the function to modify the original head pointer of the linked list.
//    * = pointer, & = allow change
// & (reference symbol)   It means pass by reference
//With &:  The real head changes 