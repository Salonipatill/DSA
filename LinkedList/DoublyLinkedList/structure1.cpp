// A doubly linked list is a linear data structure in which each node contains:
// data 
// a pointer to the next node
// a pointer to the previous node


//Node Structure

class Node{
public:
     int data;
     Node* prev;
     Node* next;

     Node(int x){
        data = x;
        prev = nullptr;
        next = nullptr;
     }

};