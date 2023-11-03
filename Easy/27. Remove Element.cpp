/*

Solved on October 15th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 9.24MB -- Better than 13.38% of C++ users

*/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int total_len = nums.size();
        int valid_len = total_len;
        int valid_pos;
        int temp_num;
        int k = 0;

        for(int i = 0; i < valid_len; i++)
        {
            if(val == nums[i])
            {
                valid_pos = find_valid_pos(nums, val, valid_len, i);
                cout << nums[i] << " " << valid_pos << "\n";
                if(valid_pos < 1000)
                {
                    temp_num = nums[i];
                    nums[i] = nums[valid_pos];
                    nums[valid_pos] = temp_num;
                    valid_len--;
                }
                k++;
            }
        }

        cout << "final: "<< k << " " << total_len << "\n";

        return total_len - k;
    }

    int find_valid_pos(vector<int>& nums, int val, int valid_len, int current_pos)
    {
        for(int i = valid_len - 1; i > current_pos; i--)
        {
            if(nums[i] != val)
            {
                return i;
            }
        }

        return 1000;
    }
};