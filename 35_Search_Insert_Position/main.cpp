#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int>& nums, int target)
{
        int index = 0;
        for (int i = 0; i < nums.size(); i++)
        {
                if (nums[i] == target)
                        return i;
                else if (nums[i] < target)
                {
                        index = i + 1;
                }
        }
        return index;
}
int searchInsert2(vector<int>& nums, int target)
{
        int index = 0;
        int left = 0;
        int right = nums.size() - 1;
        int middle;

        while (right <= left)
        {
                middle = left + (right - left) / 2;
                if (nums[middle] == target)
                {
                        return middle;
                }
                else if (nums[middle] > target)
                {
                        left = middle - 1;
                }
                else
                {
                        right = middle + 1;
                }
        }
        return index;
}
int main()
{
        vector<int> nums = {1, 3, 5, 6};
        cout << searchInsert(nums, 5) << endl;
        cout << searchInsert(nums, 2) << endl;
        cout << searchInsert(nums, 7) << endl;
        cout << searchInsert(nums, 0) << endl;
        return 0;
}
