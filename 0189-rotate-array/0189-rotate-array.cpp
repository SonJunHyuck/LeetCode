class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int len = nums.size();
        k = k % len;
        
        vector<int> copy = nums;
        
        for(int i = 0; i < len; i++)
        {
            int idx = len - k + i;
            idx = idx >= len ? idx - len : idx;

            nums[i] = copy[idx];
        }
    }
};