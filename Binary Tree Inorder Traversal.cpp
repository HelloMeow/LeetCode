/*
Given a binary tree, return the inorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},
   1
    \
     2
    /
   3
return [1,3,2].
*/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> v;
        return recursivelyInorderTraversal(root, v);
    }
    
    vector<int> recursivelyInorderTraversal(TreeNode* root, vector<int>& v) 
    {
        if (!root) return v;
        if (root->left) v = recursivelyInorderTraversal(root->left, v);
        v.push_back(root->val);
        if (root->right) v = recursivelyInorderTraversal(root->right, v);
        return v;
    }
};