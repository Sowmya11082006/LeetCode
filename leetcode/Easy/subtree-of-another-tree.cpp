// Problem: Subtree of Another Tree
// Platform: leetcode
// Contest: Easy
// Rating/Difficulty: Easy
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/subtree-of-another-tree/submissions/2202268449/
// Solved on: 2026-11-24T02:21:08.816Z

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
    bool isIdentical(TreeNode *p,TreeNode *q){
        if(p == NULL || q == NULL) return p == q;
        bool isLeftSame = isIdentical(p->left,q->left);
        bool isRightSame = isIdentical(p->right,q->right);
        return (isLeftSame && isRightSame && p->val == q->val);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       if(root == NULL || subRoot == NULL) return root == subRoot;
       if(root->val == subRoot->val && isIdentical(root,subRoot)){
        return true;
       } 
       return (isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot));
    }
};