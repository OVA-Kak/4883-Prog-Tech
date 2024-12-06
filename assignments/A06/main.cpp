class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int temp = 0;
        while(stones.size() > 1)
        {
            sort(stones.begin(), stones.end(), greater<int>());
            printVector(stones);
            if (stones[0] > stones[1])
            {
                stones[0] = stones[0] - stones[1];
                stones.erase(stones.begin() + 1);
            }
            else if (stones[0] < stones[1])
            {
                stones[1] = stones[1] - stones[0];
                stones.erase(stones.begin() + 0);
            }
            else
            {
                stones.erase(stones.begin() + 1);
                stones.erase(stones.begin() + 0);
            }
        }
        if(stones.size())
        {
            return stones[0];
        }
        else
        {
            return 0;
        }
    }

//Forgot to remove
    void printVector(vector<int> vec)
    {
        for(int i = 0; i < vec.size(); i++)
        {
            cout << vec[i];
        }
        cout << '\n';
    }
};
