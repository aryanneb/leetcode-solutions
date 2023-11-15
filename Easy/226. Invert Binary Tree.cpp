/*

Solved on November 10th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 9.83MB -- Better than 98.14% of C++ users

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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return root;

        invertTree(root->right);
        invertTree(root->left);

        swap(root->right, root->left);
        return root;
    }
};
