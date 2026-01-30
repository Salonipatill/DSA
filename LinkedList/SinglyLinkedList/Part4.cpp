//Using Default Constructor + Parameterized Constructor
class Node{
    public:
    int data;
    Node* next;

    Node(){
        data=0;
        next=nullptr;

    }

    Node(int x){
        data=x;
        next=nullptr;
    }
};