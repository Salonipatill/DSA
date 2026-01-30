#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    Node* first = new Node{1, nullptr, nullptr};
    Node* second = new Node{2, nullptr, nullptr};
    Node* third = new Node{3, nullptr, nullptr};

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

     Node* temp = first;
     
     while (temp != nullptr) {
        cout << temp->data << "<->";
        temp = temp->next;
     }
     cout << "NULL";

     return 0;
}






//A node is an encapsulated unit that stores data and the addresses (links) of other nodes.
//A node does NOT store its own address
//The :: operator is used to tell the computer exactly where to find something.
//The -> operator is used to access a member (data or function) of an object through a pointer.
// first->next = second;  The next node after the first node is the second node.
//second->prev = first;   The previous node before the second node is the first node.
//A while loop is a control structure that repeats a block of code as long as a given condition is true.
//How new works internally
//new asks the operating system:

//I need some memory to store a Node.
//The OS (heap manager) finds free space in heap memory
//It reserves enough bytes to store a Node
//That reserved memory has a memory address
//Example: 0x7fa3c210
//Object initialization
//Node{1, nullptr, nullptr} fills the memory:
//data = 1  prev = nullptr   next = nullptr
//new returns the address of that memory
//The address is stored in the pointer first
