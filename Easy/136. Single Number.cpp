/*

Solved on Novmeber 26th, 2023
Runtime of 7ms -- Better than 98.07% of C++ users
Memory Allocation of 17.35MB -- Better than 31.57% of C++ users

*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        auto value = 0;
    
        for(auto num: nums)
            value = value^num;

        return value;

    }
};