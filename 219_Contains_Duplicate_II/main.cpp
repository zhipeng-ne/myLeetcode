#include <iostream>
#include <vector>
#include <map>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k)
{
        map<int, int> numMap;
        for (int i = 0; i < nums.size(); ++i)
        {
                auto iter = numMap.find(nums[i]);
                if (iter == numMap.end())
                {
                        numMap.insert({nums[i], i});
                }
                else
                {

                        if (i - iter->second <= k)
                                return true;
                        iter->second = i;
                }
        }
        return false;
}
bool containsNearbyDuplicate1(vector<int>& nums, int k)
{
        unordered_map<int, int> map;
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
                int num = nums[i];
                if (map.find(num) == map.end())
                {
                        map[num] = i;
                }
                else
                {
                        if (i - map[num] <= k)
                        {
                                return true;
                        }
                        else
                        {
                                map[num] = i;
                        }
                }
        }
        return false;
}
int main()
{
        vector<int> nums = {};
        cout << containsNearbyDuplicate(nums, 3) << endl;
        return 0;
}
