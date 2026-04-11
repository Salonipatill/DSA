//ListNode*head means head stores the address of a node.
//it points to the first node of the linked list.

//& reference 
// int & x = y
// x becomes another name for y
//Any change to x affect y .
#include<iostream>
#include<unordered_set>
using namespace std;

struct ListNode{
     int val;
     ListNode *next;
     ListNode(int x) : val(x) , next(nullptr) {}

};

class Solution{
    public:
       ListNode* deleteDuplicatesUnsorted(ListNode* head){
        if(! head) return head;

        unordered_set<int> seen;
        ListNode* current = head;
        ListNode* prev = nullptr;

        while(current){
            if(seen.count(current->val)){
              prev->next = current->next;
              delete current;
              current = prev->next;  
            }else{
                seen.insert(current->val);
                prev = current;
                current = current->next;

            }
        }
        return head;
       }
};

void insert(ListNode*& head, int val){
    if(!head){
        head = new ListNode(val);
        return ;

    }

    ListNode* temp = head;
    while(temp->next) temp = temp->next;
    temp->next = new ListNode(val);

}

void printList(ListNode* head){
    while(head)
    
}