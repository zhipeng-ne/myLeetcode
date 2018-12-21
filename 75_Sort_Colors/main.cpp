#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int>& nums)
{
        int colors[3];
        colors[0] = 0, colors[1] = 0, colors[2] = 0;
        for (int i = 0; i < nums.size(); i++)
        {
                colors[nums[i]]++;
        }
        int index = 0;
        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < colors[i]; j++)
                {
                        nums[index++] = i;
                }
        }

}
void sortColors2(vector<int>& nums)
{
        for (int i = 0, left = 0, right = (int)nums.size() - 1; i <= right; )
        {
                if (nums[i] == 2) swap(nums[i], nums[right--]);
                else if (nums[i] == 0) swap(nums[i++], nums[left++]);
                else ++i;
        }
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
