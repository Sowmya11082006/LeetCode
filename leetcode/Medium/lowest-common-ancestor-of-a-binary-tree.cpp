// Problem: Lowest Common Ancestor of a Binary Tree
// Platform: leetcode
// Contest: Medium
// Rating/Difficulty: Medium
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
// Solved on: 2026-11-27T04:14:44.752Z

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        if(root->val == p->val || root->val == q->val ){
            return root;
        }

        TreeNode* leftLCA = lowestCommonAncestor(root->left,p,q);
        TreeNode* rightLCA = 
        lowestCommonAncestor(root->right,p,q);

        if(leftLCA && rightLCA){
            return root;
        }else if(leftLCA == NULL){
            return rightLCA;
        }else{
            return leftLCA;
        }
        
    }
};