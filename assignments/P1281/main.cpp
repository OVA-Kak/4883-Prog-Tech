class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        int i = 0;
        while (n)
        {
            i = n % 10;
            n = n / 10;
            sum += i;
            product *= i;
        }
        return product - sum;
    }
};
