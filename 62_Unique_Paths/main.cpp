#include <iostream>

using namespace std;
int uniquePaths(int m, int n)
{
        int nums[m][n];
        for(int i=0;i<m;i++)
        {
                nums[i][0]=1;
        }
        for(int i=0;i<n;i++)
        {
                nums[0][i]=1;
        }
        for(int i=1;i<m;i++)
        {
                for(int j=1;j<n;j++)
                {
                        nums[i][j]=nums[i-1][j]+nums[i][j-1];
                }
        }
        return nums[m-1][n-1];
}
int main()
{
        cout << uniquePaths(3,3) << endl;
        return 0;
}
