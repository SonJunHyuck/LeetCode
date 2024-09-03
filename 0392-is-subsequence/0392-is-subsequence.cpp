class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        const int end = s.length();
        int idx = 0;

        for(int i = 0; i < t.length(); i++)
        {
            idx += t[i] == s[idx] ? 1 : 0;

            if(idx == end)
            {
                return true;
            }
        }

        // if both a ant t are empty -> true
        return idx == end;
    }
};