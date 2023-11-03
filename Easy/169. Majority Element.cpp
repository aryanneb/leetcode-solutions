/*

Solved on October 17th, 2023
Runtime of 18ms -- Better than 22.67% of C++ users
Memory Allocation of 19.90MB -- Better than 73.77% of C++ users

*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count;
        int val;
        for(int i = 0; i < nums.size(); i++)
        {
            count = 0;
            if(i > 1)
            {
                if(nums[i] == nums[i-1] || nums[i] == nums[i-2])
                {
                    continue;
                }
            }
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    count++;
                }
                
                if(count > floor(nums.size()/2))
                {
                    val = nums[i];
                    return val;
                }
            }
        }
        return 0;
    }
};