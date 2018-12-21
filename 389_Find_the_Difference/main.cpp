#include <iostream>
#include <string>
using namespace std;
char findTheDifference(string s, string t)
{
        char str[26];
        for(int i=0;i<26;i++)
        {
                str[i]=0;
        }
        for(int i=0;i<t.size();i++)
        {
                str[t[i]-'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
                str[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
                if(str[t[i]-'a']%2!=0)
                        return t[i];
        }
        return '';
}
char findTheDifference1(string s, string t)
{
        char result=0;

        for(int i=0;i<s.size();i++)
        {
                result^=(s[i]^t[i]);
        }
        result^=t[s.size()-1];
        return (char)result;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
