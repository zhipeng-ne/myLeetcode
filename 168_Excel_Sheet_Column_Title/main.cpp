#include <iostream>
#include <string>
using namespace std;
string convertToTitle(int n)
{
        string res="";
        while(n>0)
        {
                n--;
                res=char(n%26+'A')+res;
                n/=26;
        }
        return res;
}
int main()
{
        cout<<convertToTitle(701)<<endl;
        return 0;
}
