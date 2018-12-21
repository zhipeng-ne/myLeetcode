#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void reverseWord(string &s, int start, int end)
{
        for (int i = start, j = end; i < j; i++, j--)
        {
                swap(s[i], s[j]);
        }
}

void reverseWords1(string &s)
{
        int left = 0;
        while (s[left] == ' ')
        {
                left++;
        }
        int right = s.size() - 1;
        while (s[right] == ' ')
        {
                right--;
        }
        s = s.substr(left, right - left + 1);
        reverse(s.begin(), s.end());
        left = -1;
        right = -1;
        for (int i = 0; i < s.size(); i++)
        {
                if (s[i] == ' ')
                {
                        if (right != -1)
                                left = right;
                        right = i;
                        reverseWord(s, left + 1, right - 1);
                }
        }
        reverseWord(s, right + 1, s.size() - 1);
}
void reverseWords(string &s)
{
        reverse(s.begin(), s.end());
        int storeIndex = 0;
        for (int i = 0; i < s.size(); i++)
        {
                if (s[i] != ' ')
                {
                        if (storeIndex != 0) s[storeIndex++] = ' ';
                        int j = i;
                        while (j < s.size() && s[j] != ' ')
                        {
                                s[storeIndex++] = s[j++];
                        }
                        reverse(s.begin() + storeIndex - (j - i), s.begin() + storeIndex);
                        i = j;
                }
        }
        s.erase(s.begin() + storeIndex, s.end());
}

void reverseWords(string &s)
{
        reverse(s.begin(), s.end());
        int left = 0;
        int right = 0;
        bool isChar = false;
        string tmp ;
        for (int i = 0; i < s.size(); i++)
        {
                if (s[i] != ' ' && !isChar)
                {
                        left = i;
                        isChar = true;
                }
                else if (s[i] == ' ' && isChar)
                {
                        right = i;
                        isChar = false;
                        reverseWord(s, left, right - 1);
                        if (tmp.size() == 0)
                        {
                                tmp = s.substr(left, right - left);
                        }
                        else
                        {
                                tmp = tmp + " " + s.substr(left, right - left);
                        }
                }

        }
        reverseWord(s, right + 1, s.size() - 1);
        s = tmp + " " + s.substr(right + 1, s.size() - right);
}
int main()
{
        string s = "  the   sky  is  blue  ";
        reverseWords(s);
        cout << s << endl;
        return 0;
}
