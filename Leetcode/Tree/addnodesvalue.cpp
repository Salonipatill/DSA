#include<iostream>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;

    //create constructor
    node(int val){
        data = val;
        left = right = NULL;
    }
};

int sumNode(node*root){
    if(root==NULL)
    return 0;

    return root->data + sumNode(root->right) + sumNode(root->left);

}


int main(){
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(49);
    
    cout<< "Total Nodes:"<<sumNode(root);

    return 0;
}



 
