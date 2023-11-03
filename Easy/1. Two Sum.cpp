/*

Solved on October 30th, 2023
Runtime of 7ms -- Better than 90.17% of C++ users
Memory Allocation of 11.11MB -- Better than 38.37% of C++ users

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++)
        {
            if(map.find(target - nums[i]) == map.end() && map.find(nums[i]) == map.end())
                map[nums[i]] =  i;
            
            else if(map.find(target - nums[i]) != map.end())
            {
                nums = {i,map[target - nums[i]]};
                i = nums.size();

            }   
        }
        return nums;
    }
};