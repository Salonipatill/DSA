A tree is a way to store data in a hierarchical structure
Types of Trees:-
Binary Tree:-
Each node has at most 2 children
A Tree is a non-linear hierarchical data structure.


How Tree Looks in code

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};
or 
Each node stores :
value
pointer to left child 
pointer to right child

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
Tree Traversal
Traversal = visiting all nodes.


1. Inorder
Left->Root->right

2. Preorder
Root->Left->right

3. Postorder
Left->Right->Root


Why Trees Are Used
File Systems
Databases
Searching(Binary Search Tree)
Recursion problems
Interviews

Trees are solved using 
Recursion
Stack

```text
Time Complexity
```

Think:

How many nodes are there? → n
Is each node visited once? → Yes

Answer:

✅ O(n)





