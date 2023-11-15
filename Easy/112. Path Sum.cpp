/*

Solved on November 12th, 2023
Runtime of 3ms -- Better than 96.39% of C++ users
Memory Allocation of 21.60MB -- Better than 73.43% of C++ users

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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfsearch(root, targetSum, 0);
    }

    bool dfsearch(TreeNode* root, int targetSum, int previous_value)
    {
        if(root == NULL)    return false;
        int current_value = root->val + previous_value;
        if(current_value == targetSum && root->left == NULL && root->right == NULL) return true;
        return dfsearch(root->left, targetSum, current_value) || dfsearch(root->right, targetSum, current_value);
    }
};