#include <iostream>
#include <unordered_map>
#include <vector>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs)
{
        vector<vector<string>> result;
        unordered_map<string, int> wordMap;
        int index = 0;
        for (int i = 0; i < strs.size(); i++)
        {
                string tmp = strs[i];
                sort(tmp.begin(), tmp.end());
                auto iter = wordMap.find(tmp);
                if (iter == wordMap.end())
                {
                        result.push_back(vector<string> {strs[i]});
                        wordMap.insert({tmp, index});
                        index++;
                }
                else
                {
                        result[iter->second].push_back(strs[i]);
                }
        }
        return result;

}
int primes[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
vector<vector<string>> groupAnagrams(vector<string>& strs)
{
        unordered_map<long, vector<string>> m;
        for (string str : strs)
        {
                int num = 1;
                for (char c : str)
                {
                        num *= primes[c - 'a'];
                }
                m[num].push_back(str);
        }
        vector<vector<string>> res;
        for (auto it : m)
        {
                res.push_back(it.second);
        }
        return res;
}
int main()
{

        return 0;
}
