/*

Solved on November 13th, 2023
Runtime of 22ms -- Better than 78.81% of C++ users
Memory Allocation of 31.15MB -- Better than 49.11% of C++ users

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
    int countNodes(TreeNode* root) {
        
        if(root == NULL)
            return 0;

        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};