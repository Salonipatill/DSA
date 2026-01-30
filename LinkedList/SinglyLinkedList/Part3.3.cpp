#include<iostream>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
};

int main() {
    Node* head = new Node();
    head->data = 10;
    head->next = nullptr;

    Node* second = new Node();
    second->data = 20;
    second->next = nullptr;
    head->next = second;

    Node* third = new Node();
    third->data = 30;
    third->next = nullptr;
    second->next = third;

    Node* temp = head;
    while (temp != nullptr){
        cout << temp->data<<"->";
        temp = temp->next;

    }
    cout<<"NULL";

    return 0;
}