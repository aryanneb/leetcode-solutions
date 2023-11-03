/*

Solved on October 27th, 2023
Runtime of 6ms -- Better than 98.17% of C++ users
Memory Allocation of 9.02MB -- Better than 66.28% of C++ users

*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int alphie[26] = {0};

        for(char ch : magazine)
            alphie[ch - 'a']++;

        for(char ch: ransomNote)
            if(alphie[ch - 'a']-- <= 0)
                return false;
        
        return true;
    }
};