#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int>& nums)
{
        int total = nums.size()*(nums.size()+1)/2;
        for(int i=0;i<nums.size();i++)
        {
                total-=nums[i];
        }
        return total;

}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
