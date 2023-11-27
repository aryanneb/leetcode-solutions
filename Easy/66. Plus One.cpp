/*

Solved on Novmeber 21st, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 8.99MB -- Better than 96.24% of C++ users

*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i > - 1; i--)
        {
            if(digits[i] != 9)
            {
                digits[i]++;
                return digits;
            }
        
            else
                digits[i] = 0;
        }
        
        digits.insert(digits.begin(), 1);
        return digits;
    }
};