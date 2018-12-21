#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums)
{
        if (nums.size() == 0)
                return 0;
        int time = 1;
        int j = 0;
        int num = 0;
        for (int i = 1; i < nums.size(); i++)
        {
                num = nums[i];
                if (nums[i] != nums[i - 1])
                {
                        time = 1;
                }
                else
                {
                        time++;
                }
                if (time <= 2)
                {
                        j++;
                        nums[j] = nums[i];
                }

        }
        return j + 1 ;
}
int removeDuplicates2(vector<int>& nums)
{
        int i = 0;
        for (int n : nums)
        {
                if (i < 2 || n > nums[i - 2])
                        nums[i++] = n;
        }
        return i;
}
int main()
{
        //vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
        vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
        cout << removeDuplicates(nums) << endl;
        return 0;
}
