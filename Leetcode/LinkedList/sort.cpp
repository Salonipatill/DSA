#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr){}

    ListNode(int x) : val(x) , next(nullptr) {}

    ListNode(int x, ListNode * next) : val(x), next(next) {}

};


class Solution{
    public:
        ListNode* rotate(ListNode*head){
             if (!head) return nullptr;
            ListNode* dummy = new ListNode(0);
            ListNode*curr=head;

            while(curr){

                ListNode*nextNode =curr->next;

                ListNode*prev = dummy;

                while(prev->next && prev->next->val < curr->val){
                    prev = prev->next;
                }

                curr->next = prev->next;
                prev->next =curr;


                curr = nextNode;



            }
            return dummy->next;

        }
};

ListNode* createList(int arr[], int n){
    if(n==0)return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for(int i = 1; i<n; i++){
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode* curr){
    while(curr != nullptr){
        cout<<curr->val<<" ";
        curr = curr->next;
    }
    cout<<endl;
}


int main(){

    int arr[] = {1,2,9,4,7};
    
    ListNode* head = createList(arr,5);

    Solution obj;
     
   
    ListNode* curr=obj.rotate(head);
    printList(curr);

return 0;
}