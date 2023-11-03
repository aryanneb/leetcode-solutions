/*

Solved on October 20th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 13.29MB -- Better than 79.16% of C++ users

*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bought = -1;
        int profit = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            if(i != prices.size() - 1)
            {
                if(prices[i] < prices[i+1] && bought == -1)
                {
                    bought = prices[i];
                }
                if(prices[i] - bought  >= 0 && prices[i] > prices[i+1] && bought != -1)
                {
                    profit += prices[i] - bought;
                    bought = -1;
                }
            }
            else
            {
                if(bought == -1)
                {
                    continue;
                }
                else
                {
                    profit += prices[i] - bought;
                }
            }
        }
        return profit;
    }
};