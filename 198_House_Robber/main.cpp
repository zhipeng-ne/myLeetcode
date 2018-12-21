#include <iostream>
#include <vector>
using namespace std;
int rob(vector<int>& nums)
{
        if(nums.size()==0)
                return 0;
        if(nums.size()==1)
                return nums[0];
        int maxMoney = 0;
        int money[nums.size()];
        money[0] = nums[0];
        money[1] = nums[1];
        for(int i=2;i<nums.size();i++)
        {
                int tmp =0;
                if(i>=3)
                        tmp = money[i-3];
                money[i]=nums[i]+max(money[i-2],tmp);
        }
        return max(money[nums.size()-1],money[nums.size()-2]);
}
int main()
{
        vector<int> nums={2,1,1,2};
        cout << rob(nums) << endl;
        return 0;
}
