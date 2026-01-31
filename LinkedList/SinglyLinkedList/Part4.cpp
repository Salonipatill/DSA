//Using Default Constructor + Parameterized Constructor
class Node{
    public:
    int data;
    Node* next;

    Node(){
        data=0;
        next=nullptr;

    }
    //Called when no value is passed


    Node(int x){
        data=x;
        next=nullptr;
    }
    //Called when a value is passed
};