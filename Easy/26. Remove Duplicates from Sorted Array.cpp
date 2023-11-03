/*

Solved on October 16th, 2023
Runtime of 412ms -- Better than 6.15% of C++ users
Memory Allocation of 18.69MB -- Better than 73.50% of C++ users

*/



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i;
        for(i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }

        return i;
    }
};