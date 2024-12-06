class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0)
        {
            return false;
        }
        string str = to_string(x);
        int length = str.length();
        for(int i = 0; i <= length/2 - 1; i++)
        {
            if (str[i] != str[length - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};
