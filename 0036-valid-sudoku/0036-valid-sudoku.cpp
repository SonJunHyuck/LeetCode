class Solution {
public:
    bool IsValidRow(const vector<vector<char>>& board, int row)
    {
        vector<bool> valid = vector<bool>(10, false);

        for(int i = 0; i < 9; i++)
        {
            if(board[row][i] == 46)
                continue;

            int id = board[row][i] - 48;

            if(valid[id] == true)
            {
                cout << id << endl;
                return false;
            }
            else
            {
                valid[id] = true;
            }
        }

        return true;
    }

    bool IsValidCol(const vector<vector<char>>& board, int col)
    {
        vector<bool> valid = vector<bool>(10, false);

        for(int i = 0; i < 9; i++)
        {
            if(board[i][col] == 46)
                continue;

            int id = board[i][col] - 48;

            if(valid[id] == true)
            {
                return false;
            }
            else
            {
                valid[id] = true;
            }
        }

        return true;
    }

    bool IsValidGrid(const vector<vector<char>>& board, int x, int y)
    {
        vector<bool> valid = vector<bool>(10, false);

        for(int i = y; i < y + 3; i++)
        {
            for(int j = x; j < x + 3; j++)
            {
                if(board[i][j] == 46)
                    continue;

                int id = board[i][j] - 48;
                if(valid[id] == true)
                {
                    return false;
                }
                else
                {
                    valid[id] = true;
                }
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) 
    {
        for(int row = 0; row < 9; row++)
        {
            if(IsValidRow(board, row) == false)
            {
                cout << "Row Fail" << endl;
                return false;
            }
        }

        for(int col = 0; col < 9; col++)
        {
            if(IsValidCol(board, col) == false)
            {
                cout << "Col Fail" << endl;
                return false;
            }
        }

        for(int y = 0; y < 9; y += 3)
        {
            for(int x = 0; x < 9; x += 3)
            {
                if(IsValidGrid(board, x, y) == false)
                {
                    cout << "Grid Fail" << endl;
                    return false;
                }
            }
        }

        return true;
    }
};