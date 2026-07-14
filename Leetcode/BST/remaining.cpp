/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {

        if(root == NULL)
            return true;

        queue<pair<TreeNode*, pair<long long, long long>>> q;

        q.push({root, {LLONG_MIN, LLONG_MAX}});

        while(!q.empty()){

            TreeNode* node = q.front().first;
            long long low = q.front().second.first;
            long long high = q.front().second.second;
            q.pop();

            if(node->val <= low || node->val >= high)
                return false;

            if(node->left != NULL){
                q.push({node->left, {low, node->val}});
            }

            if(node->right != NULL){
                q.push({node->right, {node->val, high}});
            }
        }

        return true;
    }
};