class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        // 두 벡터를 합친다.
        // 0을 제거한다.
        // 정렬한다.

        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        nums1.erase(remove(nums1.begin(), nums1.end(), 0), nums1.end());

        while(nums1.size() < n + m)
        {
            nums1.push_back(0);
        }
        
        sort(nums1.begin(), nums1.end());
    }
};