#include <iostream>
#include <algorithm>
using namespace std;
void nextPermutation(vector<int>& nums)
{
        if(nums.size()<=1)
                return;
        for(int i=nums.size()-1;i>0;i--)
        {
                if(nums[i]>nums[i-1])
                {
                        for(int j=nums.size()-1;j>=0;j--)
                        {
                                if(nums[j]>nums[i-1])
                                {
                                        swap(nums[j],nums[i-1]);
                                        reverse(nums.begin()+i,nums.end());
                                        return;
                                }
                        }
                }
                if(i-1==0)
                {
                        reverse(nums.begin(),nums.end());
                        return;
                }
        }

}
int main()
{
        vector<int> nums={1,2,4,4,6,6,2,4,3,3};
        nextPermutation(nums);
        for(int n:nums)
        {
                cout<<n<<" ";
        }
        return 0;
}
