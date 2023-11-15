/*

Solved on November 11th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 16.68MB -- Better than 84.70% of C++ users

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
    bool dfsearch(TreeNode* left_node, TreeNode* right_node){
        if(left_node == NULL && right_node == NULL)   return true;
        if((left_node == NULL) || (right_node == NULL))   return false;

        return dfsearch(left_node->left, right_node->right) && dfsearch(left_node->right, right_node->left) && (left_node->val == right_node->val);
    }

    bool isSymmetric(TreeNode* root) {
        return dfsearch(root->left, root->right);
    }

};