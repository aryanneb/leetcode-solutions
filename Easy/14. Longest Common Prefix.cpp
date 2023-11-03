/*

Solved on October 23rd, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 9.47MB -- Better than 75.39% of C++ users

*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count = 0;

        for(int j = 0; j < strs.size(); j++)
        {
            if(count > strs[j].size() - 1 || count > strs[0].size() - 1 || strs[j].size() == 0)
            {
                break;
            }
            else if(strs[0][count] != strs[j][count]) 
            {
                j = strs.size();
                break;
            } 
            else if(j == strs.size() - 1)
            {
                count++;
                j = 0;
            }
        }

        strs[0] = strs[0].substr(0,count);
        
        return strs[0];
    }
};