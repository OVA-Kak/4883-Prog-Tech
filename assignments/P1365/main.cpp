class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size();
        int k;
        vector<int> smaller(size);
        for (int i = 0; i < size; i++)
        {
            k = 0;
            for (int j = 0; j < size; j++)
            {
                if(nums[i] > nums[j])
                {
                    k++;
                }
            }
            smaller[i] = k;
        }
        return smaller;
    }
};
