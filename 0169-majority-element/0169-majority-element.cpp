class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int answer = 0;
        int critera = nums.size() / 2;
        
        map<int, int> count;

        for(int i = 0; i < nums.size(); i++)
        {
            int key = nums[i];

            count[key]++;
        }

        for(auto element : count)
        {
            if(element.second > critera)
            {
                answer = element.first;
                break;
            }
        }

        return answer;
    }
};