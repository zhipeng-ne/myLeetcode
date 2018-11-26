#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums)
{
        if(nums.size()==0)
            return 0;
        int j = 0;
        for(int i=1;i<nums.size();i++)
        {
                if(nums[i-1]!=nums[i])
                {
                        j++;
                        nums[j]=nums[i];
                }
        }
        return j+1;
}
int main()
{
        //vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
        vector<int> nums;
        cout << removeDuplicates(nums) << endl;
        return 0;
}
