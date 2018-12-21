#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate1(vector<int>& nums, int k)
{
        if(nums.size()<=1)
                return;
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+nums.size()-k);
        reverse(nums.begin()+nums.size()-k,nums.end());
        reverse(nums.begin(),nums.end());
}
int main()
{
        vector<int> nums = {1,2,3,4,5,6,7};
        rotate1(nums,3);
        for(int i=0;i<nums.size();i++)
        {
                cout<<nums[i]<<" ";
        }

        return 0;
}
