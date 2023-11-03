/*

Solved on October 22nd, 2023
Runtime of 21ms -- Better than 66.42% of C++ users
Memory Allocation of 26.60MB -- Better than 5.27% of C++ users

*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> new_nums;
        int size = nums.size();
        k = k%size;
        for(int i = 0; i < size; i++)
        {
            new_nums.push_back(nums[(size - k + i)%size]);
        }
        nums = new_nums;
    }
};
