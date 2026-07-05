#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left=NULL;
        right =NULL;
    }
};

int main(){
    Node*root = new Node(10);

    cout<<root->data;

    return 0;
}