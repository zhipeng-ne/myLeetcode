#include <iostream>
#include <vector>
using namespace std;
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
{
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        int nums[row][col];
        nums[0][0] = obstacleGrid[0][0] == 1 ? 0 : 1;
        for (int i = 1; i < row; i++)
        {
                nums[i][0] = obstacleGrid[i][0]==1?0:nums[i-1][0];
        }
        for (int i = 1; i < col; i++)
        {
                nums[0][i] = obstacleGrid[0][i]==1?0:nums[0][i-1];
        }
        for (int i = 1; i < row; i++)
        {
                for (int j = 1; j < col; j++)
                {
                        nums[i][j] = obstacleGrid[i][j] == 1?0:nums[i - 1][j] + nums[i][j - 1];
                }
        }
        return nums[row - 1][col - 1];
}
int main()
{
        vector<vector<int>> nums = {{0, 0, 1}, {1, 1, 0}, {0, 0, 0}};
        cout << uniquePathsWithObstacles(nums) << endl;
        return 0;
}
