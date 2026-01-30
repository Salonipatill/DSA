//here struct members are public by default, so no need to write public
struct Node{
    int data;
    Node* next;

    Node(int x){
    data=x;
    next=nullptr;
    }

};
