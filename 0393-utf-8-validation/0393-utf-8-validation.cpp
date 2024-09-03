class Solution {
public:
    bool validUtf8(vector<int>& data) 
    {
        int idx = 0;
        while(idx < data.size())
        {
            int numByte = 0;
            bitset<8> b(data[idx]);

            for(int i = 7; i >= 0; i--)
            {
                if(b[i])
                {
                    numByte++;
                }
                else
                {
                    break;
                }
            }
            
            if(numByte == 1)
            {
                return false;
            }

            if(numByte > data.size())
            {
                return false;
            }

            // 한 문자에 4바이트
            numByte = min(numByte, 4);

            for(int i = 1; i < numByte; i++)
            {
                b = bitset<8>(data[idx + i]);

                if(b[7] != 1 || b[6] != 0)
                {
                    return false;
                }
            }

            idx += numByte == 0 ? 1 : numByte;
        }

        return true;
    }
};