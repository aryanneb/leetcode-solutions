/*

Solved on October 31st, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 6.72MB -- Better than 17.89% of C++ users

*/

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> map;
        vector<int> digits;

        while(true)
        {
            if(n == 1)
                return true;
            int temp_num = n;
            fillVector(temp_num, digits);
            temp_num = 0;
            for(auto number : digits)
            {
                number = number*number;
                temp_num += number;
            }
            emptyVector(temp_num, digits);
            if(map.find(n) == map.end())
                map[n] = temp_num;
            else
                return false;
            n = temp_num;
        }

    return true;
    }

    void fillVector(int number, vector<int>& digits)
    {
        while(number)
        {
            digits.push_back(number%10);
            number /= 10;
        }
    }

    void emptyVector(int number, vector<int>& digits)
    {
        for(int i = 0; i < digits.size(); i++)
        {
            if(i == 0)  number += digits[i];
            else        number += digits[i] * 10 * i;
        }
        digits.clear();
    }
};