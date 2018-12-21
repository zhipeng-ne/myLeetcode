#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isPowerOfFour(int num)
{
        while (num % 4 == 0)
        {
                num /= 4;
        }
        return num == 1;
}
bool isPowerOfFour(int num)
{
        int powFour[16]={1,4,16,64,256,1024,4096,16384,65536,
        262144,1048576,4194304,16777216,67108864,268435456,1073741824};
        int l=0,r=15;
        while(l<=r)
        {
                int mid = l+(r-l)/2;
                if(powFour[mid]>num)
                        r=mid-1;
                else if(powFour[mid]<num)
                        l=mid+1;
                else
                        return true;
        }
        return false;
}
int main()
{
        vector<int> nums;
        for (int i = 0; i < 20; i++)
        {
                if (pow(4, i) < INT_MAX)
                {
                        nums.push_back(pow(4, i));
                }

        }
        for (int i = 0; i < nums.size(); ++i)
                cout << nums[i] << ',';
        cout << "\n" << nums.size();
        return 0;
}
