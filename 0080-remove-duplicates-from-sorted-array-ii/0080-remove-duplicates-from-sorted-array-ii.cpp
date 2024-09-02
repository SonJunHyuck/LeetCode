class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int idx = 1;
        int cur = nums[0];
        bool isDup = false;
        for(int i = 1; i < nums.size(); i++)
        {
            if(cur == nums[i])
            {
                if(!isDup)
                {
                    isDup = true;
                    nums[idx] = cur;
                    idx++;
                }
            }
            else
            {
                cur = nums[i];
                nums[idx] = cur;
                idx++;
                isDup = false;
            }
        }
        
        return idx;
    }
};