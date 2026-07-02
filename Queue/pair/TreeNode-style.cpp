#include<iostream>
#include<queue>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val = x;
        left = right = NULL;
    }
};
int main(){
    TreeNode* a = new TreeNode(10);
    TreeNode* b = new TreeNode(30);
    TreeNode* c = new TreeNode(40);
    TreeNode* d = new TreeNode(50);
    
    
    queue<pair<TreeNode*, TreeNode*>>q;

    q.push({a,b});
    q.push({c,d});


    while(!q.empty()){
        auto p = q.front();
        q.pop();
        cout<<p.first->val<<" "<<p.second->val<<endl;
    }

    return 0;
}