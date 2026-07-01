#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int findMax(Node*root){
    if(root == NULL)
        return 0;

    queue<Node*>q;

    q.push(root);

    int maximum = root->data;

    while(!q.empty()){
        Node*current = q.front();

        q.pop();

        maximum = max(maximum, current->data);

        if(current->left!=NULL)
        q.push(current->left);

        if(current->right!=NULL)
        q.push(current->right);


    }

    return maximum;

}

int main(){
    Node*root = new Node(10);

    root->left = new Node(40);
    root->right = new Node(90);

    root->left->left = new Node(50);
    root->right->right = new Node(25);

    cout<<findMax(root);

    return 0;
}