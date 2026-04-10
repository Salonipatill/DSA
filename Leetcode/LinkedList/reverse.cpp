#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        val = x;
        next = NULL;
    }
};

void insertAtEnd(ListNode*& head, int val){
    ListNode* newNode = new ListNode(val);

    if(head == NULL){
        head = newNode;
        return;

    }

    ListNode* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;

}

ListNode* reverseList(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(curr != NULL){
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;

}

void printList(ListNode* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

int  main(){
    ListNode* head = NULL;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head,5);

    cout<<"original list:";
    printList(head);
    
    head = reverseList(head);
    
    cout<<"Reversed list:";
    printList(head);

    return 0;

}