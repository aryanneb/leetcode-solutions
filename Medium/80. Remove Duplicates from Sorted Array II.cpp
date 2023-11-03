/*

Solved on October 16th, 2023
Runtime of 2ms -- Better than 82.54% of C++ users
Memory Allocation of 11.10MB -- Better than 69.87% of C++ users

*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        bool double_checker = false;
        
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
                if(double_checker)
                {
                    nums.erase(nums.begin() + i);
                    i--;
                }
                else
                {
                    double_checker = true;
                }
            }
            else
            {
                double_checker = false;
            }
        }


        return nums.size();
    }
};