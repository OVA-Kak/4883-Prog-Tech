class Solution {
public:
    bool isPerfectSquare(int num) {
        int i = 0;
        int j = 0;
        while (true)
        {
            if (j < num)
            {
                i++;
                if (i == 46341)
                {
                    return false;
                }
                j = i * i;
            }
            else if (j == num)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
