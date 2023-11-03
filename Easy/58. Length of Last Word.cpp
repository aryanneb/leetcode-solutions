/*

Solved on October 23rd, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 6.83MB -- Better than 44.10% of C++ users

*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] == ' ' && count == 0) continue;
            else if(s[i] == ' ' && count != 0) return count;
            else count++;
        }
        return count;
    }
};