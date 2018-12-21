#include <iostream>
#include <vector>
using namespace std;
class NumArray
{
private:
        vector<int> sum;
public:
        NumArray(vector<int> nums)
        {
                sum.resize(nums.size()+1);
                sum[0]=0;
                for(int i=0;i<nums.size();++i)
                {
                        sum[i+1]=nums[i]+sum[i];
                }
        }

        int sumRange(int i, int j)
        {
                return sum[j+1]-sum[i];
        }
};
int main()
{
        NumArray
        cout << "Hello world!" << endl;
        return 0;
}
