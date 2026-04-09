#include<iostream>
#include<queue>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

struct compare{
    bool operator()(int a, int b){
        return a > b;
    }

    bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val;

    }

    
};

int main(){

    priority_queue<int, vector<int>, compare>pqInt;
    pqInt.push(5);
    pqInt.push(1);
    pqInt.push(3);

    cout<<"Integer min heap output:";
    while(!pqInt.empty()){
        cout<<pqInt.top()<<" ";
        pqInt.pop();
    }
    cout<<endl;

    ListNode* n1 = new ListNode(4);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(7);

    priority_queue<ListNode*, vector<ListNode*>, compare>pqNode;
    pqNode.push(n1);
    pqNode.push(n2);
    pqNode.push(n3);
 

    cout<<"Linked list node min heap output:";
    while(!pqNode.empty()){
        cout<<pqNode.top()->val<<" ";
        pqNode.pop();
    }
    cout<<endl;
    return 0;

}