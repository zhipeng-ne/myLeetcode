#include <iostream>
#include <stack>
using namespace std;
int getNumber(char s)
{
        switch (s)
        {
        case 'I':
                return 1;
        case 'V':
                return 5;
        case 'X':
                return 10;
        case 'L':
                return 50;
        case 'C':
                return 100;
        case 'D':
                return 500;
        case 'M':
                return 1000;
        default:
                return 0;
        }
}
int romanToInt(string s)
{
        int result = 0;
        stack<int> nums;
        for (int i = 0; i < s.size(); i++)
        {
                if (nums.empty())
                {
                        nums.push(getNumber(s[i]))
                }
                else
                {
                        int num = getNumber(s[i]);
                        int tmp = nums.top();
                        if (num > tmp)
                        {
                                nums.pop();
                                nums.push(num - tmp);
                        }
                        else if (s[i] == s[i - 1])
                        {
                                nums.pop();
                                nums.push(num + tmp);
                        }
                        else
                        {
                                nums.push(num);
                        }

                }
        }
        while (!nums.empty())
        {
                result += nums.top();
                nums.pop();
        }
        return result;
}
int romanToInt2(const string& s) const
{
        int res = 0;
        size_t len = s.size();

        int prev = 0;
        for (int i = 0; i < len; ++i)
        {
                int c = lookup(s[i]);
                if (prev < c)
                {
                        prev *= -1;
                }
                res += prev;
                prev = c;
        }

        res += prev;

        return res;
}
int main()
{

        return 0;
}
