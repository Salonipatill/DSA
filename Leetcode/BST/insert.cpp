#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*left;
        Node*right;

        Node(int val){
            data = val;
            left = nullptr;
            right = nullptr;
        }
};


Node*insert(Node*root , int val){
    if(root == nullptr){
        return new Node(val);
    }

    if(val<root->data){
        root->left = insert(root->left,val);
    }else if(val>root->data){
        root->right = insert(root->right, val);
    }

    return root;
}


void inorder(Node*root){
    if(root == nullptr)return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){
    Node*root = nullptr;

    root = insert(root,50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);

    cout<<"Inorder Traversal of BST:";

    inorder(root);


    return 0;
}