#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)
{
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i=0;i<nums.size();++i)
        {
                if(i>0&&nums[i]==nums[i-1])
                        continue;
                int left=i+1;
                int right=nums.size()-1;
                while(left<right)
                {
                        int s = nums[i]+nums[left]+nums[right];
                        if(s>0)
                                right--;
                        else if(s<0)
                                left++;
                        else
                        {
                                result.push_back(vector<int> {nums[i],nums[left],nums[right]});
                                while(left+1<right&&nums[left]==nums[left+1])
                                        left++;
                                while(right-1>left&&nums[right]==nums[right+1])
                                        right++;
                                left++;
                                right--;
                        }
                }
        }
        return result;
}
vector<vector<int>> threeSum2(vector<int>& nums)
{
        //sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        if(nums.size()==0)
                return result;
        map<int,int> numIndex;
        for(int i=0;i<nums.size()-1;++i)
        {

                int tmp = -(nums[i]+nums[i+1]);
                auto iter = numIndex.find(tmp);
                if(iter!= numIndex.end())
                {
                        result.push_back(vector<int> {iter->first,nums[i],nums[i+1]});
                }
                numIndex[nums[i]]=i;
        }
        return result;
}
int main()
{
        //vector<int> nums = { -1, 0, 1, 2, -1, -4};
        vector<int> nums;
        //-4,-1,-1,0,1,2
        vector<vector<int>> sum=threeSum2(nums);
        for(int i=0;i<sum.size();i++)
        {
                for(int j=0;j<sum[i].size();j++)
                {
                        cout<<sum[i][j]<<" ";
                }
                cout<<endl;
        }
        return 0;
}
