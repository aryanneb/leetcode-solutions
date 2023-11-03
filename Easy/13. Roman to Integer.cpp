/*

Solved on October 21st, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 6.34MB -- Better than 85.84% of C++ users

*/

class Solution {
public:
    int romanToInt(string s) {
        int count = 0;
        int size = s.size();
        for(int i = 0; i < size; i++)
        {        
            if(s[i] == 'I')
            {
                if(i < size - 1)
                {
                    if(s[i+1] == 'V')
                    {
                        count += 4;
                        i++;
                        continue;
                    }
                    if(s[i + 1] == 'X')
                    {
                        count += 9;
                        i++;
                        continue;
                    }
                }
                count++;
                continue;
            }
            if(s[i] == 'V')
            {
                count += 5;
                continue;
            }

            if(s[i] == 'X')
            {
                if(i < size - 1)
                {
                    if(s[i+1] == 'L')
                    {
                        count += 40;
                        i++;
                        continue;
                    }
                    if(s[i + 1] == 'C')
                    {
                        count += 90;
                        i++;
                        continue;
                    }
                }
                count += 10;
                continue;
            }

            if(s[i] == 'L')
            {
                count += 50;
                continue;
            }

            if(s[i] == 'C')
            {
                if(i < size - 1)
                {
                    if(s[i+1] == 'D')
                    {
                        count += 400;
                        i++;
                        continue;
                    }
                    if(s[i + 1] == 'M')
                    {
                        count += 900;
                        i++;
                        continue;
                    }
                }
                count += 100;
                continue;
            }

            if(s[i] == 'D')
            {
                count += 500;
                continue;
            }

            if(s[i] == 'M')
            {
                count += 1000;
                continue;
            }
        }
        return count;  
    }
};