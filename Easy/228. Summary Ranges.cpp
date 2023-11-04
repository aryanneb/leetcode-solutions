/*

Solved on November 4th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 7.17MB -- Better than 76.07% of C++ users

*/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        if(nums.size() == 0) 
            return output; 
        int range = nums[0];

        for(int i = 0; i < nums.size(); i++)
        {
            if(i == nums.size() - 1){}
            else if(nums[i] != nums[i+1] - 1){}
            else continue;

            if(range == nums[i])
                output.push_back(to_string(range));
            else
                output.push_back(to_string(range) + "->" + to_string(nums[i]));


            if(i < nums.size() - 1)
                range = nums[i + 1];
            
        }
        return output;
    }
};
