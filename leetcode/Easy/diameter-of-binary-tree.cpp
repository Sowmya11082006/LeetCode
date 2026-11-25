// Problem: Diameter of Binary Tree
// Platform: leetcode
// Contest: Easy
// Rating/Difficulty: Easy
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/diameter-of-binary-tree/submissions/2202915617/
// Solved on: 2026-11-25T01:39:56.077Z

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
int ans = 0;
    int height(TreeNode* p){
        if(p==NULL) return 0;
        int leftHeight = height(p->left);
        int rightHeight = height(p->right);

        ans = max(ans , leftHeight + rightHeight);
        return max(leftHeight , rightHeight)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
         height(root);
        return ans;
    }
};

//tc(0(n))