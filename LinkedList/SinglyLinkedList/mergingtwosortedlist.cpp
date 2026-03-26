//Problem
// You are building a chat app (like WhatsApp).
// You have:
// Messages from User A (sorted by time)
// Messages from User B (sorted by time)
// You need to merge them into one conversation timeline

#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}

};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
    ListNode* dummy = new ListNode(-1);
    ListNode* current = dummy;

    while(list1 && list2){
        if(list1->val < list2->val){
            current->next = list1;
            list1 = list1->next;
        }else{
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    current->next = (list1) ? list1 : list2;

    return dummy->next;

}

ListNode* insert(ListNode* head, int val){
    if(!head) return new ListNode(val);
    ListNode* temp = head;
    while(temp->next) temp = temp->next;
    temp->next = new ListNode(val);
    return head;

}

void print(ListNode* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;

}

int main(){
    ListNode* userA = NULL;
    ListNode* userB = NULL;

    //User A messages(timestamps)
    userA = insert(userA, 1);
    userA = insert(userA, 4);
    userA = insert(userA, 7);

    //UserB messages
    userB = insert(userB, 2);
    userB = insert(userB, 3);
    userB = insert(userB, 6);

    ListNode* chat = mergeTwoLists(userA, userB);

    cout<<"Merged chat Timeline:";
    print(chat);

    return 0;

}