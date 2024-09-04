class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int s = 0; // start
        int n = matrix.size() - 1;  // length

        while(s < n)
        {
            // save outline
            vector<int> t, b, l, r;
            for(int i = s; i <= n; i++)
            {
                t.push_back(matrix[s][i]);
                b.push_back(matrix[n][i]);
            }

            for(int i = n; i >= s; i--)
            {
                l.push_back(matrix[i][s]);
                r.push_back(matrix[i][n]);
            }

            for(int i = s; i <= n; i++)
            {
                int idx = i - s;
                matrix[s][i] = l[idx];
                matrix[n][i] = r[idx];
                matrix[i][s] = b[idx];
                matrix[i][n] = t[idx];
            }

            s++;
            n--;
        }
    }
};