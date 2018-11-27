#include <iostream>
#include <string>
using namespace std;
string addBinary(string a, string b)
{
        string sumStr;
        int i=a.size()-1,j=b.size()-1;
        int carry=0;
        while(i>=0||j>=0||carry>0)
        {
                int sum = ((i>=0?a[i]:'0')-'0')+((j>=0?b[j]:'0')-'0')+carry;
                carry=sum/2;
                sum=sum%2;
                string tmp(1,char(sum+'0'));
                sumStr = tmp+sumStr;
                i--;
                j--;
        }
       return sumStr;
}
int main()
{
        string a = "1010";
        string b = "1011";
        cout<<addBinary(a,b)<<endl;
        return 0;
}
