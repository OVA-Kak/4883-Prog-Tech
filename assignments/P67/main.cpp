class Solution {
public:
    string addBinary(string a, string b) 
    {
        bool carry = false;
        int lenA = a.length()-1;
        int lenB = b.length()-1;
        string c = "";
        if (lenA < lenB)
        {
            int j = lenB;
            for (int i = lenA; i >= 0; i--)
            {
                if (a[i]-48 ^ b[j]-48 ^ carry)
                {
                    c = '1' + c;
                }
                else
                {
                    c = '0' + c;
                }
                if ((a[i]-48 && b[j]-48) || (b[j]-48 && carry) || (a[i]-48 && carry))
                {
                    carry = true;
                }
                else
                {
                    carry = false;
                }
                j--;
            }
            for(int i = j; i >= 0; i--)
            {
                if (b[i]-48 ^ carry)
                {
                    c = '1' + c;
                }
                else
                {
                    c = '0' + c;
                }
                if (b[i]-48 && carry)
                {
                    carry = true;
                }
                else
                {
                    carry = false;
                }
            }
        }
        else
        {
            int j = lenA;
            for (int i = lenB; i >= 0; i--)
            {
                if (b[i]-48 ^ a[j]-48 ^ carry)
                {
                    c = '1' + c;
                }
                else
                {
                    c = '0' + c;
                }
                if ((b[i]-48 && a[j]-48) || (a[j]-48 && carry) || (b[i]-48 && carry))
                {
                    carry = true;
                }
                else
                {
                    carry = false;
                }
                j--;
            }
            for(int i = j; i >= 0; i--)
            {
                if (a[i]-48 ^ carry)
                {
                    c = '1' + c;
                }
                else
                {
                    c = '0' + c;
                }
                if (a[i]-48 && carry)
                {
                    carry = true;
                }
                else
                {
                    carry = false;
                }
            }
        }
        if (carry)
        {
            c = '1' + c;
        }
        return c;
    }
};
