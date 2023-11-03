/*

Solved on October 14th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 9.3MB -- Better than 58.86% of C++ users

*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(n == 0)
            return;
    
        m--;
        n--;

        while(m+n+1 >= 0)
        {   
            if(n < 0)
            {
                nums1[m+n+1] = nums1[m];
                m--;
            }   
            else if(m < 0)
            {
                nums1[m+n+1] = nums2[n];
                n--;
            }   
            else if(nums2[m+n+1] > nums1[m])
            {
                nums1[m+n+1] = nums2[n];
                n--;
            }
            else if(nums2[m+n+1] <= nums1[m])
            {
                nums1[m+n+1] = nums1[m];
                m--;
            }
        }
    }
};