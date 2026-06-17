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

int countleafnode(Node* root){
    if(root == NULL) return 0;

    if(root->left== NULL&& root->right==NULL)
    return 1;

    return countleafnode(root->left) + countleafnode(root->right);

}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->right->right=new Node(50);
    root->left->left->left = new Node(60);

    cout<< "Total Leaf Nodes:"<<countleafnode(root);

    return 0;
}
//select word and ctrl +alt +dowwnarrow to
//Change the same position in multiple lines