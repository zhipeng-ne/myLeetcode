#include <iostream>
#include <string>
using namespace std;
string countAndSay(int n)
{
        string result = "1";
        string tmp;
        for(int i=2;i<=n;i++)
        {
                int time=1;
                for(int j=0;j<result.size()-1;j++)
                {
                        if(result[j]==result[j+1])
                        {
                                time++;
                        }
                        else
                        {
                                tmp=tmp+char(time+'0')+result[j];
                                time=1;
                        }
                }
                result = tmp+char(time+'0')+result[result.size()-1];
                tmp = "";
        }
        return result;
}
int main()
{
        cout << countAndSay(3) << endl;
        return 0;
}
