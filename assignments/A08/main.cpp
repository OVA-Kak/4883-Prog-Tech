class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islandCount = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    recursiveFill(grid, i, j);
                    islandCount++;
                }
            }
        }
        return islandCount;
    }
    void recursiveFill(vector<vector<char>>& grid, int x, int y)
    {
        if(x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size())
        {
            if (grid[x][y] == '1')
            {
                grid[x][y] = '0';
                recursiveFill(grid, x+1, y);
                recursiveFill(grid, x-1, y);
                recursiveFill(grid, x, y+1);
                recursiveFill(grid, x, y-1);
            }
        }
    }
};
