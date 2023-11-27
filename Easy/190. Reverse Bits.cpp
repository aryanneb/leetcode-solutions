/*

Solved on Novmeber 24th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 6.26MB -- Better than 93.95% of C++ users

*/
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned int output = 0;
        unsigned int temp_num = 0;

        for(int i = 0; i < 32; i++)
        {
            temp_num = n << 31 - i;
            temp_num = temp_num >> 31;
            temp_num = temp_num << 31-i;
            output += temp_num;
        }
        
        return output;
    }
};