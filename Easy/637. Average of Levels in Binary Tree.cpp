/*

Solved on Novmeber 17th, 2023
Runtime of 7ms -- Better than 91.92% of C++ users
Memory Allocation of 22.78MB -- Better than 76.13% of C++ users

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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> nodeQueue;
        vector<double> average;
        nodeQueue.emplace(root);

        while(!nodeQueue.empty())
        {
            double queueLength = nodeQueue.size();
            double sum = 0;
            for(int i = 0; i < queueLength; i++)
            {
                sum += nodeQueue.front()->val;

                if(nodeQueue.front()->left != NULL)
                    nodeQueue.emplace(nodeQueue.front()->left);

                if(nodeQueue.front()->right != NULL)
                    nodeQueue.emplace(nodeQueue.front()->right);  
                
                nodeQueue.pop();
            }

            average.push_back(sum/queueLength);
        }

        return average;
    }
};