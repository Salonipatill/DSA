//here struct members are public by default, so no need to write public
struct Node{
    int data;
    Node* next;

    Node(int x){
    data=x;
    next=nullptr;
    }

};
//This structure represents a node of a singly linked list, containing data and a pointer to the next node, initialized using a constructor.
