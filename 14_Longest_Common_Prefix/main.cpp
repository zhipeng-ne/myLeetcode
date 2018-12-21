#include <iostream>
#include <string>
#include <vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs)
{
        if(strs.size()==0)
            return "";
        int len = 0;
        bool isSame = false;
        for (int i = 0; i < strs[0].size(); i++)
        {
                for (int j = 0; j < strs.size() - 1; j++)
                {
                        if (strs[j][i] == strs[j + 1][i])
                        {
                                isSame = true;
                        }
                        else
                        {
                                isSame = false;
                                break;
                        }
                }
                if (isSame)
                        len++;
        }
        return strs[0].substr(0, len);
}
int main()
{
        vector<string> strs= {"flower","flow","flight"};
        cout <<longestCommonPrefix(strs) << endl;
        return 0;
}
