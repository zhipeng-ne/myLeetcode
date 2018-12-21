#include <iostream>
#include <vector>
using namespace std;
int minimumTotal(vector<vector<int>>& triangle)
{
        int n = triangle.size();
        int m = triangle[n-1].size();
        int cost[m];
        for(int i=0;i<m;i++)
        {
                cost[i]=triangle[n-1][i];
        }
        for(int i=n-2;i>=0;i--)
        {
                for(int j=0;j<=i;j++)
                {
                        cost[j]=min(cost[j],cost[j+1])+triangle[i][j];
                }
        }

        return cost[0];
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
