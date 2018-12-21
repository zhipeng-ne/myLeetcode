#include <iostream>
#include <vector>
using namespace std;
int minPathSum(vector<vector<int>>& grid)
{
        int val[grid.size()][grid[0].size()];
        int i;
        int j;
        for (i = 0; i < grid.size(); i++)
        {
                for (j = 0; j < grid[i].size(); j++)
                {
                        int left = INT_MAX;
                        int up = INT_MAX;
                        if (i == 0 && j == 0)
                        {
                                left = 0;
                                up = 0;
                        }
                        if (i > 0)
                                up = val[i - 1][j];

                        if (j > 0)
                                left = val[i][j - 1];
                        val[i][j] = min(up, left) + grid[i][j];
                }
        }
        return val[i - 1][j - 1];
}
int main()
{
        vector<vector<int>> nums = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
        cout << minPathSum(nums);
        return 0;
}
