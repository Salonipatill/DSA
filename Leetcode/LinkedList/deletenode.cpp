#include<iostream>
using namespace std;

struct ListNode{
    int val;//data
    ListNode *next;//pointer
    //Default constructor
    ListNode() : val(0), next(nullptr) {}
   //Constructor with value
    ListNode(int x) : val(x), next(nullptr) {}
    //Constructor with value and next pointer
    ListNode(int x, ListNode *next) : val(x), next(next) {}

};

class Solution{
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n){
            ListNode* dummy = new ListNode(0,head);
            ListNode*fast = dummy;
            ListNode*slow = dummy;

            for(int i =0; i<n; i++){
                fast = fast->next;

            }
            while(fast->next!=nullptr){
                fast= fast->next;
                slow=slow->next;
            }

            ListNode*deletenode = slow->next;
            delete deletenode;

            return dummy->next;
        }
};

void printList(ListNode* head){
    while(head != nullptr){
        cout<<head->val<<" ";
        head= head->next;
    }
    cout<<endl;

}

ListNode* createList(int arr[], int n){
    if(n==0)return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for(int i =1; i<n; i++){
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n=2;

    ListNode* head = createList(arr,5);
    Solution sol;
    head = sol.removeNthFromEnd(head, n);

    printList(head);

    return 0;
}
