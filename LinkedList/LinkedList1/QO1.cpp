// Hare and Tortoise Algorithm - O(n) Time and O(1) Space
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*next;

        Node(int x){
            this->data=x;
            this->next=nullptr;

        }
};


//find middle using fast and slow pointer
int getmiddle(Node*head){
    Node*slow=head;
    Node*fast=head;

    //fast moves 2 steps, slow moves 1 step
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}


int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next = new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    head->next->next->next->next->next->next=new Node(70);

    cout<<"Middle element:"<<getmiddle(head);
    return 0;
}
//One pointer moving 1 step
// Another pointer moving 2 steps
// Both inside one loop
// Time complexity is always O(n).
// Because they both traverse the linked list linearly