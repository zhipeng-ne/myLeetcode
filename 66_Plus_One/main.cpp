#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int>& digits)
{
        int carry = 0;
        int sum = digits[digits.size() - 1] + 1;
        carry = sum / 10;
        sum = sum % 10;
        digits[digits.size() - ] = sum;
        for (int i = digits.size() - 2; i >= 0; i--)
        {
                sum = digits[i] + carry;
                carry = sum / 10;
                sum = sum % 10;
                digits[i] = sum;

        }
        if (carry > 0)
        {
                vector<int> res(digits.size() + 1, 0);
                res[0] = 1;
                for (int i = 1; i < res.size(); i++)
                {
                        res[i] = digits[i - 1];
                }
                return res;
        }
        return digits;
}

int main()
{
        vector<int> nums = {9, 9, 9, 9};
        vector<int> result = plusOne(nums);
        for (int i = 0; i < result.size(); i++)
        {
                cout << result[i] << " ";
        }
        return 0;
}
