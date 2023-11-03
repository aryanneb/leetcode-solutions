/*

Solved on October 19th, 2023
Runtime of 85ms -- Better than 90.08% of C++ users
Memory Allocation of 93.56MB -- Better than 74.41% of C++ users

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int smallest = 10000;
        int profit = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < smallest)
            {
                smallest = prices[i];
            }
            if(prices[i] - smallest > profit)
            {
                profit = prices[i] - smallest;
            }
        }
        return profit;
    }
};