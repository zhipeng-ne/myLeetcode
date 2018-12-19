#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle)
{
        if (needle.size() == 0)
                return 0;
        int arr[needle.size()];
        arr[0] = 0;
        for (int i = 1, j = 0; i < needle.size();)
        {
                if (needle[i] == needle[j])
                {
                        arr[i] = j + 1;
                        j++;
                        i++;
                }
                else
                {
                        if (j != 0)
                        {
                                j = arr[j - 1];
                        }
                        else
                        {
                                arr[i] = 0;
                                i++;
                        }
                }
        }
        for (int i = 0, j = 0; i < haystack.size();)
        {
                if (haystack[i] == needle[j])
                {
                        j++;
                        i++;
                }
                else
                {
                        if (j != 0)
                        {
                                j = arr[j - 1];
                        }
                        else
                        {
                                i++;
                        }
                }
                if (j >= needle.size())
                {
                        return i - j + 1;
                }
        }
        return -1;
}
int strStr1(string haystack, string needle)
{
        return haystack.find(needle);
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
