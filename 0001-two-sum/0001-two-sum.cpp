class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> others;
        vector<int> indices = {0, 0};

        for(int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];  // 2, 7
            int other = target - num;  // 7, 2

            if(others.count(other) > 0)
            {
                // if(others[other] == i)
                // {
                //     continue;
                // }

                indices[0] = others[other];
                indices[1] = i;
                break;
            }
            else
            {
                others.emplace(num, i);
            }
        }

        return indices;
    }
};