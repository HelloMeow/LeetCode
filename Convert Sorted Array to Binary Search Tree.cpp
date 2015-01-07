/*
Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        return makeBST(num.begin(), num.end());
    }
    
    TreeNode* makeBST(vector<int>::iterator start, vector<int>::iterator end) {
        if (start >= end) return NULL;
        vector<int>::iterator mid = start + (end - start)/2;
        TreeNode* n = new TreeNode(*mid);
        n->left = makeBST(start, mid);
        n->right = makeBST(mid+1, end);
        return n;
    }
};