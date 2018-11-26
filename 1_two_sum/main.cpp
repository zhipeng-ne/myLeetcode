#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> numMap;
        for(int i=0;i<nums.size();++i)
        {
                auto iter= numMap.find(target-nums[i]);
                if(iter!=numMap.end())
                {
                        return vector<int> {iter->second,i};
                }
                numMap[nums[i]]=i;
        }
        return vector<int> {};
}
int main()
{
    vector<int> nums={2,7,9,11};
        vector<int> answer = twoSum(nums,9);
        for(int i=0;i<answer.size();++i)
        {
                cout<<answer[i]<<" ";
        }
    return 0;
}
