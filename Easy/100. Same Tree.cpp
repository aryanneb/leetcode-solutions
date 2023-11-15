/*

Solved on November 9th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 10.27MB -- Better than 93.80% of C++ users

*/

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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p == NULL && q == NULL)
            return true;
        
        if(p == NULL || q == NULL || p->val != q->val)
            return false;
        
        auto left = isSameTree(p->left, q->left);
        auto right = isSameTree(p->right, q->right);
        
        return left && right;
    }
};