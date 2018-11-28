#include <iostream>

using namespace std;
int lengthOfLastWord(string s)
{
        int num = 0;
        bool isChar = false;
        for (int i = s.size() - 1; i >= 0; i--)
        {
                if (s[i] == ' ' && !isChar)
                {
                        continue;
                }
                if (s[i] == ' ' && isChar)
                {
                        break;
                }
                if (s[i] != ' ')
                {
                        num++;
                        isChar = true;
                }
        }
        return num;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
