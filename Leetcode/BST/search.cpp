#include<iostream>
using namespace std;

struct Node{
    int data
    Node*left;
    Node*right;

    Node(int value){
        data = value;
        left = NULL;
        right =NULL;
    }
};

bool search(Node*root, int key){
    if(root == NULL)return false;

    if(root->data == key)return true;

    if(key<root->data)return search(root->left,key);

    if(key>root->data)return search(root->right,key);

}

int main(){
    Node*root = new Node(50);

    root->left = new Node(30);
    root->right = new Node(70);

    root->left->left = new Node(20);
    root->left->right = new Node(40);

    int key = 40;

    if(search(root,key))
    cout<<key<<"Found";
    else
    cout<<key<<"Not Found";

    return 0;
}