#include<iostream>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
        
    }
};

int heightnode(node*root){

    if(root==NULL)return 0;

    return 1 + max(heightnode(root->left) , heightnode(root->right));
}

int main(){

    node*root = new node(10);
     root->left = new node(20);
     root->left->left = new node(30);
     root->right = new node(50);

     cout<<"maximum height"<<heightnode(root);

    return 0;

}