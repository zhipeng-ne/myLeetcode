#include <iostream>
#include <cctype>
#include <string>
using namespace std;
bool isPalindrome(string s)
{
        string processStr;
        for (int i = 0; i < s.size(); ++i)
        {
                if (isalnum(s[i]))
                {
                        processStr += (char)tolower(s[i]);
                }
        }
        int n = processStr.size();
        for (int  i = 0; i < n / 2; ++i)
        {
                if (processStr[i] != processStr[n - 1 - i])
                        return false;
        }
        return true;
}
bool isPalindrome1(string s)
{
        int n = s.size();
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
                while (i < j && !isalnum(s[i])) i++;
                while (i < j && !isalnum(s[j])) j--;
                if (tolower(s[i++]) != tolower(s[j--]))
                        return false;
        }
        return true;
}
int main()
{
        string s = "A man, a plan, a canal: Panama";
        cout << isPalindrome(s);
        return 0;
}
