#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums)
{
        if(nums.size()==0)
                return 0;
        int maxSum=nums[0];
        int curSum =0;
        for(int i=0;i<nums.size();i++)
        {
                curSum+=nums[i];
                if(curSum>=maxSum)
                        maxSum = curSum;
                if(curSum<0)
                        curSum=0;

        }
        return maxSum;
}
int main()
{
        vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4};

        cout << maxSubArray(nums)<< endl;
        return 0;
}
