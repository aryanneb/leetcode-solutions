/*

Solved on October 25th, 2023
Runtime of 2ms -- Better than 93.03% of C++ users
Memory Allocation of 7.66MB -- Better than 55.17% of C++ users

*/

class Solution {
public:
    bool isPalindrome(string s) {
        int back = s.size();
        for(int i = 0; i < s.size(); i++)
        {
            back--;
            while(!isalnum(s[i]))
            {
                i++;
                if(i >= back) return true;
            }
            while(!isalnum(s[back]))
            {
                back--;
                if(back <= i) return true;
            }
            if(tolower(s[i]) != tolower(s[back])) return false;
        }
        return true;
    }
};