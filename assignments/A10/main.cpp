class Solution {
public:
    bool isSelfCrossing(vector<int>& distance) {
        if (distance.size() <= 3)
        {
            return false;
        }
        int lastOdd = distance[0];
        int lastEven = distance[1];
        bool isSpiralOutward = true;
        int i = 2;
        int x0 = -distance[1];
        int y0 = distance[0] - distance[2];
        int x1 = -distance[1];
        int y1 = distance[0];
        int x2 = 0;
        int y2 = distance[0];
        int x3 = 0;
        int y3 = 0;
        int x4 = 0;
        int y4 = 0;
        int x5 = 0;
        int y5 = 0;
        int x6 = 0;
        int y6 = 0;
        while (isSpiralOutward)
        {
            if(i % 2 == 0)
            {
                if(distance[i] <= lastOdd)
                {
                    isSpiralOutward = false;
                }
                lastOdd = distance[i];
            }
            else
            {
                if(distance[i] <= lastEven)
                {
                    isSpiralOutward = false;
                }
                lastEven = distance[i];
            }
            i++;
            if (i >= distance.size())
            {
                return false;
            }
            x6 = x5;
            y6 = y5;
            x5 = x4;
            y5 = y4;
            x4 = x3;
            y4 = y3;
            x3 = x2;
            y3 = y2;
            x2 = x1;
            y2 = y1;
            x1 = x0;
            y1 = y0;
            switch (i % 4)
            {
                case 0:
                    y0 += distance[i];
                    break;
                case 1:
                    x0 -= distance[i];
                    break;
                case 2:
                    y0 -= distance[i];
                    break;
                case 3:
                    x0 += distance[i];
                    break;
            }
        }

        //fix intersection check A((x0, y0), (x1, y1)) 
        //against B((x3, y3), (x4, y4)) and C((x5, y6), (x6, y6))
        cout << i % 4;
        switch(i % 4)
        {
            case 0:
                if (y0 >= y3 && x0 >= x3 && x0 <= x4)
                {
                    return true;
                }
                if (y0 >= y5 && x0 >= x6 && x0 <= x5)
                {
                    return true;
                }
                break;
            case 1:
                if (x0 <= x3 && y0 >= y3 && y0 <= y4)
                {
                    return true;
                }
                if (x0 <= x5 && y0 >= y6 && y0 <= y5)
                {
                    return true;
                }
                break;
            case 2:
                if (y0 <= y3 && x0 <= x3 && x0 >= x4)
                {
                    return true;
                }
                if (y0 <= y5 && x0 <= x6 && x0 >= x5)
                {
                    return true;
                }
                break;
            case 3:
                if (x0 >= x3 && y0 <= y3 && y0 >= y4)
                {
                    return true;
                }
                if (x0 >= x5 && y0 <= y6 && y0 >= y5)
                {
                    return true;
                }
                break;
        }

        while (true)
        {
            if(i % 2 == 0)
            {
                if(distance[i] >= lastOdd)
                {
                    return true;
                }
                lastOdd = distance[i];
            }
            else
            {
                if(distance[i] >= lastEven)
                {
                    return true;
                }
                lastEven = distance[i];
            }
            i++;
            if (i >= distance.size())
            {
                return false;
            }
        }

    }
};
