/*

Solved on November 1st, 2023
Runtime of 123ms -- Better than 81.11% of C++ users
Memory Allocation of 77.79MB -- Better than 38.52% of C++ users

*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;

        for(int i = 0; i < nums.size(); i++)
        {
            if(map.count(nums[i]))
            {
                if(abs(i - map[nums[i]] <= k))
                    return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};