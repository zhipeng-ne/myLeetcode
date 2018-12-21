#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums)
{
        if (nums.size() == 0 || nums.size() == 1)
                return true;
        if (nums[0] == 0)
                return false;
        int maxDistance = nums[0];

        for (int i = 1; i < nums.size() - 1; i++)
        {
                if (nums[i] == 0 && maxDistance <= i)
                {
                        return false;
                }
                else if (nums[i] + i > maxDistance)
                {
                        maxDistance = nums[i] + i;
                }
        }
        return true;
}
bool canJump2(vector<int>& nums)
{
        if (nums.size() == 0 || nums.size() == 1)
                return true;
        if (nums[0] == 0)
                return false;
        int maxDistance = nums[0];
        for (int i = 1; i < nums.size() - 1; i++)
        {
                if (nums[i] + i > maxDistance && maxDistance >= i)
                {
                        maxDistance = nums[i] + i;
                }

        }
        return maxDistance >= nums.size() - 1 ? true : false;
}
int main()
{
        vector<int> nums = {3, 2, 2, 0, 4};
        cout << "Hello world!" << endl;
        return 0;
}
