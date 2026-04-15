#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution{
public:
    ListNode* rotateRight(ListNode* head, int k){
        if(!head || !head->next || k == 0)
            return head;

        ListNode* temp = head;
        int n = 1;

        // Find length
        while(temp->next){
            temp = temp->next;
            n++;
        }

        // Make circular
        temp->next = head;

        // Reduce k
        k = k % n;
        int steps = n - k;

        // Find new tail
        ListNode* newtail = head;
        for(int i = 1; i < steps; i++){
            newtail = newtail->next;
        }

        // Break the cycle
        ListNode* newhead = newtail->next;
        newtail->next = NULL;

        return newhead;
    }
};

void printList(ListNode* head){
    while(head){
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(){

    // Correct list: 1 -> 2 -> 3 -> 4
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    int k = 2;

    Solution obj;
    head = obj.rotateRight(head, k);

    printList(head);

    return 0;
}