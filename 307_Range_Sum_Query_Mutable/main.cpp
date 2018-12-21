#include <iostream>
#include <vector>
using namespace std;
class NumArray
{
public:
        vector<int> num;
        vector<int> sum;
        NumArray(vector<int> nums)
        {
                num = nums;
                sum.resize(nums.size() + 1);
                sum[0] = 0;
                for (int i = 0; i < nums.size(); ++i)
                {
                        sum[i + 1] = nums[i] + sum[i];
                }
        }

        void update(int i, int val)
        {
                int diff = num[i] -val;
                num[i] = val;
                for(int j=i+1;j<sum.size();j++)
                {
                        sum[j] -=diff;
                }
        }

        int sumRange(int i, int j)
        {
                return sum[j+1]-sum[i];
        }
};
int main()
{

        return 0;
}
