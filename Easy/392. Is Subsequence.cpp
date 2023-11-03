/*

Solved on October 26th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 6.65MB -- Better than 76.23% of C++ users

*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sz = (int) s.size();
        int tz = (int) t.size();
        if(sz > tz)
            return false;

        for(int i = 0; i < tz; i++)
        {
            if(sz == 0)
                return true;

            if(t[i] == s[0])
            {
                s.erase(s.begin());
                sz--;
            }
        }

        if(sz == 0) return true;

        return false;

    }
};