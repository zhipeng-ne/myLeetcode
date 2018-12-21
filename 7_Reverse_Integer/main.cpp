#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int reverse(int x)
{
        long long num = 0;
        while(x!=0)
        {
                num = num*10+x%10;
                x/=10;
        }
        if(num<INT_MIN||num>INT_MAX)
                return 0;

        return (int)num;
}
int main()
{
        cout <<reverse(-2147483648) << endl;
        return 0;
}
