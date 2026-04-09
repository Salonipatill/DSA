#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int main(){

    Node* root = new Node();
    Node* n1 = new Node();
    Node* n2 = new Node();

    root->data = 1;
    n1->data = 2;
    n2->data = 3;

    root->left = n1;
    root->right = n2;

    n1->left = NULL;
    n1->right = NULL;

    n2->left = NULL;
    n2->right = NULL;

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    return 0;
}