#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int>& nums)
{
        int num =nums[0];
        for(int i=1;i<nums.size();i++)
        {
                num^=nums[i];
        }
        return num;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
