/*

Solved on Novmeber 25th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 6.25MB -- Better than 94.27% of C++ users

*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        unsigned int compare = 1;
        int count = 0;

        for(int i = 0; i < 32; i++)
        {
            if((compare & n) != 0)
                count++;
            
            compare = compare << 1;

        }

        return count;
    }
};