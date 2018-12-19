#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int binarySearch(vector<int>& numbers, int n, int target)
{
        int l = 0, r = n;
        while (l <= r)
        {
                int m = l + (r - l) / 2;
                if (numbers[m] > target)
                        r = m - 1;
                else if (numbers[m] < target)
                        l = m + 1;
                else
                        return m;
        }
        return -1;
}
vector<int> twoSum(vector<int>& numbers, int target)
{
        for (int i = 0; i < numbers.size(); i++)
        {
                int index = binarySearch(numbers, i - 1, target - numbers[i]);
                if (index != -1)
                        return vector<int> {index, i};
        }
        return vector<int> {0, numbers.size() - 1};
}

vector<int> twoSum1(vector<int>& numbers, int target)
{
        unordered_map<int, int> m;
        for (int i = 0; i < numbers.size(); ++i)
        {
                if (m.count(target - numbers[i]))
                        return {m[target - numbers[i]] + 1, i + 1};
                else
                        m[numbers[i]] = i;
        }
}
vector<int> twoSum2(vector<int>& numbers, int target)
{
        int flag = 0, rflag = numbers.size() - 1;
        if (rflag < 1)
        {
                return {};
        }
        while (flag < rflag)
        {
                int sub = target - numbers[flag];
                while (sub < numbers[rflag])
                {
                        --rflag;
                }
                if (numbers[rflag] == sub)
                {
                        return {++flag, ++rflag};
                }
                while (numbers[flag] == numbers[++flag]);
        }
        return {};
}
int main()
{
        vector<int> nums = {2,7,11,15};
        twoSum2(nums,18);
        return 0;
}
