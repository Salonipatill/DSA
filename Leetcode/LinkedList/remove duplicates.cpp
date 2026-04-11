#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    class Solution{
        public:
        ListNode* deleteDuplicates(ListNode* head){
            if(head == nullptr) return head;

            ListNode* current = head;

            while(current != nullptr && current->next != nullptr){
                if(current->val == current->next->val){
                    current->next = current->next->next;
                }else{
                    current = current->next;
                }
            }
        
    return head;
}
};

void insert(ListNode*& head, int val){
    if(head == nullptr){
        head = new ListNode(val);
        return ;
    }
    ListNode* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new ListNode(val);
}

void printList(ListNode* head){
    while (head != nullptr){
        cout<< head->val;
        if(head->next != nullptr) cout<<"->";
        head = head->next;
    }
    cout<<endl;
}

int main() {
    ListNode* head = nullptr;

    insert(head, 1);
    insert(head, 1);
    insert(head, 2);

    cout<<"original list";
    printList(head);

    Solution sol;
    head = sol.deleteDuplicates(head);

    cout<<"After removing duplicates:";
    printList(head);

    return 0;
}
