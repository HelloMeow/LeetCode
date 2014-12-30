/*
Given a binary tree, return the preorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},
   1
    \
     2
    /
   3
return [1,2,3].

Note: Recursive solution is trivial, could you do it iteratively?
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
 
// Recursive solution
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> v;
        if (!root) return v;
        v.push_back(root->val);
        return mergeVector(mergeVector(v, preorderTraversal(root->left)), preorderTraversal(root->right));
    }
    
    vector<int>& mergeVector(vector<int>& v0, vector<int> v1) {
        for(vector<int>::iterator iter = v1.begin(); iter != v1.end(); iter++) {
            v0.push_back(*iter);
        }
        return v0;
    }
};

// Iterative Solution
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> v;
        stack<TreeNode*> s;
        
        if (root) s.push(root);
        while(!s.empty()) {
            TreeNode* n = s.top();
            s.pop();
            v.push_back(n->val);
            if (n->right) s.push(n->right);
            if (n->left) s.push(n->left);
        }
        
        return v;
    }
};