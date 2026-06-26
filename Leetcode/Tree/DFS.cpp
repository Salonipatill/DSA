#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void DFS(Node*root){
    if(root == NULL)return;

    cout<<root->data<<",";

    DFS(root->left);
    DFS(root->right);
}

int main(){
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(5);

    root->left->left = new Node(3);
    root->right->right = new Node(6);

    root->right->left = new Node(4.7);
    DFS(root);
    return 0;
}