#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> grayCode(int n)
{
        if (n == 0)
                return vector<int> {0};
        if (n == 1)
                return vector<int> {0,1};
        vector<int> nums(pow(2,n));
        nums[0]=0,nums[1]=1;
        for(int i=2;i<=n;i++)
        {
                for(int j=pow(2,i-1),k=j-1;j<pow(2,i);j++,k--)
                {
                        nums[j] = nums[k]+pow(2,i-1);
                }
        }
        return nums;

}
int main()
{
        vector<int> nums = grayCode(2);
        for(int n:nums)
                cout<<n<<" ";
        return 0;
}
