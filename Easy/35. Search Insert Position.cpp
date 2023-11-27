/*

Solved on Novmeber 26th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 9.92MB -- Better than 68.37% of C++ users

*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target < nums[0])    return 0;
        if(target > nums[nums.size() - 1])  return nums.size();

        int start = 0;
        int end = nums.size() - 1;
        int tracker = (start + end)/ 2;
        while(end > start)
        {
            if(target == nums[tracker])
                return tracker;

            else if(target < nums[tracker])
                end = tracker;
        
            else
                start = tracker + 1;

            tracker = (start + end)/2;
        }
        
        return tracker;
    }
};