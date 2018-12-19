#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isValid(string s)
{
        stack<char> bracket;
        for (int i = 0; i < s.size(); ++i)
        {
                if (bracket.empty() && (s[i] == ')' || s[i] == ']' || s[i] == '}'))
                        return false;
                if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                {
                        bracket.push(s[i]);
                }
                else
                {
                        if ((bracket.top() == '(' && s[i] == ')')
                                        || (bracket.top() == '[' && s[i] == ']')
                                        || (bracket.top() == '{' && s[i] == '}'))
                                bracket.pop();
                        else
                                return false;
                }
        }
        return bracket.empty() ? true : false;
}
bool isValid2(string s)
{
        stack<char> stk;
        for ( auto c : s)
        {
                if ((c == '(') || (c == '{') || (c == '['))
                {
                        stk.push(c);
                }
                else
                {
                        if (stk.empty())
                                return false;
                        char stackin = stk.top();

                        if (!( (c == ')' && stackin == '(') ||
                                        (c == '}' && stackin == '{') ||
                                        (c == ']' && stackin == '[') ))
                                return false;
                        stk.pop();

                }
        }
        if (!stk.empty())
                return false;
        return true;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
