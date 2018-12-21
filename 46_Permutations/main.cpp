#include <iostream>
#include <vector>
using namespace std;
void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result)
{
        if (begin >= num.size())
        {
                // one permutation instance
                result.push_back(num);
                return;
        }

        for (int i = begin; i < num.size(); i++)
        {
                swap(num[begin], num[i]);
                permuteRecursive(num, begin + 1, result);
                // reset
                swap(num[begin], num[i]);
        }
}
vector<vector<int> > permute(vector<int> &num)
{
        vector<vector<int> > result;
        permuteRecursive(num, 0, result);
        return result;
}


int main()
{
        vector<int> nums = {1,2,3};
        vector<vector<int>> result = permute(nums);
        return 0;
}
