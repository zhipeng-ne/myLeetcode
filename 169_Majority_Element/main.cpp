#include <iostream>

using namespace std;
int majorityElement(vector<int>& nums)
{
        int element = nums[0];
        int time = 1;
        for (int i = 1; i < nums.size(); i++)
        {
                if (time == 0)
                {
                        element = nums[i];
                        time++;
                }
                else if (nums[i] == element)
                        time++;
                else
                        time--;
        }
        return element;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
