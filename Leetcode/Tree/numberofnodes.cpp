#include<iostream>
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


int countNodes(Node* root){
    if(root == NULL) return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);

    //The function countNodes() is calling itself inside its own definition.
//That is exactly what recursion means.
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    cout<< "Total Nodes:"<<countNodes(root);

    return 0;
}