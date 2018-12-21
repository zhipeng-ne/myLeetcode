#include <iostream>
#include <vector>
using namespace std;
int minCostClimbingStairs(vector<int>& cost)
{
        if (cost.size() < 2)
                return 0;
        int nums[cost.size()];
        nums[0] = cost[0];
        nums[1] = cost[1];
        for (int i = 0; i < cost.size(); i++)
        {
                nums[i] = cost[i] + min(nums[i - 1], nums[i - 2]);
        }
        return min(nums[cost.size() - 1], nums[cost.size() - 2]);
}

int minCostClimbingStairs2(vector<int>& cost)
{
        int f1 = 0, f2 = 0;
        for (int k = cost.size() - 1; k >= 0; --k)
        {
                int f0 = cost[k] + min(f1, f2);
                f2 = f1;
                f1 = f0;
        }

        return min(f1, f2);

}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
