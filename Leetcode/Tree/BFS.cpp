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


void BFS(Node* root){

    if(root == NULL)
         return;


    queue<Node*>q;

    q.push(root);


    while(!q.empty()){

        Node*current = q.front();

        q.pop();

        cout<<current->data<<",";

        if(current->left!= NULL){
            q.push(current->left);
        }

        if(current->right!=NULL){
            q.push(current->right);
        }


    }

}


int main(){

    Node*root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);

    root->left->left = new Node(40);
    root->right->right = new Node(50);

    BFS(root);

    return 0;
}